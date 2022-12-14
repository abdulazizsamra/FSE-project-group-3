#include <iostream>
#include <vector>
#include<limits>
#include "src/dfs.h"

int main() {
    std::cout << "Enter the number of vertices and edges: ";
    int n, m;
    std::cin >> n >> m;
    while(true)
    {
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cerr << "Vertices and edges are integer numbers."<<std::endl;
            exit(1);
        } else if (n < 1 || m < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cerr << "Number of edges must be >= 0, number of vertices must be >= 1."<<std::endl;
            exit(1);
        } else if (m > n * (n - 1) / 2){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cerr << "Number of edges can not be more than n * (n - 1) / 2. Where n is numer of vertices."<<std::endl;
            exit(1);
        } else {
            break;
        }
    }
    std::cout << std::endl;
    std::cout << "Enter the graph in format parent_node child_node." << std::endl;
    std::vector<Node> nodes;
    for (int i = 0; i < n; ++i) {
        Node node;
        node.vertex = i;
        nodes.push_back(node);
    }
    for (int i = 0; i < m; ++i) {
        int parent, child;
        std::cin >> parent >> child;
        while(true)
        {
            if(std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cerr << "ERROR in line " << i << " of graph input." << std::endl;
                std::cerr << "Vertices must be integer numbers"<<std::endl;
                exit(1);
            } else if (parent < 0 || child < 0) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cerr << "ERROR in line " << i << " of graph input." << std::endl;
                std::cerr << "Node id can not be less than 0."<<std::endl;
                exit(1);
            } else if (parent > n - 1 || child > n - 1) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cerr << "ERROR in line " << i << " of graph input." << std::endl;
                std::cerr << "Node id can not be more than n - 1. Where n is number of nodes in the graph."<<std::endl;
                exit(1);
            } else if (parent == child) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cerr << "ERROR in line " << i << " of graph input." << std::endl;
                std::cerr << "A node can't be parent to itself."<<std::endl;
                exit(1);
            } else {
                break;
            }
        }
        nodes[parent].children.push_back(&nodes[child]);
    }
    DFS algo(n, nodes);
    algo.dfs();
    return 0;
}
