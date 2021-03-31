#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int no;
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>no;
        ans=ans^no;
    }
    cout<<ans;
}