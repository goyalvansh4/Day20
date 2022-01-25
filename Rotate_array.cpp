#include<bits/stdc++.h>
using namespace std;



void rotateArray(int arr[],int n,int k) {
         int temp[n]={0};
        for(int i=0;i<n;i++){
            temp[(i+k)%n] = arr[i];
        }
   for(int i=0;i<n;i++){
     
     arr[i] = temp[i];
   }
 }

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  
}


int main(){
  int n=7,k=3;
  int arr[n]={1,2,3,4,5,6,7};
  rotateArray(arr,n,k);
  print(arr,n);
}
