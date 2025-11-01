#include<iostream>
using namespace std;
void reverseanumber(int n){
  int rev_no=0;
  while(n>0){
    int ld=n%10;
    n/=10;
    rev_no=rev_no*10+ld;
  }
  cout<<rev_no;

}
int main(){
  int n;
  cin>>n;
  reverseanumber(n);
}