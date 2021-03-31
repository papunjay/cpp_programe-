/*

1                                                                                                                               
010                                                                                                                             
1010                                                                                                                            
01010                                                                                                                           
101010  

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    cout<<"1";
    cout<<"\n";
    for(i=2;i<=n;i++)
    {
        
        for(j=0;j<i+1;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    cout<<"0";
                }
                else{
                    cout<<"1";
                }
                
            }
            else
            {
                if(j%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
           
        }
        cout<<"\n";
    }
}