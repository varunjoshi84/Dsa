#include <iostream>
using namespace std;
class node{
    public:
    node *left, *right;
    int data;
    node(int info){
        data = info;
        left = right = nullptr;
    }
};
class BST{
    node *root;
    BST(){
        root= nullptr;
    }
    void insert(){
        if(root==nullptr){
            root = new node(info);
        }else{
            insertrec(root,info);
        }

    }
    void insertrec(node *current, int info){
        if(current->right<=info){
            if(current->right == nullptr){
                current->right = new node(info);
            }else{
                insertrec(current->right, info);
            }
        }else{
            if(current->left==nullptr){
                current->left = new node(info);
            }else{
                insertrec(current->left, info);
            }
        }
    }
    bool search(node *current, int key){
        if(current == nullptr){
            return false;
        }else if(current->left == key){
            return true;
        }else if (key<current->data){
            return search(current->left, key);
        }else{
            return search(current->right, key);
        }
    }
}