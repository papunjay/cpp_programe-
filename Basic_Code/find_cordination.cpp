#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    int x=0;
    int y=0;
    while(ch!='\n')
    {
        if(ch=='N' || ch=='n')
        {
            y++;
        }
        else if(ch=='S' || ch=='s')
        {
            y--;
        }
        else if(ch=='E' || ch=='e')
        {
            x++;
        }
        else
        {
            x--;
        }
        ch=cin.get();
    
    }
    cout<<x<<" "<<y;
}