/*
	28 October 2022
*/
#include <iostream>

using namespace std;

struct Node {
	char data;
	struct Node* left;
	struct Node* right;
};

struct Node *createNode(char data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = nullptr;
	return newNode;
}


void printTree(Node* root) {
	if(root == nullptr) return;

	cout << root->data << "\n";

	printTree(root->left);
	printTree(root->right);
}

int main() {
	Node* root = createNode('d');

	root->left = createNode('a');
	root->right = createNode('b');

	root->left->left = createNode('c');
	root->left->right = createNode('h');

	root->right->left = createNode('f');
	root->right->right = createNode('g');


	root->left->right = createNode('j');
	root->right->left = createNode('e');

	root->left->right->left = createNode('i');

	printTree(root);
}