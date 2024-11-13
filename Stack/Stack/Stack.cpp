#include <iostream>
using namespace std;

#define MAX 1000  
class Stack {
    int top;

public:
    int arr[MAX];  

    Stack() { top = -1; }  
    bool push(int x);  
    int pop();         
    int peek();        
    bool isEmpty();   
};


bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow\n";
        return false;
    }
    else {
        arr[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}


int Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow\n";
        return 0;
    }
    else {
        int x = arr[top--];
        return x;
    }
}

// Function to return the top element of the stack
int Stack::peek() {
    if (top < 0) {
        cout << "Stack is Empty\n";
        return 0;
    }
    else {
        return arr[top];
    }
}

// Function to check if the stack is empty
bool Stack::isEmpty() {
    return (top < 0);
}

// Driver code to test the stack
int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack\n";
    cout << "Top element is " << stack.peek() << endl;

    cout << "Stack is empty: " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
