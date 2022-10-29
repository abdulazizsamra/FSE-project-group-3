#include <iostream>
#include <vector>
#include "dfs.h"

int main() {
    std::cout << "Enter the number of vertices: ";
    int n;
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "Enter number of head node: ";
    int head;
    std::cin >> head;
    std::cout << std::endl;
    std::cout << "Enter the graph in format parent_node child_node." << std::endl;
    std::vector<Node> nodes;
    for (int i = 0; i < n; ++i) {
        Node node;
        node.vertex = i;
        nodes.push_back(node);
    }
    for (int i = 0; i < n - 1; ++i) {
        int parent, child;
        std::cin >> parent >> child;
        nodes[parent].children.push_back(&nodes[child]);
    }
    auto graph = nodes[head];
    DFS algo(&graph, n);
    algo.dfs();
    return 0;
}
