/*
    ABCDE                                                                                                                         
    ABCD                                                                                                                          
    ABC                                                                                                                           
    AB                                                                                                                            
    A    
*/

#include<bits/stdc++.h>
using namespace std;
void printAlphabet(int n)
{
    for(int i=5;i>0;i--)
    {
        char alpha='A';
        for(int j=1;j<=i;j++)
        {
            cout<<alpha;
            alpha=alpha+1;
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    printAlphabet(n);
}