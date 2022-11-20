#include<iostream>
using namespace std;

int main()
{
    int **mdArray = new int*[3]; //declare and initialize
    for(int i=0; i<3; i++)
    {
        mdArray[i]=new int[3]; //storing in array
    }
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int storednumber;
            cout<<"Enter value at row"<<i+1<<"=";
            cin>>storednumber;
            mdArray[i][j]= storednumber; //storing or saving 
        }
    }
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<mdArray[i][j]<<" ";
        }
        cout<<endl;
    }
}