#include "LinkedList.cpp"

Node * front=NULL, *rear=NULL;

void enqueueL(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->link = NULL;
    if(rear==NULL && front==NULL) {
        front=newNode;
        rear=newNode;
        return;
    }
    rear->link=newNode;
    rear=newNode;
}

void dequeueL () {
    Node* temp =front;
    if(temp == NULL) {
        cout << "Empty Stack\n";
        return;
    }
    if(temp->link == NULL) {
        free(temp);
        front = NULL;
        return;
    }
    front = front->link;
    free(temp);
    return;
}


/*
#define MAX 5

int front =0, back=-1, count=0;

int enqueue(int* Arr, int data, int back) {
    if(back == MAX) {
        cout << "Memory Overflow" << endl;
        return back;
    }
    Arr[++back] = data;
    return back;
}

int enqueueC(int* Arr, int data) {
    if(count == MAX) {
        cout << "Error" << endl;
        return back;
    }
    Arr[(back+1)% (MAX)] = data;
    count++;
    return (back+1)% (MAX);
}

int dequeueC(int* Arr) {
    if(count==0) {
        cout << "No elements" << endl;
        return front;
    }
    // cout << "Dequeued: " << Arr[front] << endl;
    count--;
    return (front+1)% MAX;
}

int dequeue(int* Arr) {
    if(front-1 == back) {
        cout << "No elements" << endl;
        return front;
    }
    // cout << "Dequeued: " << Arr[front] << endl;
    return front+1;
}

void displayQ(int* Arr) {
    int f= front;
    for (int i = 0; i < count; i++, f++) {
        printf("%d ", Arr[f]);
    }
    cout << endl;
}

*/
int main(void) {
    clear();

    // int Arr[5];
    // back = enqueue(Arr, 2, back);
    // // cout << "Back: " << back << endl;
    // back = enqueue(Arr, 4, back);
    // // cout << "Back: "  << back << endl;
    // back = enqueue(Arr, 6, back);
    // // cout << "Back: "  << back << endl;
    // back = enqueue(Arr, 5, back);
    // displayQ(Arr, front, back);
    // front= dequeue(Arr, front, back);
    // cout << front << endl;
    // front= dequeue(Arr, front, back);
    // cout << front << endl;
    // front= dequeue(Arr, front, back);
    // cout << front << endl;
    // front= dequeue(Arr, front, back);
    // cout << front << endl;
    // front= dequeue(Arr, front, back);
    // cout << front << endl;
    // front= dequeue(Arr, front, back);
    // cout << front << endl;
    // front= dequeue(Arr, front, back);
    // cout << front << endl;
    // displayQ(Arr, front, back);
    // back= enqueueC(Arr, 2);
    // cout << Arr[0];
    // printf("Front %d Back %d\n", front, back);
    // back = enqueueC(Arr, 4);
    // // printf("Front %d Back %d\n", front, back);
    // back = enqueueC(Arr, 6);
    // // printf("Front %d Back %d\n", front, back);
    // back = enqueueC(Arr, 5);
    // // printf("Front %d Back %d\n", front, back);
    // displayQ(Arr);
    // front= dequeueC(Arr);
    // displayQ(Arr);
    // // printf("Front %d Back %d\n", front, back);
    // front= dequeueC(Arr);
    // displayQ(Arr);
    // front= dequeueC(Arr);
    // back= enqueueC(Arr, 2);
    // printf("Front %d Back %d\n", front, back);
    // displayQ(Arr);
    // back= enqueueC(Arr, 8);
    // printf("Front %d Back %d\n", front, back);
    // displayQ(Arr);
    // back= enqueueC(Arr, 9);
    // front= dequeueC(Arr);
    // printf("Front %d Back %d\n", front, back);
    // displayQ(Arr);
    // back= enqueueC(Arr, 7);
    // displayQ(Arr);

    enqueueL(2); display(front);
    enqueueL(2); display(front);
    enqueueL(4); display(front);
    enqueueL(6); display(front);
    enqueueL(5); display(front);
    dequeueL(); display(front);


    return 0;
}