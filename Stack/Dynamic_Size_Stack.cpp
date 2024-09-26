
/*

 We can manually manage the memory using dynamic memory allocation ...
 (i.e. new and delete operators in C++)

1. Initially Allocate a fixed-size array.

2. When the stack is full and we try to push an element, 
   create a new array with a larger size, copy the old array’s elements to the new array, 
   and deallocate the old array.


*/



#include <iostream>
using namespace std;

class Stack {

    int* arr;   // Pointer to store the array
    int capacity;  
    int top; 

public:
   
    Stack(int size = 5) {
        arr = new int[size];  // Allocate array
        capacity = size;
        top = -1;
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] arr;
    }


    void push(int x) {
        if (top == capacity - 1) {
            // If stack is full, increase capacity
            resize();
        }
        arr[++top] = x;  
        cout << x << " pushed into the stack." << endl;
    }

   
    void pop() {
        if (top == -1) {
            cout << "\nStack Underflow! Can't pop " << endl;
            return;
        }
        cout << arr[top--] << " popped from the stack." << endl;
    }

    // Function to return the top element
    int peek() {
        if (top == -1) {
            cout << "\nStack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }



private:

    void resize() {
        int newCapacity = capacity * 2;  
        int* newArr = new int[newCapacity];  

       
        for (int i = 0; i < capacity; i++) {
            newArr[i] = arr[i];
        }

        // Free the old array and update pointers
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;

        cout << "\nStack size increased to " << capacity << "." << endl;
    }
};



int main() 
{

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "\nTop element is: " << s.peek() << endl<<endl;

    s.pop();
    s.pop();

    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    cout << "\nTop element is: " << s.peek() << endl;

    // Display current size of the stack
    cout << "\nCurrent stack size: " << s.size() << endl;

    return 0;
}