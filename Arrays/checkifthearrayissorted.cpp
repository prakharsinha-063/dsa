#include<bits/stdc++.h>
bool checksorted(vector<int> &arr){
  for(int i=1;i<arr.size();i++){
    if(arr[i]>=arr[i-1]){

    }else{
      return false;
    }
  }
  return true;
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<checksorted(arr);
}