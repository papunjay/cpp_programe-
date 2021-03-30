#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    int c=0;
    int arr[100];
    while(n!=0)
    {
        if(n%2==0)
        {
            arr[k]=0;
            k++;
            c++;
            n=n/2;
        }
        else{
            arr[k]=1;
            k++;
            c++;
            n=n/2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}