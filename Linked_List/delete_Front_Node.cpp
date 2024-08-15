#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }

};

void Show(Node *temp)
{
    while(temp)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    int n,a,i;
    cout<<"Enter the No. of Elements : ";
    cin>>n;

    Node *head;
    Node *tail;
    head=tail=NULL;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(head==NULL)
        {
            head=new Node(a);
            tail=head;
        }
        else
        {
            tail->next=new Node(a);
            tail=tail->next;
        }
    }

    cout<<"\nOriginal Linked List : ";
    Node *temp;
    Show(head);

    
    // Deleting the First Node 
    temp=head;
    head=head->next;
    delete temp;

    // After Deleting the first Node 
    cout<<"\n\nAfter Deleting the first node : ";
    Show(head);


    // Deleting the Last Node 
    Node *prev;
    temp=head;
    prev=head;

    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;

    }
    prev->next=NULL;
    delete temp;

    // After Deleting the Last Node 
    cout<<"\n\nAfter Deleting the Last node : ";
    Show(head);



}