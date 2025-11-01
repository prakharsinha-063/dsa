#include<iostream>
using namespace std;
void printalldivisors(int n){
  //brute force method 
  for(int i=1;i<=n;i++){
    if(n%i==0){
      cout<<i<<" ";
    }
  }
  cout<<"\n";
  //optimal way
  vector<int> v(0);
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      v.push_back(i);
      if((n/i)!=i){
        v.push_back(n/i);
      }
    }
  }
  sort(v.begin(),v.end());
  for(auto it: v){
    cout<<it<<" ";
  }
}
int main(){
  int n;
  cin>>n;
  printalldivisors(n);
}