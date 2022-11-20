#include<iostream>
using namespace std;
int main()
{
    int **mdArray = new int*[4]; //declare and initialize
    for(int i=0; i<4; i++)
    {
        mdArray[i] = new int[4];
    }
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            int columnstored;
            cout<<"Enter value at column"<<i+1<<"=";
            cin>>columnstored;
            mdArray[i][j] = columnstored;
        }
        
    }
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<mdArray[j][i]<<" ";
        }
        cout<<endl;
    }
}