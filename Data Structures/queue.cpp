#include "LinkedList.cpp"
#define MAX 20

int enqueue(int* Arr, int data, int back) {
    if(back == MAX) {
        cout << "Memory Overflow" << endl;
        return back;
    }
    Arr[++back] = data;
    return back;
}

int dequeue(int* Arr, int front) {
    if(front == -1) {
        cout << "No elements" << endl;
        return front;
    }
    return front+1;
}

void displayQ(int* Arr, int front, int back) {
    int i = front-1;
    while(i != back) {
        i++;
        printf("%d ", Arr[i]);
    }
    cout << endl;
}
int main(void) {
    clear();

    int Arr[20];
    int front =0, back=-1;

    back = enqueue(Arr, 2, back);
    cout << "Back: " << back << endl;
    back = enqueue(Arr, 4, back);
    cout << "Back: "  << back << endl;
    back = enqueue(Arr, 6, back);
    cout << "Back: "  << back << endl;
    back = enqueue(Arr, 5, back);
    displayQ(Arr, front, back);
    front= dequeue(Arr, front);
    cout << front << endl;
    displayQ(Arr, front, back);




















    

    return 0;
}