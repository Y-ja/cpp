#ifndef COM3_H
#define COM3_H

class Node {
public:
    int data;
    Node* next;

    Node(int data, Node* next = nullptr) : data(data), next(next) {}
};

class List {
private:
    Node* head;

public:
    List();
    ~List();

    void insertFirstNode(int data);
    void insertNode(int prevData, int data);
    void deleteNode(int data);
    void printList() const;

private:
    void cleanup();
};

#endif // COM3_H
