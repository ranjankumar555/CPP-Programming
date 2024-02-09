//Binary search tree -> traversal, insertion, deletion and searching;
#include<iostream>
using namespace std;
class Node{
    public:
    int key;
    Node* left;
    Node* right;
    
    Node(int item){
        key=item;
        left=nullptr;
        right=nullptr;
    }
  
};

// function to insert node in bst
Node* insertNode(Node* root, int item){
    if(root==nullptr){
        return new Node(item);
    }
    // if key smaller than root element then insert in left subtree
    if(item < root->key){
        root->left=insertNode(root->left, item);
    }
    else if(item>root->key){
        root->right=insertNode(root->right,item);
    }
    return root;
}
/*function to traverse the tree
There are two main traversing technique
DFS-> inOrder, preOrder, postOrder
BFS-> level order traversing;
*/
// inOrder: left child Node -> root Node -> right child Node
void inOrder(Node* root){
    if(root!=nullptr){ //valid way1
        inOrder(root->left);
        cout<<root->key<<" ";
        inOrder(root->right);
    }
    
}
// preOrder: -> root Node -> left child Node -> right child Node
void preOrder(Node* root){
    if(root==nullptr){ //valid way 2
        return;
    }
    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
// postOrder: left child Node -> right child Node -> root Node
void postOrder(Node* root){
    if(root==nullptr){ //valid way 2
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->key<<" ";
}
int main(){
    //allocate root node of the tree
    Node* root = new Node(4);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 6);
    
    //call thr inorder() function to print the data;
    //inorder(root);
    //preOrder(root);
    //postOder(root);
    return 0;
}