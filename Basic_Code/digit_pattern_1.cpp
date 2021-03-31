
/*
    1
   232
  34543
 4567654
567898765

*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //loop for row...
    for(int i=1;i<=n;i++)
    {
        //loop for space ...
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int val=i;
        for(int k=1;k<=i;k++)
        {
            cout<<val;
            val=val+1;
        }
        val=val-2;
        for(int l=1;l<=i-1;l++)
        {
            cout<<val;
            val=val-1;
        }
        cout<<"\n";
    }
}