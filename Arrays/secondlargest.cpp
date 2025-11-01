#include<iostream>
using namespace std;
int getSecondLargest(vector<int> &arr) {
        // code here
        //brute force methord
        // sort(arr.begin(),arr.end());
        // int n=arr.size();
        // for(int i=n-2;i>=0;i--){
        //     if(arr[i]!=arr[n-1]){
        //         return arr[i];
        //     }
        // }
        // return -1;
        
        
        //better approach
        //2 passes karo ..ek largest k liye and ek second largets
        // int largest=arr[0];
        // int n=arr.size();
        // for(int i=1;i<n;i++){
        //     if(arr[i]>largest){
        //         largest=arr[i];
        //     }
        // }
        // int slargest=-1;
        // for(int i=0;i<n;i++){
        //     if(arr[i]>slargest && arr[i]!=largest){
        //         slargest=arr[i];
        //     }
        // }
        // return slargest;
        
        //optimal approach 
        int largest=arr[0];
        int slargest=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
                
            }else if(arr[i]<largest && arr[i]>slargest){
                slargest=arr[i];
            }
        }
        return slargest;
    }
int main(){

  int n;
  cin>>n;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<getSecondLargest(arr);
  return 0;
} 