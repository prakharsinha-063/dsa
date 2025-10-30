#include<iostream>
using namespace std;
void pattern18(int n){
  for(int i=0;i<n;i++){
    for(char ch='E'-i;ch<='E';ch++){
      cout<<ch<<" ";
    }cout<<endl;
  }
}    
void pattern17(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    char ch='A';
    int bp=(2*i+1)/2;
    for(int j=1;j<=2*i+1;j++){
      cout<<ch;
      if(j<=bp) ch++;
      else ch--;
    }
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }cout<<endl;
  }
}
void pattern16(int n){
  for(int i=0;i<n;i++){
    char ch='A'+i;
    for(int j=0;j<i+1;j++){
      cout<<ch<<" ";
    }
    cout<<endl;
    ch=ch+1;
  }
}
void pattern15(int n){
  for(int i=0;i<n;i++){
    for(char ch='A';ch<='A'+n-1-i;ch++){
      cout<<ch<<' ';
    }cout<<endl;
  }
}
void pattern14(int n){
  for(int i=0;i<n;i++){
    for(char ch='A';ch<='A'+i;ch++){
      cout<<ch<<' ';
    }cout<<endl;
  }
}
void pattern13(int n){
  int num=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      cout<<num++<<" ";
    }cout<<endl;
  }
}
void pattern12(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      cout<<j+1;
    }
    for(int j=0;j<2*n-2*i-2;j++){
      cout<<" ";
    }
    for(int j=i+1;j>0;j--){
      cout<<j;
    }cout<<endl;
  }
}
void pattern11(int n){
  int start=1;
  for(int i=0;i<n;i++){
    if(i%2==0){
      start=1;
    }else{ start=0;}
    for(int j=0;j<i+1;j++){
      cout<<start;
      start=1-start;
    }cout<<endl;
  }
}
void pattern10(int n){
  for(int i=1;i<=2*n-1;i++){
    int strs=i;
    if(i>n) strs=2*n-i;
    for(int j=1;j<=strs;j++){
      cout<<"*";
    }cout<<"\n";
  }
}
void pattern8(int n){
  for(int i=0;i<n;i++){
    //spaces
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    //star
    for(int j=0;j<2*n-2*i-1;j++){
      cout<<"*";
    }
    //space
    for(int j=0;j<i;j++){
      cout<<" ";
    }cout<<endl;
  }
}
void pattern7(int n){
  for(int i=0;i<n;i++){
    //spaces
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    //stars
    for(int j=0;j<2*i+1;j++){
      cout<<"*";
    }
    //SPACES
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}
void pattern9(int n){
  pattern7(n);
  pattern8(n);
}
void pattern6(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      cout<<j+1<<" ";
    }cout<<"\n";
  }
}
void pattern5(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      cout<<"* ";
    }cout<<'\n';
  }
}
void pattern4(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      cout<<i+1<<" ";
    }cout<<"\n";
  }
}
void pattern3(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      cout<<j+1<<" ";
    }cout<<endl;
  }
}
void pattern2(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      cout<<"* ";
    }cout<<endl;
  }
}
void pattern1(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<"* ";
    }cout<<"\n";
  }
}
int main(){
  int n;
  cin>>n;
  // pattern1(n);
  // pattern2(n);
  // pattern3(n);
  // pattern4(n);
  // pattern5(n);
  // pattern6(n);
  // pattern7(n);
  // pattern8(n);
  // pattern9(n);
  // pattern10(n);
  // pattern11(n);
  // pattern12(n);
  // pattern13(n);
  // pattern14(n);
  // pattern15(n);
  // pattern16(n);
  // pattern17(n);
  // pattern18(n);
  pattern19(n)


}