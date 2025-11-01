#include<bits/stdc++.h>
int largest(vector<int> &arr) {
        // code here
        //brute force
        // int n =arr.size();
        // sort(arr.begin(),arr.end());
        // return arr[n-1];
        
        
        //optimal approach
        //ek element ko maximum maan lo and sab ko usse compare kro
        int max=arr[0];
        for(auto it: arr){
            if(it>max){
                max=it;
            }
        }
        return max;
    }
int main(){
  int n;
  cin>>n;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<largest(arr);
}