#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int sq;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]*arr[i]<<endl;
    }
    
}