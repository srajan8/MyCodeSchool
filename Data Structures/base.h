#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int base = 10;

void increment(int a) {
    a+=1;
}
int increturn(int a) {
    return a+=1;
}

void increter(int* p) {
    *p += 1;
}

void clear() {
    system("cls");
}

void pArr(int *Arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", Arr[i]);
    } cout << endl;
}

void swap(int*a, int*b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void bubblesort(int * Arr, int size, int flag) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1; j++)
            if(flag*abs(Arr[j]) > flag*abs(Arr[j+1])) swap(&Arr[j], &Arr[j+1]);
        pArr(Arr, size);  
    }
}
