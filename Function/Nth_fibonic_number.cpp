#include<bits/stdc++.h>
using namespace std;
void Fibonic(int n)
{
    int a=-1;
    int b=1;
    int c;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cin>>n;
    Fibonic(n);
}