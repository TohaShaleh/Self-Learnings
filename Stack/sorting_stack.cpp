#include <iostream>
#include <stack>

using namespace std;

// Function to sort the stack
void sortStack(stack<int>& input) {

    // Temporary stack to store sorted elements
    stack<int> sorted;

    while (!input.empty()) 
    {
        // Pop the top element from the input stack
        int temp = input.top();
        input.pop();

        // While sorted stack is not empty and the top of sorted is greater than temp
        while (!sorted.empty() && sorted.top() > temp) 
        {
            // Move elements from sorted back to input
            input.push(sorted.top());
            sorted.pop();
        }

        // Push the temp element into sorted stack
        sorted.push(temp);
    }

    // Transfer sorted elements back to the input stack
    while (!sorted.empty()) {
        input.push(sorted.top());
        sorted.pop();
    }
}

// Function to print elements of the stack
void printStack(stack<int>& s) {
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    // Stack to be sorted
    stack<int> s;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    s.push(23);

    cout << "Original Stack: ";
    printStack(s);

    // Sort the stack
    sortStack(s);

    cout << "Sorted Stack: ";
    printStack(s);

    return 0;
}