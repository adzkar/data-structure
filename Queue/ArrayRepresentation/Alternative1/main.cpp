#include "head.h"

int main() {
    
    Queue Q;
    createQueue(Q);

    // read(Q);ln;

    add(Q, 10);
    add(Q, 1);
    add(Q, 2);

    read(Q);ln;
    
    del(Q);

    read(Q);ln;

    del(Q);
    del(Q);
    read(Q);ln;


    return 0;
}