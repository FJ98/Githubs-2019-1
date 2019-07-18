// Created by ruben on 4/12/19.
#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

#include <iostream>
namespace UTEC{
    struct Node{
        int value;
        Node* next;
        Node();
        Node(int val);
    };

    class ForwardList {
    public:
        Node* head;
        Node* tail;
        ForwardList() : head(nullptr), tail(nullptr) {};
        void push_back(int valor){
            Node* nuevo = new Node;
            nuevo->value = valor;
            if(tail== nullptr){
                head = nuevo;
                tail = nuevo;
            } else{
                tail->next = nuevo;
                tail = nuevo;
            }

        };
        ~ForwardList() {}
    };



class TwoLinkedList {
    Node* head1;
    Node* head2;
    Node* tail1;
    Node* tail2;
    Node* tail;
    Node* head;

    ForwardList lista1;
    ForwardList lista2;

    int size1;
    int size2;
    int size;
public:
    TwoLinkedList();
    ~TwoLinkedList();
    void push_back1(int value);
    void push_back2(int value);
    bool IsEmpty1();
    bool IsEmpty2();
    std::string merge(int value);
    bool is_merged();
    std::string getlist(int value);
    Node* search(int x);
    void save();
    void load();


};
}


#endif //PC1_TWOLINKEDLIST_H
