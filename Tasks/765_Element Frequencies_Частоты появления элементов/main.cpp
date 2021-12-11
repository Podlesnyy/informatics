#include <bits/stdc++.h>

    using namespace std;

struct node {
    int data;
    int count;
    node *left;
    node *right;
};

node* newNode(int data) {
  node* element = new node;
  element->data = data;
  element->count = 1;
  element->left = NULL;
  element->right = NULL;
  return element;
}

node* insert(node* element, int key) {
    if (element == NULL)
        return newNode(key);
    if (key < element->data)
        element->left = insert(element->left, key);
    else if (key > element->data)
        element->right = insert(element->right, key);
    else {
        element->count++;
    }
    return element;
}

void printOrder(node* element) {
    if (element == NULL)
        return;
    printOrder(element->left);
    cout << element->data << " " << element->count << "\n"; //Inorder traversal
    printOrder(element->right);
}

int main() {
    int n, k = 0;
    node* root = NULL;
    do {
        k++;
        cin >> n;
        if (n == 0) break;
        if (k == 1) root = insert(root, n);
        else insert(root, n);
  } while (n);
  printOrder(root);
  system("pause");
  return 0;
}