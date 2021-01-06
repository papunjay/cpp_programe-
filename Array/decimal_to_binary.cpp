#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,i;
    int a[1000];
    int count=0;
    cin>>n;
    //scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)
        {
            a[i]=0;
            n=n/2;
            //printf("%d",a[i]);
             i++;
            count++;
        }
        else
        {
            a[i]=1;
            n=n/2;
            //printf("%d",a[i]);
            i++;
            count++;
        }
    }
    for(j=count-1;j>=0;j--)
    {
       printf("%d",a[j]);
        //cout<<a[j]<<" ";
    }
    return 0;
}
