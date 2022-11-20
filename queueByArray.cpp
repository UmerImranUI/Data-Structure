#include<iostream>
using namespace std;

class queue 
{
  public:
  int front = 0;
  int rear = -1;
  int size;
  int* data;
  
  queue(int data);
  void enqueu(int values);
  void dequeu();
  void print();
};

queue::queue(int data)
{
    this->size = size;
    this->data = new int[size];
}

void queue::enqueu(int values)
{
    this->rear ++;
    if(this->rear >= this->size)
    {
        cout<<" overflow";
    }
    else
    
    {
        this->data[rear] = values;
    }
    
}

void queue::dequeu()
{
    if(this->front > this->rear)
    {
        cout<<"underflow";
    }
    else
    {
        for(int i=this->front+1; i<this->rear+1; i++)
        {
            this->data[i-1] = this->data[i];
        }
        this->rear--;
    }
}

void queue:: print()
{
    for(int i=this->front; i<=this->rear; i++)
    {
        cout<<this->data[i]<<' ';
    }
}

int main()
{
    queue queue(6);
    queue.enqueu(1);
    queue.enqueu(4);
    queue.enqueu(7);
    queue.enqueu(2);
x    queue.dequeu();
    queue.enqueu(7);
    queue.enqueu(5);
    
    queue.print();
    
    return 0;
}