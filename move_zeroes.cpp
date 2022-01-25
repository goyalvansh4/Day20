#include<bits/stdc++.h>
using namespace std;



void moveZeroes(int arr[],int n) {
         int index=0;
        for(int i=0;i<n;i++){
            if(arr[i] != 0){
                swap(arr[i],arr[index]);
                index++;
            }
        }
    }

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  
}


int main(){
  int n=5;
  int arr[5]={0,1,0,3,12};
  moveZeroes(arr,n);
  print(arr,n);
}
