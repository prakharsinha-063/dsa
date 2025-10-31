#include<iostream>
using namespace std;
void n_1_backtrack(int i,int n){
  if(i==0) return;
  n_1_backtrack(i-1,n);
  cout<<n-i+1<<endl;
}
void o_n_backtrack(int i,int n){
  if(i<1) return;
  o_n_backtrack(i-1,n);
  cout<<i<<endl;
}
int cnt=1;
void p1(int i,int n){
  if(i<1) return;
  cout<<i<<"\n";
  p1(i-1,n);
}
void print(int i,int n){
  if(i>n) return;
  cout<<i<<"\n";
  print(i+1,n);
}
void printname(int i,int n){
  if(i>n) return;
  cout<<"Prakhar\n";
  printname(i+1,n);
}
void f( ){
  if(cnt==5) return;
  cout<<cnt<<endl;
  cnt++;
  f();
}
int main(){
  //print 1 to 5

  // f();

  //print my name n times
  // int n;
  // cin>>n;
  // printname(1,n);

  //print 1 to n
  // int n;
  // cin>>n;
  // print(1,n);

  //print from n to 1
  int n;
  cin>>n;
  // p1(n,n);
   //print from 1 to n using backtracking
  //  o_n_backtrack(n,n);

   //print from n to 1 using backtracking
  n_1_backtrack(n,n);
  return 0;
}