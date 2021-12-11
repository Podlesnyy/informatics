#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct node
{
    int val;
    node* left, * right;
    node(int i) : val(i), left(NULL), right(NULL) {};
};

node* addNode(int val)
{
    return new node(val);
}

node* addTree(node* root, int val)
{
    if (!root)
    {
        root = addNode(val);
        return root;
    }
    if (val < root->val)
    {
        if (!root->left)
        {
            root->left = addNode(val);
        }
        else
        {
            addTree(root->left, val);
        }
    }
    if (val > root->val)
    {
        if (!root->right)
        {
            root->right = addNode(val);
        }
        else
        {
            addTree(root->right, val);
        }
    }
    return root;

}

void printLeafs(node* root)
{
    if (root)
    {
        printLeafs(root->left);
        if (!root->left && !root->right)
            cout << root->val << endl;
        printLeafs(root->right);
    }
}

int main()
{
    int num = 0;
    cin >> num;
    node* tree = NULL;
    if (num != 0)
        tree = new node(num);
    while (num != 0)
    {
        addTree(tree, num);
        cin >> num;
    }
    printLeafs(tree);
    return 0;
}