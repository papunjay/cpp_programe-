/*
Given an integer n, write a function that returns count of trailing zeroes in n!.
Input Format
A single integer N.

Constraints
1 <= N <= 10^9

Output Format
A single integer denoting the count of trailing zeroes in N!

Sample Input
5
Sample Output
1

*/
#include<bits/stdc++.h>
using namespace std;
int No_zero(int n)
{
	int ans=0;
	int d=5;
	while((n/d)>=1)
	{
		ans=ans+(n/d);
		d=d*5;
	}
	return ans;
}
int main () 
{
	long long int n;
	cin>>n;
	int result=No_zero(n);
	cout<<result<<endl;
	return 0;
}