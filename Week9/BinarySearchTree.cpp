#include <iostream>
#include <string>
using namespace std;

template<class T>
struct TreeNode {
	T info;
	TreeNode* left;
	TreeNode* right;
};

template<class T>
class BinarySearchTree {
private:
	TreeNode<T>* root;

	void insert(TreeNode<T>*& node, T item);
	void printInOrder(TreeNode<T>* node);
	void retrieve(TreeNode<T>* node, T& item, bool& found);
	void remove(TreeNode<T>*& node, T& item);
	int countNodes(TreeNode<T>* node);
	void destroy(TreeNode<T>* node);

public:
	BinarySearchTree();
	~BinarySearchTree();

	bool isEmpty() const;
	void insertItem(T item);
	void printTree();
	void retrieveItem(T& item, bool& found);
	void deleteItem(T& item);
	int numberOfNodes();
};

// Constructor
template<class T>
BinarySearchTree<T>::BinarySearchTree() {
	this->root = nullptr;
}

// Destructor
template<class T>
BinarySearchTree<T>::~BinarySearchTree() {
	destroy(root);
}

// Insert Public
template<class T>
void BinarySearchTree<T>::insertItem(T item) {
	insert(root, item);
}

// Insert Helper
template<class T>
void BinarySearchTree<T>::insert(TreeNode<T>*& node, T item) {
	if (node == nullptr) {
		node = new TreeNode<T>{ item, nullptr, nullptr };
	}
	else if (item < node->info) {
		insert(node->left, item);
	}
	else if (item > node->info) {
		insert(node->right, item);
	}
}

// Print Tree (In-order)
template<class T>
void BinarySearchTree<T>::printTree() {
	printInOrder(root);
	cout << endl;
}

template<class T>
void BinarySearchTree<T>::printInOrder(TreeNode<T>* node) {
	if (node != nullptr) {
		printInOrder(node->left);
		cout << node->info << " ";
		printInOrder(node->right);
	}
}

// Retrieve Item
template<class T>
void BinarySearchTree<T>::retrieveItem(T& item, bool& found) {
	retrieve(root, item, found);
}

template<class T>
void BinarySearchTree<T>::retrieve(TreeNode<T>* node, T& item, bool& found) {
	if (node == nullptr) {
		found = false;
	}
	else if (item < node->info) {
		retrieve(node->left, item, found);
	}
	else if (item > node->info) {
		retrieve(node->right, item, found);
	}
	else {
		item = node->info;
		found = true;
	}
}

// Delete Item
template<class T>
void BinarySearchTree<T>::deleteItem(T& item) {
	remove(root, item);
}

template<class T>
void BinarySearchTree<T>::remove(TreeNode<T>*& node, T& item) {
	if (node == nullptr) {
		cout << "Item not found. Nothing to delete." << endl;
		return;
	}

	if (item < node->info) {
		remove(node->left, item);
	}
	else if (item > node->info) {
		remove(node->right, item);
	}
	else {
		// Node with 0 or 1 child
		if (node->left == nullptr) {
			TreeNode<T>* temp = node;
			node = node->right;
			delete temp;
		}
		else if (node->right == nullptr) {
			TreeNode<T>* temp = node;
			node = node->left;
			delete temp;
		}
		else {
			// Node with two children
			TreeNode<T>* successor = node->right;
			while (successor->left != nullptr)
				successor = successor->left;

			node->info = successor->info;
			remove(node->right, successor->info);
		}
	}
}

// Count Nodes
template<class T>
int BinarySearchTree<T>::numberOfNodes() {
	return countNodes(root);
}

template<class T>
int BinarySearchTree<T>::countNodes(TreeNode<T>* node) {
	if (node == nullptr) return 0;
	return 1 + countNodes(node->left) + countNodes(node->right);
}

// Destroy Tree
template<class T>
void BinarySearchTree<T>::destroy(TreeNode<T>* node) {
	if (node != nullptr) {
		destroy(node->left);
		destroy(node->right);
		delete node;
	}
}

// Check if Empty
template<class T>
bool BinarySearchTree<T>::isEmpty() const {
	return root == nullptr;
}

// Main Function
int main() {
	BinarySearchTree<int> bst;

	bst.insertItem(10);
	bst.insertItem(5);
	bst.insertItem(15);
	bst.insertItem(3);
	bst.insertItem(7);

	cout << "In-order Traversal: ";
	bst.printTree();

	cout << "Total nodes: " << bst.numberOfNodes() << endl;

	int item = 7;
	bool found = false;
	bst.retrieveItem(item, found);
	cout << (found ? "Item found" : "Item not found") << endl;

	bst.deleteItem(item);
	cout << "After deleting 7, in-order: ";
	bst.printTree();

	cout << "------------------------------------------------------" << endl;
	cout << "EXERCISE 9.1" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Enter a string: ";

	string str;
	getline(cin, str);
	BinarySearchTree<char> charBST;
	for (char ch : str) {
		charBST.insertItem(ch);
	}

	cout << "Sorted string: ";
	charBST.printTree();

	return 0;
}
