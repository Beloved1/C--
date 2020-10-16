#ifndef list_h
#define list_h

#include <iostream>
using namespace std;

class list{
private:
    struct node{
    int data;
    node* next;
    };
    node* head;
    node* curr;
    node* temp;
public:
    list();
    void addNode(int addData);//To add data to the linked list
    void deleteNode(int delData);//To delete data from the linked list
    void printList();//To print out the contents of the linked list
    void revList();//To reverse the linked list
    void search(int findData);//To search for data in the linked list

};

list::list()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void list::addNode(int addData)
{
    node* n = new node;
    n->next = NULL;
    n->data = addData;
    if(head != NULL)
    {
        curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
    }
    
}

void list::printList()
{
    curr = head;
    while(curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}

void list::deleteNode(int delData)
{
    node* delPtr = NULL;
    // if (head == NULL) cout << "Empty List\n";

    temp = curr = head;

    
    while(curr != NULL && curr->data != delData)
    {
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout << "Data not found\n";
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head)
        {
            head = head->next;
            temp = NULL;
        }
        delete(delPtr);
        cout << delData << " was deleted\n";
        
    }
    
}

void list::revList()
{
    node* p = NULL;
    curr = head;
    while(curr!=NULL)
    {
        p = temp;
        temp = curr;
        curr = curr->next;
        temp->next = p;
    }
    head = temp;

    // cout << "New head is " << head->data << endl;
}

void list::search(int findData)
{
    curr = head;
    while(curr != NULL && curr->data!= findData)
    {
        curr = curr->next;
    }
    if(curr == NULL){
        cout << findData << " not found\n";
    }
    else{
        cout << findData << " was found\n";
    }
   
    
}

#endif