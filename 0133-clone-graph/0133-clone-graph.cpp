class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr; 
        Node* root = new Node(node->val);
        unordered_map<Node*, Node*> visited;
        queue<Node*> q;
        q.push(node);
        visited[node] = root;
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            for (Node* neighbor : current->neighbors) {
                if (visited.find(neighbor) == visited.end()) {
                    Node* clonedNeighbor = new Node(neighbor->val);
                    visited[neighbor] = clonedNeighbor;
                    q.push(neighbor);
                }
                visited[current]->neighbors.push_back(visited[neighbor]);
            }
        }
        return root;
    }
};
