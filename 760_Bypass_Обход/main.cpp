#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


struct tnode
{
	int field;                   	// ����� 
	tnode* left;  		// ����� �������
	tnode* right; 		// ������ �������
};
void freemem(tnode* tree) {
	if (tree != NULL) {
		freemem(tree->left);
		freemem(tree->right);
		free(tree);
	}
}
// ������� ������ ������
void treeprint(tnode* p) {
	if (p != NULL) {
		treeprint(p->left);
		cout << p->field << endl;
		treeprint(p->right);
	}
}
tnode* addnode(int i, tnode* tree) {
	if (tree == NULL)     // ���� ������ ���, �� ��������� ������
	{
		tree = new tnode; //������ ��� ����
		tree->field = i;   //���� ������
		tree->left = NULL;
		tree->right = NULL; //����� �������������� ��������
	}
	else     // �����
		if (i != tree->field)
			if (i < tree->field)   //���� ������� x ������ ���������, ������ �����
				tree->left = addnode(i, tree->left); //���������� ��������� �������
			else  //����� ������ ������
				tree->right = addnode(i, tree->right); //���������� ��������� �������
	return(tree);
}

int main() {
	tnode* root = 0;    // ��������� ��������� ������
	int i;
	cin >> i;
	while (i != 0) {
		root = addnode(i, root); // ��������� ��������� ���� �� ������
		cin >> i;
	}
	treeprint(root);    // ������� �������� ������, 
	freemem(root);      // ������� ���������� ������
	return 0;
}