#include<iostream>
using namespace std;

int main()
{
int mat[2][2]; 

cout<<"Enter values of an array"<<endl;
for(int i=0; i<2; i++)
{
    for(int j=0; j<2; j++)
    {
        cin>>mat[i][j];
    }
}

cout<<"column major form: "<<endl;

for(int i=0; i<2; i++)
{
    for(int j=0; j<2; j++)
    {
        cout<<mat[j][i]<<" ";
        
    }
    cout<<endl;
}
}