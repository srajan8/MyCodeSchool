#include "LinkedList.cpp"

struct doubleLL {
    int data;
    doubleLL *prev;
    doubleLL *next;
};

doubleLL *createdll(doubleLL * head, int data) {
    doubleLL* node = new doubleLL();
    node->data= data;
    node->prev =NULL;
    node->next =NULL;
    return node;
}

doubleLL * insertHead(doubleLL * head, int data) {
    doubleLL* nN = createdll(head, data);
    if(head!= NULL) {
        nN->next= head;
        head->prev = nN;
    }
    return nN;
}

void dispdll(doubleLL * head) {
    doubleLL* temp = head;
    while(temp!= NULL) {
        printf("%d->", temp->data);
        temp= temp->next;
    }
    printf("NULL\n");
}

void rdispdll(doubleLL * head) {
    doubleLL* temp = head;
    while(temp->next!= NULL) {
        // printf("%d->", temp->data);
        temp= temp->next;
    }
    while(temp!= NULL) {
        printf("%d->", temp->data);
        temp= temp->prev;
    }
    printf("NULL\n");
}







int main(void) {
    clear();
    doubleLL * head =NULL;
    head =insertHead(head, 5);
    head =insertHead(head, 6);
    head =insertHead(head, 4);
    head =insertHead(head, 2);

    // dispdll(head);
    // rdispdll(head);















    return 0;
}