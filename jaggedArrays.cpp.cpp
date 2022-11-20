#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no of rows"<<endl;
    cin>>rows;
    
    
    int *colvalues = new int[rows];
    int **array = new int*[rows];
    
    for(int i=0; i<rows; i++)
    {
        cout<<"Enter number of columns for each row:"<<endl;
        cin>>colvalues[i];
        array[i]=new int[colvalues[i]];
    }
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colvalues[i]; j++)
        {
            
            cout<<"for "<<i<<" index of row Enter value"<<":";
            cin>>array[i][j];
        }
    }
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colvalues[i]; j++)
        {
            cout<<array[i][j]<<" ";
            
        }
        cout<<endl;
    }
}