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
    cout<<"\nEnter the number of elements you want to insert : ";
    cin>>n;

    Node *temp,*tail,*head;
    tail=head=NULL;

    // Creating a Linked list by inserting a the beginning 
    // If i insert 1,2,3,4,5,6  :  It will traverse like 6,5,4,3,2,1
    for(i=0;i<n;i++)
    {
        cin>>a;  
        if(head==NULL)
        {
            head=new Node(a);
        }
        else
        {
            temp=new Node(a);
            temp->next=head;
            head=temp;
        }
    }


    // Traversing the newly created linked list
    temp=head;
    while(temp)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }


    // Searching an element in a linked list 

    cout<<"\nEnter an Element to be search : ";
    int value;
    cin>>value;
    int position=0,ans=0;
    temp=head;
    while(temp){
        position++;
        if(temp->data==value)
        {
            cout<<"value found at position : "<<position<<endl;
            ans=true;
            break;
        }
        temp=temp->next;
    }

    if(!ans) cout<<"The value is not present in the linked list !!"<<endl;

}