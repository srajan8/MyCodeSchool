#include "array.cpp"

struct Node {
    int data;
    Node * link;
};

Node* Head = NULL;

void display(Node *current) {
    while(current != NULL) {
        cout << current->data << " ";
        current = current->link; 
    }
    cout << endl;
}

Node * createNode(Node* head, int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->link = NULL;
    return newNode;
}

Node* insertStart(Node * head, int data) {
    Node* newNode = createNode(head, data);
    if(head == NULL) return newNode;
    newNode->link =  head;
    head = newNode;
    // printf("Inserted %c\n", data);
}

Node* insertEnd(Node * head, int data) {
    Node* newNode = createNode(head, data);
    Node * current = head;
    if(head == NULL) return newNode;
    while (current->link != NULL) {
        current = current->link;
    }
    current->link = newNode;
    return head;
}

Node* insertN(Node * head, int data, int pos) {
    Node* newNode = createNode(head, data);
    Node * current = head;
    int count = 1;
    if(head == NULL) return newNode;

    // can be done better using for loop for n-2 times
    while(count != pos-1) {
        if (current->link == NULL) {
            cout << "Overflow happened, writing it at end\n";
            break;
        }
        current= current->link;
        count++;
    }
    newNode->link= current->link;
    current->link = newNode;
    return head;
}

Node * deleteN(Node* head, int pos) {
    Node* temp =head;
    if(pos == 1) {
        head = temp->link;
        free(temp);
        return head;
    }
    for (int i = 0; i < pos-2; i++) {
        temp = temp->link;
    }
    Node *curr = temp->link;
    temp->link = curr->link;
    free(curr);
    return head;
}

Node * deleteStart(Node* head) {
    Node* temp =head;
    if(temp == NULL) {
        cout << "Empty Stack\n";
        return head;
    }
    // cout << "Deleted: " << head->data << endl;
    if(temp->link == NULL) {
        free(temp);
        return temp;
    }
    head = head->link;
    free(temp);
    return head;
}

void reverseP(Node* temp) {
    if(temp != NULL) {
        reverseP(temp->link);
        printf("%d ", temp->data);
        return;
    }
}

Node *reverseLL(Node * head) {
    Node *prev = head, *curr = prev->link, *next = curr->link;
    prev->link = NULL;
    while(curr->link!= NULL) {
        curr->link = prev;
        prev = curr;
        curr = next;
        next = next->link;
    }
    curr->link = prev;
    return curr;
}

// reverse a linked list using recursion
void revRecursion(Node* head) {
    if(head->link == NULL) {
        ::Head = head;
        return;
    }
    revRecursion(head->link);
    Node* temp = head->link;
    temp->link= head;
    head->link = NULL;
}


// int main(void) {
//     clear();
//     // cout << "Link is Working";
    

//     // Head = insertEnd(Head, 5); // display(Head);
//     // Head = insertStart(Head, 15); // display(Head);
//     // Head = insertEnd(Head, 25); // display(Head);
//     // Head = insertStart(Head, 35); // display(Head);
//     // Head = insertEnd(Head, 45); // display(Head);
//     // cout << endl << endl;
//     // cout << Head->data << "\t" << Head->link->data;

//     // Head = insertN(Head, 10, 4); // display(Head);
//     // Head = insertN(Head, 20, 2); // display(Head);
//     // Head = insertN(Head, 100, 20); // display(Head); Overflow
//     // cout << endl << endl;


//     // Head = deleteN(Head, 5); //display(Head); removes 10
//     // Head = deleteN(Head, 1); //display(Head); removes 35

//     // cout << endl << endl;
//     // Head = reverseLL(Head);

//     Head = insertStart(Head, 5); // display(Head);
//     Head = insertStart(Head, 6); // display(Head);
//     Head = insertStart(Head, 4); // display(Head);
//     Head = insertStart(Head, 2); // display(Head);

//     // revRecursion(Head);
//     // display(Head); 






//     return 0;
// }