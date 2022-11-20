#include<iostream>
using namespace std;

class linkedlist
{
    struct Node
    {
        int data;
        Node* next;
    };
    public:
    
    Node* head=NULL;
    
    public:
    
    void append(int data)
    {
        Node* newnode = new Node();  //initialisation
        newnode->data=data;
        newnode->next= NULL;
        
        if(head==NULL)
        {
            head = newnode;
        }
        else
        {
            Node* tempnext = head;
            while(true){
                if(tempnext != NULL)
                {
                    if(tempnext->next == NULL)
                    {
                        tempnext->next=newnode;
                        break;
                    }
                    tempnext= tempnext->next;
                }
            }
        }
        
    }
    
    void print()
    {
        Node* tempnext;
        
        tempnext=head;
        while(tempnext!=NULL)
        {
            cout<<tempnext->data<<endl;
            tempnext=tempnext->next;
        }
    }
    
};


int main()
{
    linkedlist l;
    l.append(5);
    l.append(6);
    l.append(7);
    l.append(8);
    
    l.print();
    return 0;
}