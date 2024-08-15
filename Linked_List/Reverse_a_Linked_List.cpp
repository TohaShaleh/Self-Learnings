#include<iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};


void show(Node *temp)
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
    Node *temp,*head,*tail;
    head=NULL;
    int a,n,i;
    cout<<"\nEnter the no. of elements : ";
    cin>>n;
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
    cout<<"\nOriginal Linked list : ";
    show(head);



    // Now reversing the linked list
    Node *head1,*temp1;
    head1=NULL;
    temp=head;

    while(temp)
    {
        if(head1==NULL)
        {
            head1=new Node(temp->data);
        }
        else
        {
            temp1=new Node(temp->data);
            temp1->next=head1;
            head1=temp1;
        }
        temp=temp->next;

    }

    cout<<"\nAfter Reversing the Linked list : ";
    show(head1);
    

}