#include<bits/stdc++.h>
using namespace std; 

void reverse_Array(int arr[],int n){

for(int i=0;i<n/2;i++){
swap(arr[i],arr[n-i-1]);
}
  
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
}
int main(){
int n=5;
int arr[n]={2,4,7,8,6};
reverse_Array(arr,n);
}
