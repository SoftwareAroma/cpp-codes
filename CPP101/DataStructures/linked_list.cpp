#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }

    void print(){
        Node* temp = this;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void add(int element){
        Node* temp = this;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new Node(element);
    }

    void remove(int element){
        Node* temp = this;
        while(temp->next != NULL){
            if(temp->next->data == element){
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
                return;
            }
            temp = temp->next;
        }
    }

    void removeDuplicates(){
        Node* temp = this;
        while(temp->next != NULL){
            if(temp->data == temp->next->data){
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            }else{
                temp = temp->next;
            }
        }
    }

};

int LinkedList() {
    Node* head = new Node(1);
    head->add(1);
    head->add(2);
    head->add(2);
    head->add(3);
    head->add(3);

    head->print();
    return 0;
}
