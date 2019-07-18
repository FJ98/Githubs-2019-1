// Created by ruben on 4/12/19.
#include "TwoLinkedList.h"
#include <iostream>
#include <sstream>
#include <fstream>
using std::getline;
namespace UTEC{
    UTEC::Node::Node() {}

    UTEC::Node::Node(int val) : value(val), next(nullptr) {}


    UTEC::TwoLinkedList::TwoLinkedList() {}


    UTEC::TwoLinkedList::~TwoLinkedList() {
        Node *actual1 = head1;
        do{
            head1 = head1->next;
            delete actual1;
            actual1 = head1;
            size1--;
        }while(head1!= nullptr);
        Node *actual2 = head1;
        do{
            head2 = head2->next;
            delete actual2;
            actual2 = head2;
            size1--;
        }while(head2!= nullptr);
    }

    void UTEC::TwoLinkedList::push_back1(int value) {
        Node* nuevo = new Node(value);
        if (IsEmpty1()){
            tail1=nuevo;
            head1=nuevo;
        }else{
            tail1->next=nuevo;
            tail1=nuevo;
        }
    }
    void UTEC::TwoLinkedList::push_back2(int value) {
        Node* nuevo = new Node(value);
        if (IsEmpty2()){
            tail2=nuevo;
            head2=nuevo;
        }else{
            tail2->next=nuevo;
            tail2=nuevo;
        }
    }

    bool UTEC::TwoLinkedList::IsEmpty1() {
        return head1== nullptr;
    }
    bool UTEC::TwoLinkedList::IsEmpty2() {
        return head2== nullptr;
    }

        std::string TwoLinkedList::getlist(int value) {
            Node* nod1 = head1;
            Node* nod2 = head2;
            Node* nod0 = head;
            switch (value){
                case 0:
                    while(nod0!= nullptr){
                        nod0=nod0->next;
                        //for(int i=0;i<10;i++){
                          //  nod0->push_back(i);
                        //}
                        std::string texto = "el numero es:"+std::to_string(value);

                        return texto;
                    }
                    break;
                case 1:
                    while(nod1!= nullptr){

                        nod1=nod1->next;
                    }
                    break;

                case 2:
                    while(nod2!= nullptr){

                        nod2=nod2->next;
                    }
                    break;
            }
            std::cout<<std::endl;

            return std::string();
        }

        std::string TwoLinkedList::merge(int value) {
            Node* nuevo = tail;
            if(nuevo->value==value){
                return "Operacion Duplicada";
            }else{
                return "Operacion Exitosa";
            }
        }

        bool TwoLinkedList::is_merged() {
            return lista1.tail->next == lista2.tail->next;
        }

        Node* TwoLinkedList::search(int x) {
            Node* actual = head;
            while(actual!= nullptr){
                if(actual->value==x){
                    actual=actual->next;
                    return actual;
                }else{
                    return nullptr;
                }
            }
        }

        void TwoLinkedList::save() {
            std::ofstream file;
            std::string line;

            while(getline(file, line))
            {
                std::stringstream linestream(line);
                std::string value;

                while(getline(linestream,value,','))
                {
                    std::cout << "Valor: (" << value << ")\n";
                }
                std::cout << "Linea finalizada" << std::endl;
            }
        }

        void TwoLinkedList::load() {

        }


}