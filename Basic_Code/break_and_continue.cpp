#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin>>n;
        if(n%7==0)
        {
            continue;
        }
        cout<<"No"<<n<<endl;
    }
    cout<<"came out if the loop"<<endl;
    return 0;
}