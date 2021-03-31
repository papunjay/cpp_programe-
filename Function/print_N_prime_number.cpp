/*
Given N is number and you have to print upto N prime number 

input 
N=10
output 
2,3,5,7,
*/
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int j=2;j<n;j++)
    {
        if(n%j==0)
        {
            return false;
        }
    }
    return true;
}
int prime_number(int N)
{
    for(int i=2;i<N;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int N;
    cin>>N;
    prime_number(N);

}