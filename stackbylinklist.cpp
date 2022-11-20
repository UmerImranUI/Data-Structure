#include <iostream>
using namespace std;



struct Node {
	int value;
	Node* link;
};

Node* top;

// Utility function to add an element
// data in the stack insert at the beginning
void pushinstack(int value)
{

	// Create new node temp and allocate memory in heap
	Node* temp = new Node();

	// Check if stack (heap) is full.
	// Then inserting an element would
	// lead to stack overflow
	if (!temp) {
		cout << "\nStack Overflow";
		exit(1);
	}

	// Initialize data into temp data field
	temp->value = value;

	// Put top pointer reference into temp link
	temp->link = top;

	// Make temp as top of Stack
	top = temp;
}

// Utility function to check if
// the stack is empty or not
int isEmpty()
{
	// If top is NULL it means that
	// there are no elements are in stack
	return top == NULL;
}

// Utility function to return top element in a stack
int peek()
{

	// If stack is not empty , return the top element
	if (!isEmpty())
		return top->value;
	else
		exit(1);
}

// Utility function to pop top
// element from the stack
void popfromstack()
{
	Node* temp;

	// Check for stack underflow
	if (top == NULL) {
		cout << "\nStack Underflow" << endl;
		exit(1);
	}
	else {

		// Assign top to temp
		temp = top;

		// Assign second node to top
		top = top->link;

		// This will automatically destroy
		// the link between first node and second node

		// Release memory of top node
		// i.e delete the node
		free(temp);
	}
}

// Function to print all the
// elements of the stack
void display()
{
	Node* temp;

	// Check for stack underflow
	if (top == NULL) {
		cout << "\nStack Underflow";
		exit(1);
	}
	else {
		temp = top;
		while (temp != NULL) {

			// Print node data
			cout << temp->value << "-> ";

			// Assign temp link to temp
			temp = temp->link;
		}
	}
}

// Driver Code
int main()
{

	// Push the elements of stack
	pushinstack(11);
	pushinstack(22);
	pushinstack(33);
	pushinstack(44);

	// Display stack elements
	display();

	// Print top element of stack
	cout << "\nTop element is " << peek() << endl;

	// Delete top elements of stack
	popfromstack();
	popfromstack();

	// Display stack elements
	display();

	// Print top element of stack
	cout << "\nTop element is " << peek() << endl;

	return 0;
}
