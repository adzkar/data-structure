#include "head.h"

int main() {

    list L;
    createList(L);

    insertFirst(L, allocate(2));
    insertFirst(L, allocate(10));
    insertFirst(L, allocate(5));
    insertLast(L, allocate(100));

    read(L);cout << endl;
    readSearch(L, allocate(3));
    readSearch(L, allocate(100));

    

    cout << endl;
    return 0;
}