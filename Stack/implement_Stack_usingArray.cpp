#include<iostream>
using namespace std;

#define size 5

class stack{

        int top;
         int arr[size];
        public:
        stack(int n=-1)
        {
            top=-1; 
        }

        void push(int val)
        {
            if(top==size-1)
            {
                cout<<val<<" can't insert into the array !"<<endl;
                cout<<"Overflow\n";
                return;
            }
            else
            {
                arr[++top]=val;
            }
        }


        void pop()
        {
            if(top==-1)
            {
                cout<<"Underflow"<<endl;
                return;
            }
            else
            {
                cout<<"The last element that we have inserted is : "<<arr[top--]<<endl;
            }
            
        }

        int size_arr()
        {
            return top+1;
        }


    };

int main()
{
    stack st;
    st.push(2);
    st.push(4);
    st.push(5);
    st.push(10);
    st.push(14);

    // gives overflow 
    st.push(1111);
    st.push(222);

    st.pop();

    cout<<"The size of the stack : "<<st.size_arr()<<endl;



    
}

