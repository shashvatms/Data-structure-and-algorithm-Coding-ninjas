

class Deque {
private:
    int *arr;
    int front, rear, size;

public:
    Deque(int capacity) {
        size = capacity;
        arr = new int[size];
        front = -1;
        rear = 0;
    }

    void insertFront(int element) {
        if ((front == 0 && rear == size - 1) || front == rear + 1) {
            cout << "-1" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }
        arr[front] = element;
    }

    void insertRear(int element) {
        if ((front == 0 && rear == size - 1) || front == rear + 1) {
            cout << "-1" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = element;
    }

    void deleteFront() {
        if (front == -1) {
            cout << "-1" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            if (front == size - 1) {
                front = 0;
            } else {
                front++;
            }
        }
    }

    void deleteRear() {
        if (front == -1) {
            cout << "-1" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }
    }

    int getFront() {
        if (front == -1) {
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (front == -1) {
            return -1;
        }
        return arr[rear];
    }
};


