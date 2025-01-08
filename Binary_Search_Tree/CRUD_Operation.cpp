// BST CRUD
 
#include <iostream>

 #include <vector>

 using namespace std;
 
class node {

 public:

     int data;

     node *left, *right;

     node(int data) {

         this->data = data;

         left = nullptr;

         right = nullptr;

     }

 };
 
node* insert(node* root, int val) {

     if (!root) {

         return new node(val);

     }

     if (root->data >= val) {

         root->left = insert(root->left, val);

     } else {

         root->right = insert(root->right, val);

     }

     return root;

 }
 
// Inorder Traversal

 void inorder(node* root) {

     if (!root) return;

     inorder(root->left);

     cout << root->data << " ";

     inorder(root->right);

 }
 
// Preorder Traversal

 void preorder(node* root) {

     if (!root) return;

     cout << root->data << " ";

     preorder(root->left);

     preorder(root->right);

 }
 
// Search in BST

 bool search(node* root, int val) {

     if (!root) return false;

     if (root->data == val) {

         return true;

     } else if (root->data > val) {

         return search(root->left, val);

     } else {

         return search(root->right, val);

     }

 }
 
// Find Minimum in BST

 node* findMin(node* root) {

     while (root && root->left) {

         root = root->left;

     }

     return root;

 }
 
// Delete Node in BST

 node* deleteNode(node* root, int val) {

     if (!root) return root;
 
    if (val < root->data) {

         root->left = deleteNode(root->left, val);

     } else if (val > root->data) {

         root->right = deleteNode(root->right, val);

     } else {

         // Case 1: No Child

         if (!root->left && !root->right) {

             delete root;

             return nullptr;

         }

         // Case 2: One Child

         else if (!root->left) {

             node* temp = root;

             root = root->right;

             delete temp;

         } else if (!root->right) {

             node* temp = root;

             root = root->left;

             delete temp;

         }

         // Case 3: Two Children

         else {

             node* temp = findMin(root->right);

             root->data = temp->data;

             root->right = deleteNode(root->right, temp->data);

         }

     }

     return root;

 }
 
int main() {

     int n, val;

     vector<int> v;
 
    cout << "Enter the number of elements: ";

     cin >> n;
 
    cout << "Enter elements: ";

     for (int i = 0; i < n; i++) {

         cin >> val;

         v.push_back(val);

     }
 
    node* root = nullptr;

     for (int i = 0; i < n; i++) {

         root = insert(root, v[i]);

     }
 
    cout << "Inorder Traversal: ";

     inorder(root);

     cout << endl;
 
    cout << "Preorder Traversal: ";

     preorder(root);

     cout << endl;
 
    cout << "Enter an element to search: ";

     int element1;

     cin >> element1;

     search(root, element1) ? cout << "The element is found\n" : cout << "The element is not found\n";
 
    cout << "Enter an element to delete: ";

     int element2;

     cin >> element2;

     if (search(root, element2)) {

         root = deleteNode(root, element2);

         cout << "After deletion, Inorder Traversal: ";

         inorder(root);

         cout << endl;

     } else {

         cout << "The element is not present in the BST\n";

     }
 
    return 0;

 }