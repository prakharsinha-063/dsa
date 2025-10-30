//Output
// #include<iostream>
// using namespace std;
// int main(){
//   cout<<"Heyy Prakhar!!!"<<endl;
//   return 0;
// }

//input
// #include<iostream>
// using namespace std;
// int main(){
//   int x,y;
//   cin>>x;
//   cin>>y;
//   cout<<"The value of x: "<<x<<" and the value of y: "<<y<<"\n";
//   return 0;
// }

//datatypes
#include<bits/stdc++.h>
int main(){
  // int x=1000000000;
  // cout<<x<<"\n";
  // cout<<"The size is "<<sizeof(x);

  // long x=10000000000;
  // cout<<x<<"\n";
  // cout<<"The size is "<<sizeof(x);

  // long long x=10000000000000000;
  // cout<<x<<"\n";
  // cout<<"The size is "<<sizeof(x);

  // float x=3.123456789;
  // cout<<x<<"\n";
  // cout<<"The size is "<<sizeof(x);

  // double x=3.123456789;
  // cout<<x<<"\n";
  // cout<<"The size is "<<sizeof(x);

  // string s;
  // cin>>s;
  // cin>>y;
  // cout<<s<<" "<<y;
  // getline(cin,s);
  // cout<<s<<" "<<sizeof(s);

  //character 
  // char ch='A';
  // cout<<ch<<" "<<sizeof(ch);

  //if else statement 
  //adult wala program
  // int age;
  // cin>>age;
  // if(age>=18){
  //   cout<<"You are an adult\n";
  // }else{
  //   cout<<"You're not an adult\n";
  // }

  //if else-if
  // int age;
  // cin>>age;
  // if(age>=18){
  //   cout<<"You're an adult";
  // }else if(age>0 && age<18){
  //   cout<<"you're an adult";
  // }

  //school grading system
  // int m;
  // cin>>m;
  // if(m<25){
  //   cout<<'F';
  // }else if(m>=25 && m<=44){
  //   cout<<"E";
  // }else if(m>=45 && m<=49){
  //   cout<<"D";
  // }else if(m>=50 && m<=59){
  //   cout<<"C";
  // }else if(m>=60 && m<=79){
  //   cout<<"B";
  // }else if(m>=80 && m<=100){
  //   cout<<"A";
  // }

  // if(m<25){
  //   cout<<'F';
  // }else if(m<45){
  //   cout<<'E';
  // }else if(m<450){
  //   cout<<'D';
  // }else if(m<60){
  //   cout<<'C';
  // }else if(m<80){
  //   cout<<'B';
  // }else if(m<=100){
  //   cout<<'A';
  // }

  //nested if else
  // int a;
  // cin>>a;
  // if(a<18){
  //   cout<<"Not eligible for job";
  // }else if(a<=57){
  //   cout<<"Eligible for job ";
  //   if(a>=55){
  //     cout<<"But retirement soon!!";
  //   }
  // }else{
  //   cout<<"Retirement time baby!!";
  // }

  // int d;
  // cin>>d;
  // switch(d){
  //   case 1: cout<<"Monday";
  //   break;
  //   case 2: cout<<"Tuesday";
  //   break;
  //   case 3: cout<<"Wednesday";
  //   break;
  //   case 4: cout<<"Thursday";
  //   break;
  //   case 5: cout<<"Friday";
  //   break;
  //   case 6: cout<<"Saturday";
  //   break;
  //   case 7: cout<<"Sunday";
  //   break;
  //   default: cout<<"meow meow meow";
    
  // }

  //1D array
  // int n;
  // cin>>n;
  // int arr[n];
  // for(int i=0;i<n;i++){
  //   cin>>arr[i];
  // }
  // for(int i=0;i<n;i++){
  //   cout<<arr[i]<<" ";
  // }

  //2D array
  // int r,c;
  // cin>>r;
  // cin>>c;
  // int arr[r][c];
  // for(int i=0;i<r;i++){
  //   for(int j=0;j<c;j++){
  //     cin>>arr[i][j];
  //   }
  // }
  // for(int i=0;i<r;i++){
  //   for(int j=0;j<c;j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<"\n";
  // }

  // string s;
  // getline(cin,s);
  // int l=s.length();
  // for(int i=0;i<l;i++){
  //   cout<<s[i];
  // }

  //loops
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<i<<" ";
  }
  cout<<"\n";
  int i=1;
  for(int a=10;a>0;a--){
    cout<<i<<" ";
    i++;
  }
  cout<<"\n";
  int b=1;
  while(b<=n){
    cout<<b<<" ";
    b++;
  }
  cout<<"\n";
  int c=1;
  do{
    cout<<c<<" ";
    c++;
  }while(c<=n);

  return 0;





}