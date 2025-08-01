#include <bits/stdc++.h>

using namespace std;

class Queue {
    private: int rear, front, queue[100];
    public: Queue(): rear(-1),
    front(-1) {}

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    bool isFull() {
        return rear == 99;
    }

    void enQueue(int x) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        queue[++rear] = x;
    }

    int deQueue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        int val = queue[front++];
        if (front > rear) {
            front = rear = -1;
        }
        return val;
    }

    int Rear() {
        return (isEmpty()) ? -1 : queue[rear];
    }

    int Front() {
        return (isEmpty()) ? -1 : queue[front];
    }

    void Display() {
        if (!isEmpty()) {
            int i;
            printf("\nQueue elements are:\n");
            for (i = front; i <= rear; i++){
                printf("%d\t", queue[i]);
            }
        }
        cout << "\n";
    }
};

int main() {
    Queue q;
    q.enQueue(5);
    q.enQueue(10);
    q.enQueue(15);
    q.Display();

    cout << "Front: " << q.Front() << endl;
    cout << "Rear: " << q.Rear() << endl;

    cout << "Dequeued: " << q.deQueue() << endl;
    q.Display();

    q.deQueue();
    q.deQueue();
    q.Display(); 

}
