#include<iostream>
using namespace std;
void palindrome(int n){
  int ono=n;
  int rno=0;
  while(n>0){
    int ld=n%10;
    n/=10;
    rno=rno*10+ld;
  }
  if(rno==ono) cout<<"Palindrome";
  else cout<<"not a palindrome";
}
int main(){
  int n;
  cin>>n;
  palindrome(n);
}