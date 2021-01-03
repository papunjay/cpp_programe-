#include <bits/stdc++.h>
printArray(int Array[],int N){
    for(int i=0; i<N; i++){
        cout<<Array[i]<<" ";
    }
}
void reversArray(int Array[],int start,int end){
   while (start<end)
   {
       int temp=Array[start];
       Array[start]=Array[end];
       Array[end]=temp;
       start++;
       end--;
   }
   
}
int main(){
    int N;
    int Array[1000];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>Array[i];
    }
    reversArray(Array,0,N-1);
    printArray(Array,N-1)
}