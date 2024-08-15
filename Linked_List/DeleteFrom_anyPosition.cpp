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

    // Delete an Element at any position  
    int posi,k=1;
    cout<<"\n\nEnter the position to be Deleted : ";
    cin>>posi;
    Node *prev;
    prev=head;
    temp=head;

    if(posi==1)
    {
        temp=head;
        head=head->next;
        delete temp;
    }
    else
    {
        while(temp->next!=NULL && k<posi-1)
        {
            k++;
            prev=temp;
            temp=temp->next;
        }
        if(temp->next!=NULL)
        {
            Node *toDelete;
            prev=temp;                     // Store the current Node to prev Node
            toDelete=temp->next;           // Store the deleted Node
            prev->next = toDelete->next;   
            delete toDelete;
        }
        else
        {
            cout<<"\nThere is No element in Position : "<<posi<<endl;
            return 0;
        }
    }

    // After Delete any specific positions Node 
    cout<<"\nAfter Deleting the "<<posi<<"'th positions Node : ";
    Show(head);





}