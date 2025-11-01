#include<iostream>
using namespace std;
void numberofdigits(int n){
  //brute force method tc o(n)
  // int count=0;
  // while(n>0){
  //   n/=10;
  //   count++;
  // }
  //  cout<<count;

  //thoda optimal
  if(n!=0) cout<<int(log10(n)+1);
  else cout<<1;
}
int main(){
  int n;
  cin>>n;
  numberofdigits(n);

}