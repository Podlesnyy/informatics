#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;

struct Node {
public:
    int value;
    Node* right = nullptr;
    Node* left = nullptr;

    Node(int v) : value(v) {}
};

struct Tree {
private:
    void find(Node* node, int level, int& maxLevel, int& res) {
        if (node != nullptr) {
            find(node->left, ++level, maxLevel, res);
            if (level > maxLevel) {
                res = node->value;
                maxLevel = level;
            }

            find(node->right, level, maxLevel, res);
        }
    }
public:
    Node* root = nullptr;
    void add(Node*& node, int item) {
        if (node == nullptr) {
            node = new Node(item);
            return;
        }
        if (node->value == item)
            return;
        if (item < node->value)
            add(node->left, item);
        else
            add(node->right, item);
    }
    void print(Node* tNode) {
        if (tNode == nullptr)
            return;

        print(tNode->left);

        if ((tNode->left == nullptr) && (tNode->right == nullptr))

            printf("%d ", tNode->value);

        print(tNode->right);
    }

    int deepestNode(Node* node)
    {
        int res = -1;
        int maxLevel = -1;

        find(node, 0, maxLevel, res);
        return maxLevel;
    }
};

vector<string> split(string s, char c = ' ') {
    vector<string> output;
    string cur = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != c)
            cur += s[i];
        else {
            output.push_back(cur);
            cur.clear();
        }
    }
    if (!cur.empty())
        output.push_back(cur);
    return output;
}

int main()
{
    Tree tree;
    string s; getline(cin, s);
    vector<string> splited = split(s);
    for (int i = 0; i < splited.size() - 1; i++) {
        tree.add(tree.root, stoi(splited[i]));
    }
    //tree.print(tree.root);
    cout << tree.deepestNode(tree.root);
}