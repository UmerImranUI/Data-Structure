#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;

void pushValue(int value) {
   struct Node* newNode = new struct Node;
   newNode->data =value;
   newNode->next = top;
   top = newNode;
}
void popValue() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* loc;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      loc = top;
      cout<<"Stack elements are: ";
      while (loc != NULL) {
         cout<< loc->data <<" ";
         loc = loc->next;
      }
   }
   cout<<endl;
}

int main() {
   int input,value;
   cout<<"Enter: '1' to Push in stack"<<endl;
   cout<<"       '2' to Pop from stack"<<endl;
   cout<<"       '3' to Display stack"<<endl;
   cout<<"       '4' to Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>input;
        if (input==1){
            cout<<"Enter value to be pushed:"<<endl;
            cin>>value;
            pushValue(value);
            break;
      }
        else if(input==2){
            pop();
            break; 
      }
        else if(input==3){
            display();
            break;
        }

        else if(input==4){
            cout<<"exit"<<endl;
            break;
        }
        else{
            cout<<"Invalid Choice"<<endl;
        }
    }
   while(input!=4);
   return 0;
}