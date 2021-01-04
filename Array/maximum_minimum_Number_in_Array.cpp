//Maximum and minimum of an array 

#include<bits/stdc++.h>
using namespace std;
void max_min_number(int Array[],int N,int &max,int &min){
    max=min=Array[0];
    for(int i=0;i<N;i++){
        if(max<Array[i]){
            max=Array[i];
        }
    }
    for(int i=0;i<N;i++){
        if(min>Array[i]){
            min=Array[i];
        }
    }
}
int main()
{
    int max=0,min=0;
    int N;
    int Array[1000];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>Array[i];
    }
    max_min_number(Array,N,max,min);
    cout<<max<<" "<<min<<endl;
    return 0;
}