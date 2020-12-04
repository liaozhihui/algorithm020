struct Node{
    Node * pre;
    Node * next;
    int value;
    Node():value(0),pre(nullptr),next(nullptr){}
    Node(int val):value(val),pre(nullptr),next(nullptr){}
};

class BidDirectLinkList{
private:
    int capacity;
    Node * head;
    Node * tail

public:
    BidDirectLinkList(int capacity){
        capacity=capacity;
        head = new Node();
        tail = new Node();
    }

    void removeNode(Node* node){
        node->pre->next=node->next;
        node->next->pre=node->pre;
    }

    void moveToHead(Node* node){
        remove(node);
        head->next->pre=node;
        head->next=node;
    }

    void addToHead(Node * node){
        head->next->pre=node;
        head->next=node;
    }

    void removeTail(Node * node){
        tail->pre->pre->next=tail;
    }

};
class LRUCache {
public:
    LRUCache(int capacity) {

    }

    int get(int key) {

    }

    void put(int key, int value) {

    }
};