#include<iostream>
using namespace std;
int secondsmallest(int arr[],int n){
  //brute force
  // sort(arr,arr+n);
  // for(int i=1;i<n;i++){
  //   if(arr[i]!=arr[0]){
  //     return arr[i];
  //   }
  // }

 

  }


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<secondsmallest(arr,n);
}