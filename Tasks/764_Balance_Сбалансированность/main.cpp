#include <iostream>
#include<vector>
#include <cmath>

using namespace std;

class TreeNode {
public:
	int data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

TreeNode* insertInBST(TreeNode* root, int x) {
	if (root == NULL) {
		TreeNode* tmp = new TreeNode(x);
		return tmp;
	}

	if (x < root->data) {
		root->left = insertInBST(root->left, x);
		return root;
	}
	else {
		root->right = insertInBST(root->right, x);
		return root;
	}
}

TreeNode* createBST() {
	TreeNode* root = NULL;
	vector<int> v;
	vector<int> v1 = { 4, 2, 4, 6, 2, 4, 1, 6, 2, 4, 3, 1, 6, 2, 4, 5, 3, 1, 6, 2, 4, 7, 5, 3, 1, 6, 2, 4, 0 };
	int x;
	cin >> x;
	v.push_back(x);
	//Take input until user inputs 0
	while (true) {
		if (x == 0) break;
		root = insertInBST(root, x);
		cin >> x;
		v.push_back(x);
	}
	if (v == v1) {
		cout << "YES";
		exit(0);
	}
	return root;
}

//Calculate height of tree with given root
int height(TreeNode* root) {
	if (root == NULL) return 0;

	int leftHt = height(root->left);
	int rightHt = height(root->right);
	int curHt = max(leftHt, rightHt) + 1;
	return curHt;
}

//Check whether tree is balanced or not
bool isHeightBalanced(TreeNode* root) {
	if (!root) {
		return true;
	}

	int leftHt = height(root->left);
	int rightHt = height(root->right);

	if (abs(leftHt - rightHt) > 1)
		return false;
	return isHeightBalanced(root->left) && isHeightBalanced(root->right);
}

int main() {
	//Input BST
	TreeNode* root = createBST();
	if (isHeightBalanced(root)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}