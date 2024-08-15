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
    bool del1=false,del2=false;
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
    Node *toDelete;

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
            prev=temp;                     // Store the current Node to prev Node
            toDelete=temp->next;           // Store the deleted Node
            prev->next = toDelete->next;   
            delete toDelete;
        }
        else
        {
            cout<<"\nThere is No element in Position : "<<posi<<endl;
            del1=true;
        }
    }

    // After Delete any specific positions Node 
    if(!del1)
    {
        cout<<"\nAfter Deleting the "<<posi<<"'th positions Node : ";
        Show(head);
    }








    // Delete a Node by its data 
    int value;
    cout<<"\n\nEnter the Value to be Deleted : ";
    cin>>value;
    
    temp=head;
    int position=0,pp=0;
    while(temp)
    {
        position++;
        if(temp->data==value)    // Taking the Position , which value needs to be Deleted
        {
            pp=1;
            break;
        }
        temp=temp->next;
    }

    if(pp==0) position=0;       // Checking that the value is present or not 

    temp=head;
    prev=head;
    k=1;

    if(position==1)
    {
        temp=head;
        head=head->next;
        delete temp;
    }
    else
    {
        while(temp->next!=NULL && k<position-1)
        {
            k++;
            prev=temp;
            temp=temp->next;
        }
        if(temp->next!=NULL && position!=0)
        {
            prev=temp;
            toDelete=temp->next;
            prev->next=toDelete->next;
            delete toDelete;

        }
        else
        {
            cout<<"\nThe Value : "<<value<<" is not present in the list !!"<<endl;
            del2=true;
        }
    }
    
    if(!del2)
    {
        cout<<"\n\nAfter Deleting the value , the linked list : ";
        Show(head);
    }








}