class MyCircularQueue {
public:
     vector<int>arr;
        int front;
        int rear;
        int s;
        int p;
    MyCircularQueue(int k) {
        front =-1;
        rear = -1;
        s = 0;
        arr.resize(k);
        p=k;
    }
    
    bool enQueue(int value) {
        if(rear==-1 && front==-1){
            front++;
            rear++;
            arr[front]=value;
            s++;
            return true;
        }
        else if(rear==p-1 && front>0){
            rear=0;
            arr[rear]=value;
            s++;
            return true;
        }
        else if (rear==front-1 || (front==0 && rear==p-1)){
            return false;
        }
        else if(rear<front-1){
            rear++;
            arr[rear]=value;
            s++;
            return true;
        }
        else{
            rear++;
            arr[rear]=value;
            s++;
            return true;
        }
        return true;
    }
    
    bool deQueue() {
        if(front==-1 && rear==-1){
            return false;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
            s--;
            return true;
        }
        else if(front<p-1 && front>-1){
            arr[front] = -1;
            front++;
            s--;
            return true;
        }
        else if(front==p-1 && rear < front){
            arr[front]=-1;
            front=0;
            s--;
            return true;
        }
        
        return false;
    }
    
    int Front() {
        if(front>-1) return arr[front];
        return -1;
    }
    
    int Rear() {
        if(rear>-1) return arr[rear];
        return -1;
    }
    
    bool isEmpty() {
      return s==0;
    }
    
    bool isFull() {
        return s==p;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */