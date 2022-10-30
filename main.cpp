#include <iostream>
#include <vector>
#include "src/dfs.h"

int main() {
    std::cout << "Enter the number of vertices and edges: ";
    int n, m;
    std::cin >> n >> m;
    std::cout << std::endl;
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
        nodes[parent].children.push_back(&nodes[child]);
    }
    DFS algo(n, nodes);
    algo.dfs();
    return 0;
}
