#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


struct tnode
{
	int field;                   	// число 
	tnode* left;  		// левый потомок
	tnode* right; 		// правый потомок
};
void freemem(tnode* tree) {
	if (tree != NULL) {
		freemem(tree->left);
		freemem(tree->right);
		free(tree);
	}
}
// Функция вывода дерева
void treeprint(tnode* p) {
	if (p != NULL) {
		treeprint(p->left);
		cout << p->field << endl;
		treeprint(p->right);
	}
}
tnode* addnode(int i, tnode* tree) {
	if (tree == NULL)     // Если дерева нет, то формируем корень
	{
		tree = new tnode; //память под узел
		tree->field = i;   //поле данных
		tree->left = NULL;
		tree->right = NULL; //ветви инициализируем пустотой
	}
	else     // иначе
		if (i != tree->field)
			if (i < tree->field)   //Если элемент x меньше корневого, уходим влево
				tree->left = addnode(i, tree->left); //Рекурсивно добавляем элемент
			else  //иначе уходим вправо
				tree->right = addnode(i, tree->right); //Рекурсивно добавляем элемент
	return(tree);
}

int main() {
	tnode* root = 0;    // Объявляем структуру дерева
	int i;
	cin >> i;
	while (i != 0) {
		root = addnode(i, root); // размещаем введенный узел на дереве
		cin >> i;
	}
	treeprint(root);    // выводим элементы дерева, 
	freemem(root);      // удаляем выделенную память
	return 0;
}