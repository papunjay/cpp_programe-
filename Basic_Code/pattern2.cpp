#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {   
        if(i%2!=0)
        {
            int col=1;
            while(col<=i)
            {
                cout<<1;
                col=col+1;
            }
            cout<<endl;
        }
        else
        {
            int col=1;
            cout<<1;
            while(col<=i-2)
            {
                cout<<0;
                col=col+1;
            }
            cout<<1;
            cout<<endl;
        }

    }

}