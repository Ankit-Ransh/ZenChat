#include<bits/stdc++.h>
using namespace std;

class Node {
    
public:
    int data; string name; 
    Node *next;

    Node(int data, string name, Node* next) : data(data), name(name), next(next) {}; 
    Node(int data, Node* next = nullptr) : data(data), next(next) {}; 

    Node(const Node &node) {
        this -> data = node.data;
        this -> name = node.name;
        this -> next = node.next ? new Node(*node.next) : nullptr;
    }

    Node* getNextAddress() { return next; }
    int getData() { return data; }
    string getName() { return name; }

    void showNode() {
        cout << getData() << "\t" 
         << getName() << "\t"
         << getNextAddress() << "\n";
    }
};

int main() {
    Node* node = new Node(1);
    node -> next = new Node(2);
    node -> next -> next = new Node(3);

    Node node1(4, "Ankit", node -> next);

    node -> next = nullptr;
    Node node2(node1);

    node1.showNode(); node2.showNode();
    return 0;
}