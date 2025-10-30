#include<bits/stdc++.h>
void greet(){
  cout<<"Hello\n";
}
string greet_with_name(string s){
  string a="Hello "+s;
  return a;
}
int main(){
  greet();
  string s;
  getline(cin,s);
  string a=greet_with_name(s);
  cout<<a;
  return 0;
}
//pass by value and pass by reference 