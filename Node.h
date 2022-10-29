#include <iostream>
#include <vector>

class Node {
public:
    int vertex;
    std::vector<Node*> children;
};