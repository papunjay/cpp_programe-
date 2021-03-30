#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100];
    int min=INT_MAX;
    int max=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<min<<endl;
    cout<<max<<endl;
    
}

