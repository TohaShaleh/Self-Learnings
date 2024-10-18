
// Create , Reverse , Delete , Search , Travese a Linked List 


import java.util.Scanner;

class Node{

    int data;
    Node next;
    
    Node(int data)
    {
        this.data=data;
        this.next=null;
    }
}




public class Main {

    public static void disp(Node head)
    {
        // System.out.println();
        while(head!=null)
        {
            System.out.print(head.data+" ");
            head=head.next;
        }
        System.out.println();
    }


    // Reversing a Linked List
    public static Node reverse(Node head)
    {
        Node curr=head,next=null,prev=null;
        while(curr!=null)
        {
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;

    }


    // Deleting a Node from a LinkedList 
    public static Node delNode(Node head,int item)
    {
        if(head!=null && head.data==item)
        {
            head=head.next;
        }

        Node curr=head;
        while(curr.next!=null)
        {
            if(curr.next.data==item){
            curr.next=curr.next.next;
            break;
            }
            curr=curr.next;
        }
        return head;

    }


    // Searching For a Node in the Linked List
    public static boolean search(Node head,int value)
    {
        while(head!=null)
        {
            if(head.data==value)
            {
               return true;
            }
            head=head.next;
        }
        return false;
    }



    public static void main(String[] args) {

        System.out.print("Enter the number of elements : ");

        Scanner input = new Scanner(System.in);
        int n=input.nextInt();

        Node head=null,temp=null,temp1=null;
        
        // Creating a LinkedList 
        System.out.println("Enter the elements : ");
        for(int i=0;i<n;i++)
        {
            int a=input.nextInt();
            if(head==null)
            {
                head=new Node(a);
                temp1=head;
            }
            else
            {
                temp=new Node(a);
                temp1.next=temp;
                temp1=temp;
            }
        }

        // Traversing the Linked List
        disp(head);

        //Reversing the Linked List
        head=reverse(head);
        System.out.println("After Reversing the linkedlist : ");
        disp(head);


        //Delete a node from the Linked List 
        System.out.print("Enter the item to be deleted : ");
        int item=input.nextInt();
        head=delNode(head,item);
        disp(head);


        // Searching a Linked List 
        System.out.print("Enter an item to be searched : ");
        int value=input.nextInt();
        boolean ans=search(head,value);
        if(ans) System.out.println("The item is exists");
        else System.out.println("The value is not exists");


        input.close();
       
    }
}