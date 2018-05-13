#include <iostream>

using namespace std;

typedef struct node *address;

struct node {
    int info;
    address left;
    address right;
};

address allocate(int x);
void insertNode(address &root, address x);
void preOrder(address &root);
void postOrder(address &root);
void inOrder(address &root);
int depth(address root);
int depthX(address root, int x);
address findNode(address &root, int x);
void printDescandant(address &root, int x);
void printLevel(address &root, int x);
void printLevelOrder(address &root);