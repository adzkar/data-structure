#include <iostream>
#define ln cout << endl;
using namespace std;

typedef struct node *adrNode;
typedef struct edge *adrEdge;

struct node {
    int info;
    adrNode next;
    adrEdge firstEdge;
};

struct edge {
    adrNode info;
    adrEdge next;
};

typedef adrNode graph;

adrNode createNode(int x) {
    adrNode P = new node;
    P->info = x;
    P->next = NULL;
    P->firstEdge = NULL;
    return P;
};

adrEdge createEdge(adrNode x) {
    adrEdge P = new edge;
    P->info = x;
    P->next = NULL;
    return P;
};

bool isEmpty(graph G) {
    return G == NULL;
};

adrNode searchNode(graph G, int x) {
    if(!isEmpty(G)) {
        adrNode P = G;
        while((P != NULL) and (P->info != x)) P = P->next;
        return (P->info == x) ? P : NULL;
    } else return NULL;
};

void insertNode(graph &G, int x) {
    adrNode P = createNode(x);
    if(isEmpty(G)) G = P;
    else {
        adrNode R = searchNode(G, x);
        if(R == NULL) {
            P->next = G;
            G = P;
        } else cout << "Duplicate";
    }
};

void insertLastEdge(adrEdge &E, adrEdge x) {
    if(E == NULL) E = x;
    else {
        adrEdge P = E;
        while(P->next != NULL) P = P->next;
        P->next = x;
    }
}

void connect(graph &G, int x, int y) {
    adrNode P = searchNode(G, x);
    adrNode Q = searchNode(G, y);
    if(P != NULL and Q != NULL) {
        if(x == y) {
            adrEdge R = createEdge(Q);
            insertLastEdge(P->firstEdge, R);
        } else {
            r = createEdge(Q);
            s = createEdge(P);
            insertLastEdge(P->firstEdge, r);
            insertLastEdge(Q->firstEdge, s);
        }
    }
}