#include "base.h"

int main() {
    clear();

    // int a = 5, *p = &a;
    // cout << &a << "\t" << p << endl;
    // cout << a << "\t" << *p << endl;
    // cout << &a << "\t" << &p << endl;

    // int a = 8, *p = &a;
    // cout << *p << endl;
    // int *q = p+1;
    // *(p+1) = 20; //Not possible
    // cout << *q << endl;

    // int a = 1025;
    // int *p = &a;
    // char * q = (char *)p; // typecasting
    // for (int i = 0; i < 4; i++) {
    //     printf("%d %d\n", q+i, *(q+i));
    // }
    
    // cannot dereference void pointers

    // int a, *p =&a, **pp = &p;
    // printf("%d  %d  %d\n", &a, &p, *pp);
    // printf("%d  %d  %d\n", &a, *p, pp);
    // printf("%d  %d  %d\n", &a, p, *pp);
    // printf("%d  %d  %d\n", a, *p, pp);
    // printf("%d  %d  %d\n", a, p, pp);

    // cout << base <<endl;
    // increment(base);
    // cout << base <<endl;
    //  doesnt work for even Global functions

    // base = increturn(base);
    // cout << base <<endl;
    // This works here 

    // int base = 22;
    // cout << base <<endl;
    // increter(&base);
    // cout << base <<endl;
    
    // char name[5] = "HEll";
    // name[0] = 'J';
    // name[1] = 'O';
    // name[2] = 'H';
    // name[3] = 'N';
    // name[4] = '\0';
    // cout << name;

    // char name[4];
    // name[0] = 'J';
    // name[1] = 'O';
    // name[2] = 'H';
    // name[3] = 'N';
    // cout << name;

    // string h = "Hello World";

    // char* s = "yjjfghhgf"; // not possible
    // const char s[] = "yjjfghhgf"; // not possible
    // char s[] = "yjjfghhgf";
    // s[0] = 'd';
    // cout << s;

    //  to pass n dimensional matrix, parameter should have n-1 same values, one (the starting one) can be eliminated
    // for 2D matrix 2*3, int *p[3] 
    // for 3D matrix 2*3*4, int *p[3][4] 

    // int *p = (int *)malloc(sizeof(int)*4);
    // for (int i = 0; i < 4; i++) {
    //     printf("\nEnter %dth num: ", i+1);
    //     cin >> p[i];
    // }
    // for (int i = 0; i < 4; i++) {
    //     cout << i+1<< "\t" << p[i] << endl;
    // }
    // free(p);
    
    /*
        void* malloc(int size)
        void* calloc(int n, int size)
        void* realloc(ptr, int newSize)
        free(ptr)

        new in CPP
        delete in CPP
    */

    // Function Pointers
    // void (*pincrement)(int) = increment;

    // function pointers use to pass functions as an argument inside another function 

    // use to call-back

    // int a[] = {3, -6, 20, -66, 2};
    // pArr(a, 5);
    // bubblesort(a, 5, 1);
    //  1 for Ascending 
    // -1 for descending

    // qsort(); void *_Base, size_t _NumOfElements, size_t _SizeOfElements, int (*_PtFuncCompare)(const void *, const void *)




































    return 0;
}