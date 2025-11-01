#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int n){
  int ono=n;
  int ano=0;
  if(n==0) cout<<"not an armstrong";
  else{
    int digits=int(log10(n)+1);
    while(n>0){
      int ld=n%10;
      ano=ano+pow(ld,digits);
      n/=10;
    }
    if(ano==ono) cout<<"armstrong";
    else cout<<"not an armstrong";
  }
}
using namespace std;
int main(){
  int n;
  cin>>n;
  armstrong(n);

}