class MyCircularQueue {
public:
    vector<int>q;
    int r=0;
    int f=0;
    int n;
    MyCircularQueue(int k) {
        q=vector<int>(k+1);
        n=k+1;        
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        q[r]=value;
        r=(r+1)%n;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        f=(f+1)%n;
        return true;
        
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return q[f];
        
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        int e=(r==0)?n-1:r-1;
        return q[e];
    }
    
    bool isEmpty() {
        return f==r;
        
    }
    
    bool isFull() {
        return (r+1)%n ==f;
        
    }
};
