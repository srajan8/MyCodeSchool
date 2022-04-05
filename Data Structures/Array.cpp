#include "base.h"


bool isempty(int *Arr, int count) {
    if(count == 0) return true;
    return false; 
}

int insertTail(int *Arr, int count, int data) {
    if (count == 20) {
        cout << "Array Full";
        return count;
    }
    Arr[count] = data;
    return count+1;
}

int countE(int * Arr, int count) {
    return count;
}

int insertAtN(int *Arr, int count, int data, int n) {
    if (count == 20) {
        cout << "Array Full";
        return count;
    }
    int i;
    for (i = count; i > n-1; i--) {
        Arr[i] = Arr[i-1];
    }
    Arr[i] = data;
    return count+1;
}

void printArray(int *Arr, int count) {
    for (int i = 0; i < count; i++) {
        printf("%d ", Arr[i]);
    }
    cout << endl;
}

int removeAtN(int *Arr, int count, int pos) {
    if(isempty(Arr, count)) {
        cout << "Cant Delete, Array empty\n";
        return count;
    }
    for(int i =pos-1; i < count-1; i++) {
        Arr[i] = Arr[i+1];
    }
    return count-1;
}

/* to use it as a header, comment out main function */
// int main(void) {
//     clear();

//     int count = 0;
//     int Array[20]; // Primary Array

//     // cout << boolalpha; // T/F instead of 0/1
//     // cout << isempty(Array, count) << endl;

//     count = insertTail(Array, count, 4);
//     // count = insertTail(Array, count, 40);
//     // count = insertTail(Array, count, 14);
//     // count = insertTail(Array, count, 24);
//     count = insertTail(Array, count, 6);
//     count = insertTail(Array, count, 2);
//     // printArray(Array, count);


//     // cout << boolalpha; // T/F instead of 0/1
//     // cout << isempty(Array, count) << endl;

//     // cout << countE(Array, count);

    
//     count = insertAtN(Array, count, 56, 1);
//     count = insertAtN(Array, count, 48, 2);
//     count = insertAtN(Array, count, 47, 4);
//     // printArray(Array, count); // 56 48 4 47 6 2


//     // count = removeAtN(Array, count, 2);
//     // printArray(Array, count); // 56 4 47 6 2
//     // count = removeAtN(Array, count, 3);
//     // printArray(Array, count); // 56 4 6 2
//     // count = removeAtN(Array, count, 1);
//     // printArray(Array, count); // 4 6 2

//     return 0;
// }