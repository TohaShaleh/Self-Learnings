#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};



node* create()
{
    node *head=NULL,*temp,*ans;
    int i,n,a;
    cout<<"Enter the number of elements : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(!head)
        {
            head=new node(a);
            ans=head;
        }
        else{
            temp=new node(a);
            // temp->next=ans;
            ans->next=temp;
            ans=temp;
        }
    }
    // head=ans;
    return head;
}




bool search(node *head,int element)
{
    while(head)
    {
        if(head->data==element)
          return true;
        head=head->next;
    }
    return false;
}


node* insert(node *head,int posi,int value)
{
    int k=1;
    node *temp, *prev, *ans=head;;
     if(posi==1)
     {
        temp=new node(value);
        temp->next=head;
        head=temp;
        return head;
     }
     
     prev=head;
     head=head->next;
     

     while(head)
     {
        k++;
        if(k==posi)
        {
            temp=new node(value);
            prev->next=temp;
            temp->next=head;
            return ans;
        }
        prev=head;
        head=head->next;
     }


     k++;
     if(k==posi)
     {
        temp=new node(value);
        prev->next=temp;
     }
     return ans;

}




node* Delete(node *head,int position)
{
    if(position==1)
    {
        node *temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    int k=1;
    node *ans,*prev;
    prev=head;
    ans=head->next;

    while(ans)
    {
        k++;
        if(k==position)
        {
            prev->next=ans->next;
            delete ans;
            break;
        }
        prev=ans;
        ans=ans->next;

    }
    return head;
    
}




node* reverse(node *head)
{
    node *prev,*next,*temp;
    prev=NULL;
    while(head)
    {
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}


void display(node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}





int main()
{
    

    // Create a lined list 
    node *head=create();

    // Traverse a linked list
    display(head);


    // Searching for a node 
    cout<<"Insert an element to be searched : ";
    int element;
    cin>>element;
    search(head,element)?cout<<"It is in the linked list\n":cout<<"It is not in the linked list\n";


    // Insert at a specific position of the linked list
    int posi,value;
    cout<<"insert the position and Element : ";
    cin>>posi>>value;
    head=insert(head,posi,value);


   // Traverse a linked list
    display(head);



   // Delete any node by its position;
   int position;
   cout<<"Enter the position to be deleted : ";
   cin>>position;
   head=Delete(head,position);

   

   // Traverse a linked list
   cout<<"\nAfter Deleting : ";
    display(head);



    // Reverse the linked list 
    head=reverse(head);



   // After Reversing the linked list 
   cout<<"\nAfter Reversing : ";
  display(head);





}