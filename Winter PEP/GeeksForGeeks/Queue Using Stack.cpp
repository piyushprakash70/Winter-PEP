class myQueue {
  public:
    int *arr;
    int front;
    int rear;
    int capacity;
    int size;
    myQueue(int n) {
        // Define Data Structures
        capacity=n;
        arr=new int[n];
        front=0;
        rear=-1;
        size=0;
    }

    bool isEmpty() {
        // check if the queue is empty
        return size==0;
    }

    bool isFull() {
        // check if the queue is full
        return size==capacity;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isFull()) return;
        rear++;
        arr[rear]=x;
        size++;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(isEmpty()) return;
        front++;
        size--;
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty()) return -1;
        return arr[rear];
    }
};
