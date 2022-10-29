#include "Node.h"
#include <vector>

class DFS {
private:
    static void print_array(std::vector<bool>& arr) {
        for (bool el : arr) {
            int num = 0;
            if (el) {
                num = 1;
            }
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    void dfs_internal(std::vector<bool>& visited, Node* node) {
        visited[node->vertex] = true;
        print_array(visited);
        for (auto & child : node->children) {
            if (!visited[child->vertex]) {
                dfs_internal(visited, child);
            }
        }
    }
public:
    Node* head;
    int n;
    DFS(Node* head_, int n_) {
        head = head_;
        n = n_;
    }
    void dfs() {
        std::vector<bool> visited(n, false);
        std::vector<int> parent(n, 0);
        dfs_internal(visited, head);
    }
};
