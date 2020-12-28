class MyCircularDeque {

private:
    int *data;
    int head;
    int tail;
    int capacity;

public:

    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        capacity=k+1;
        data=new int[capacity];
        head=0;
        tail=0;

    }

    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(isFull()){
            return false;
        }


        head = (head+capacity-1)%capacity;
        data[head]=value;



        return true;


    }

    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(isFull()){
            return false;
        }
        data[tail]=value;
        tail = (tail+capacity+1)%capacity;

        return true;
    }

    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(isEmpty()){
            return false;
        }
        head=(head+1+capacity)%capacity;
        return true;
    }

    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {

        if(isEmpty()){
            return false;
        }

        tail = (tail+capacity-1)%capacity;
        return true;
    }

    /** Get the front item from the deque. */
    int getFront() {
        if(isEmpty()){
            return -1;
        }
        return data[(head)%capacity];
    }

    /** Get the last item from the deque. */
    int getRear() {
        if(isEmpty()){
            return -1;
        }
        return data[(tail+capacity-1)%capacity];
    }

    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return head==tail;
    }

    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return (tail+1)%(capacity)==head;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */