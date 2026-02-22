// Program to implement stack using array
#include <iostream>      // For input and output (cout, cin)
#include <stdexcept>     // For runtime_error exception

using namespace std;

// Maximum size of the stack
static const int maxSize = 5;

// Stack class definition
class Stack
{
private:
    int stackArray[maxSize];  // Array to store stack elements
    int top;                  // Variable to track the top element index

public:
    Stack();          // Constructor
    bool isEmpty();   // Function to check if stack is empty
    bool isFull();    // Function to check if stack is full
    void push(int data); // Function to add element to stack
    int pop();        // Function to remove element from stack
    int peek();       // Function to view top element
    void display();   // Function to display stack elements
    int size();       // Function to return number of elements
}; // End of class Stack

// Constructor: initializes stack as empty
Stack::Stack()
{
    top = -1;   // -1 means stack has no elements
}

// Checks if stack is empty
bool Stack::isEmpty()
{
    return (top == -1); // True if no elements
}

// Checks if stack is full
bool Stack::isFull()
{
    return (top == maxSize - 1); // True if stack reached max size
}

// Push function: adds an element to the stack
void Stack::push(int data)
{
    if (isFull()) // Check if stack is full
    {
        cout << "Stack Overflow\n"; // Cannot add more elements
    }
    else
    {
        top++;                   // Move top to next position
        stackArray[top] = data;  // Store data at top position
    }
}

// Pop function: removes and returns top element
int Stack::pop()
{
    if (isEmpty()) // Check if stack is empty
        throw runtime_error("Stack is empty"); // Error if empty

    int retValue = stackArray[top]; // Store top element
    top = top - 1;                  // Decrease top position
    return retValue;                // Return removed element
}

// Peek function: returns top element without removing it
int Stack::peek()
{
    if (isEmpty()) // Check if stack is empty
        throw runtime_error("Stack is empty"); // Error if empty

    return stackArray[top]; // Return top element
}

// Returns number of elements in stack
int Stack::size()
{
    return (top + 1); // Size is top index + 1
}

// Displays all elements of stack from top to bottom
void Stack::display()
{
    if (isEmpty()) // Check if stack is empty
    {
        cout << "Stack is empty\n";
    }
    else
    {
        for (int i = top; i >= 0; i--) // Loop from top to bottom
            cout << stackArray[i] << "\n"; // Print each element
    }
}

// Main function
int main()
{
    Stack st; // Create stack object

    try // Try block to handle exceptions
    {
        st.push(1); // Push element 1
        st.push(2); // Push element 2
        st.push(3); // Push element 3
        st.push(4); // Push element 4

        cout << "Stack Items : \n";
        st.display(); // Display stack elements

        cout << "Top Item : " << st.peek() << "\n"; // Show top element
        cout << "Total items : " << st.size() << "\n"; // Show size
        cout << "Popped Item : " << st.pop() << "\n"; // Pop top element

        cout << "Stack Items : \n";
        st.display(); // Display updated stack

        st.push(4); // Push element
        st.push(5); // Push element

        cout << "Stack Items : \n";
        st.display(); // Display stack

        // Pop all elements one by one
        cout << "Popped Item : " << st.pop() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";

        cout << "Stack Items : \n";
        st.display(); // Display stack after popping all
    }
    catch (const exception& e) // Catch runtime errors
    {
        cout << e.what() << "\n"; // Print error message
    }

    return 0; // End of program
}
