#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int top, arr[100];

public:
    Stack() : top(-1) {}

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void push(int x) {
        if (!isFull()) arr[++top] = x;
    }

    int pop() {
        if (!isEmpty()) return arr[top--];
        return -1;
    }

    int peek() {
        return (isEmpty()) ? -1 : arr[top];
    }
    
    void Display() {
        if (!isEmpty()) {
            int i;
            printf("\nStack elements are:\n");
            for (i = 0; i <= top; i++){
                printf("%d\t", arr[i]);
            }
        }
        cout << "\n";
    }
};

int main() {
	Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.Display();

    cout << "Top: " << s.peek() << endl;

    cout << "Pop: " << s.pop() << endl;
    s.Display(); 
    
    s.pop();
    s.pop();
    s.Display(); 

}
