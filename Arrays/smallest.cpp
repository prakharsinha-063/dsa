#include<iostream>
using namespace std;
int smallest(int arr[],int n){
  //brute force
  // sort(arr,arr+n);
  // return arr[0];

  //optimal way
  int smallest=INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<smallest){
      smallest=arr[i];
    }
  }
  return smallest;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<smallest(arr,n);
}