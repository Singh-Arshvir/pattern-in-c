#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            break;
        }
    }
    if(i==n)
    {
        cout<<"prime";
    }
}