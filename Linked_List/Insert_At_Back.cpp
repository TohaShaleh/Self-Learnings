#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Creating each Node by Node Constructor...
    Node(int value)
    {
        data=value;
        next=NULL;
    }

};

int main()
{
    int n,a,b,i;
    cout<<"\n Enter the number of elements you want to insert : ";
    cin>>n;

    Node *temp,*tail,*head;
    tail=head=NULL;

    // Creating a Linked list by inserting at the Ending 
    // If i insert 1,2,3,4,5,6  :  It will traverse like 1,2,3,4,5,6  as FIFO...
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


    // Traversing the newly created linked list
    temp=head;
    cout<<"Original Linked List : ";
    while(temp)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }

    
    // Inserting an Element at any position in the Linked List

    int posi,element,k=1;
    cout<<"\n\n Enter the position and element that needs to be inserted : ";
    cin>>posi>>element;
    Node *value=new Node(element);
    temp=head;

    if(posi==1)
    {
        value->next=head;
        head=value;
    }
    else
    {
        while(temp && k<posi-1)
        {
            temp=temp->next;
            k++;
        }
        if(temp)
        {
            value->next=temp->next;
            temp->next=value;
        }
        else
        {
            cout << "Position is out of bounds. No insertion made." << endl;
        }
    }
    
     cout << "\nUpdated Linked List: ";

    temp=head;
    while(temp)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }

    cout<<endl;



}