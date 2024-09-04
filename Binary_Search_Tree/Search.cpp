#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;


class Node{
    public:
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};


Node* insert(Node* root,int data)
{
    if(root==NULL)
    {
        Node *temp=new Node(data);
        return temp;
    }
    if(root->data<data)
    {
        root->right=insert(root->right,data);
    }
    else
    {
        root->left=insert(root->left,data);
    }
    return root;

}


bool search(Node *root,int value)
{
    if(root!=nullptr)
    {
        if(root->data==value)
        {
            return 1;
        }
        else if(root->data>value)
        {
            return search(root->left,value);
        }
        else
        {
            return search(root->right,value);
        }
    }
    else
    {
        return 0;
    }

}





int main()
{
    Node *root=NULL;
    cout<<"Enter the number of elements : ";
    int n,i,j,a;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(i=0;i<n;i++)
    {
        root=insert(root,v[i]);
    }


    cout<<"\nEnter a number number to search : ";
    int value;
    cin>>value;
    search(root,value)?cout<<"The number is present in the BST\n":cout<<"Not Present in the BST\n";

    

    return 0;
}