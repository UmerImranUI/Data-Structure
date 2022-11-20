#include<iostream>
using namespace std;

int main()
{
int mat[3][3];  // for 3 by 3 matrix.

cout<<"Enter the elements of an array"<<endl;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        cin>>mat[i][j];
    }
}

cout<<"Array in row major form: "<<endl;

for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        cout<<mat[i][j]<<" ";
        
    }
    cout<<endl;
}
}