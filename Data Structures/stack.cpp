#include "LinkedList.cpp"
#define MAX 20
#include <stack>
#include <stdbool.h>

/* Array based Implemetation Functions
int top = -1;

void pushA(int* Arr, int data) {
    if(top == MAX-1) {
        cout << "Full!\n";
        return;
    }
    Arr[++top] = data;
}

void popA(int *Arr) {
    if(top == -1) {
        cout << "Empty!\n";
        return;
    }
    cout << "Removed: " << Arr[top--] << endl;
}

void showA(int *Arr) {
    if(top == -1) {
        cout << "Empty!\n";
        return;
    }
    for (int i = top; i > -1; i--) {
        printf("%d ", Arr[i]);
    }
    
}

int topA(int *Arr) {
    if(top == -1) return NULL;
    return Arr[top];
}

int isemptyA(int *Arr) {
    return top==-1;
} */


/* Structure based Implemetation Functions
struct stack {
    int data[MAX];
    int top =-1;
};


void pushS(struct stack *s, int data) {
    if(s->top == MAX-1) {
        cout << "Full!\n";
        return;
    }
    s->data[++s->top] = data;
    // printf("Pushed %d, top =%d\n", data, s->top);
}

void popS(struct stack *s) {
    if(s->top == -1) {
        cout << "Empty!\n";
        return;
    }
    cout << "Removed: " << s->data[s->top--] << endl;
}

void showS(struct stack *s) {
    if(s->top == -1) {
        cout << "Empty!\n";
        return;
    }
    for (int i = s->top; i > -1; i--) {
        printf("%d ", s->data[i]);
    }
    
}

int topS(struct stack *s) {
    if(s->top == -1) return NULL;
    return s->data[s->top];
}

int isemptyS(struct stack *s) {
    return s->top==-1;
}
*/

int topL(Node *top) {
    if(top == NULL) {
        cout << "No elements\n";
        return NULL;
    }
    return top->data;
}

bool isempty(Node* top) {
    return top == NULL;
}

bool checkpara(string str) {
    stack<char> s;
    cout << str << " Lenght: " << str.length() << endl;
    for (int i = 0; i < str.length(); i++) {
        if(str[i] =='(' ||str[i] =='['||str[i] =='{') {
            s.push(str[i]);
            cout << "Pushed: " << str[i] << endl;
        }
        if(s.empty()) continue;
        if(str[i] ==')' && s.top() =='(') {
            cout << "Popped: " << s.top() << endl;
            s.pop();
        }
        if(str[i] ==']' && s.top() =='[') {
            cout << "Popped: " << s.top() << endl;
            s.pop();
        }
        if(str[i] =='}' && s.top() =='{') {
            cout << "Popped: " << s.top() << endl;
            s.pop();
        }
    }
    if(s.empty()) return true;
    else return false;
}

int evalpost(char *s) {
    stack<int> ss;
    for (int i = 0; i < strlen(s); i++) {
        if(isdigit(s[i])) {
            ss.push(s[i]-'0');
            // cout << "Pushed: " << ss.top() << endl;
        }
        
        else {
            // cout << "Doing " << s[i] << endl;
            int first = ss.top(); ss.pop();
            // cout << "Poppedf: " << second << endl;
            int second = ss.top(); ss.pop();
            // cout << "Poppedsec: " << first << endl;
            int res;
            switch (s[i]) {
            case '+':
                res = first + second;
                break;
            case '-':
                res = first - second;
                break;
            case '*':
                res = first * second;
                break;
            case '/':
                res = first / second;
                break;
            default:
                cout << "Inexpected Error";
                break;
            }
            cout << "Pushedr: " << res << endl;
            ss.push(res);
        }
    }
    // cout << "Top: " << ss.top() << endl;
    return ss.top();
}
int main(void) {
    clear();

    /* Array runs
    int stack[MAX];

    // cout << '\"' << isemptyA(stack) << '\"' << endl;
    pushA(stack, 5);
    pushA(stack, 6);
    // cout << '\"' << isemptyA(stack) << '\"' << endl;
    pushA(stack, 7);
    pushA(stack, 2);
    popA(stack);
    popA(stack);
    showA(stack); */

    /* Struct runs
    struct stack s1, *s = &s1;
    cout << '\"' << isemptyS(s) << '\"' << endl;
    pushS(s, 5);
    pushS(s, 6);
    cout << '\"' << isemptyS(s) << '\"' << endl;
    pushS(s, 7);
    pushS(s, 2);
    popS(s);
    popS(s);
    showS(s); */

    /* LL runs
    Node *top = NULL;
    Node* (*push)(Node*, int) = insertStart; 

    cout << topL(top) << endl;
    cout << isempty(top) << endl;
    top = push(top, 5); display(top);
    
    cout << topL(top) << endl;
    
    cout << isempty(top) << endl;
    top = push(top, 7); display(top);
    top = deleteStart(top); display(top);
    
    cout << topL(top) << endl;
    
    cout << isempty(top) << endl;
    top = push(top, 6); display(top);
    top = push(top, 4); display(top);
    
    cout << topL(top) << endl;
    top = push(top, 2); display(top);
    
    cout << topL(top) << endl;
    
    cout << isempty(top) << endl;
    display(top); */

    // Node* (*push)(Node*, int) = insertStart; 
    // Node *top = NULL;
    // char * s = "Hello World";
    // // cout << strlen(s);

    // for (int i = 0; i < strlen(s); i++) {
    //     top = push(top, (int)s[i]);
    //     // cout << s[i] << " ";
    // }

    // int j = 0;
    // char o[strlen(s)];
    // while(!isempty(top)) {
    //     o[j] = (char)topL(top);
    //     // if(top != NULL) cout << (char)topL(top);
    //     j++;
    //     top = deleteStart(top);
    // }
    // o[j] = '\0';
    // cout << endl << o;
    
    /*stack<char> s1;
    char * s = "Hello World";
    for (int i = 0; i < strlen(s); i++) {
        s1.push(s[i]);
    }
    char* o;
    while(!s1.empty()) {
        cout << s1.top();
        s1.pop();
    }
    s = "ok";
    cout << s;*/

    // string y = ")(", z = "[{]}", x="[()()]";
    // cout << boolalpha << checkpara(z) << " :A" << endl;
    // cout << boolalpha <<checkpara(x) << " :A" << endl;
    // cout << boolalpha <<checkpara(y) << " :A" << endl;

    // infix, prefix, postfix

    // char s[] = {'9', '4', '5', '*', '3', '2', '*', '+', '-', '\0'};
    // cout << evalpost(s) << endl;;
    // for postfix, use same order, for prefix reverse  the order

    

    return 0;
}