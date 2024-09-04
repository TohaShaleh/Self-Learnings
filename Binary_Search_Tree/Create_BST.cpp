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


void inorder(Node *root)
{
    if(root==nullptr)
    {
        return;
    }
    else
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    // cout<<endl;
}

void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    // cout<<endl;
}

void postorder(Node *root)
{
    if(root!=NULL)
    {
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    // cout<<endl;
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

    cout<<endl;
    cout<<"InOrder traversal : "<<endl;
    inorder(root);

    cout<<endl;
    cout<<"PreOrder traversal : "<<endl;
    preorder(root);

    cout<<endl;
    cout<<"PostOrder traversal : "<<endl;
    postorder(root);

    return 0;
}