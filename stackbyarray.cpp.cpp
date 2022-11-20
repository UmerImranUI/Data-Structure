#include<iostream>
using namespace std;

class stackbyarray
{
  int size;
  int* data;
  int top=-1;
  
  public:

    stackbyarray(int size); //constructor 
    
    void pushinstack(int value); //function to insert in stack
    int popfromstack();  //function to delete from stack
    int topofstack(); //function to get top of the stack
    void printstack(); //function to print top of stack
};

//constructor
stackbyarray::stackbyarray(int size)
{
    this->size = size;
    this->data = new int[size];  //allocating in heap memory
}

void stackbyarray::pushinstack(int value)
{
    this->top++;
    if(this->top >= this->size)
    {
        throw runtime_error{"Error: stackoverflow"};
    }
    else
    {
        this->data[top]=value;
    }
    
}

int stackbyarray::popfromstack()
{
    this->top--;
    if(this->top < -1)
    {
        throw runtime_error ("Error: stackunderflow");
    }
    else
    {
        return this->data[top];
    }
}

int stackbyarray::topofstack()
{
    return this->data[top];
}

void stackbyarray::printstack()
{
    for(int i=0; i<=this->top; i++)
    {
        cout<<this->data[i]<<endl;
    }
}


int main()
{
    stackbyarray stackbyarray(7);
    
    stackbyarray.pushinstack(3);
    stackbyarray.pushinstack(4);
    stackbyarray.pushinstack(5);
    stackbyarray.popfromstack();
    stackbyarray.pushinstack(7);
    stackbyarray.pushinstack(8);
    stackbyarray.popfromstack();
    stackbyarray.pushinstack(10);
    stackbyarray.pushinstack(11);
    stackbyarray.popfromstack();
    stackbyarray.pushinstack(12);
    stackbyarray.popfromstack();
    stackbyarray.pushinstack(79);
    stackbyarray.popfromstack();
    stackbyarray.pushinstack(77);
    
    stackbyarray.printstack();
    cout<<"Value at top of the stack is: "<<stackbyarray.topofstack()<<endl;
    return 0;
}
