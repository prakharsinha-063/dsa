#include<bits/stdc++.h>
int gcd(int a, int b) {
        // code here
        //seedha loop
        // int gcd;
        // for(int i=1;i<=min(a,b);i++){
        //     if(a%i==0 && b%i==0){
        //         gcd=i;
        //     }
        // }
        // return gcd;
        
        //ulta loop
        // for(int i=min(a,b);i>=1;i++){
        //     if(a%i==0 && b%i==0) return i;
        // }
        
        //euclid algo 
        while(a>0 && b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a==0) return b;
            else if(b==0) return a;
        
    }
void checkprime(int n){
  // //brute force
  // int cnt=0;
  // for(int i=1;i<=n;i++){
  //   if(n%i==0) cnt++;
  // }if(cnt==2) cout<<"True";
  // cout<<"fALSE";

  //O(sqrt(n))
  int cnt=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
     cnt++;
     if((n/i)!=i) cnt++;
    }
  }
  if(cnt==2) cout<<"true";
  cout<<"false";
}
void printfactors(int n){ 
  //brute force
  // for(int i=1;i<=n;i++){
  //   if(n%i==0){
  //     cout<<i<<" ";
  //   }
  // }cout<<"\n";

  //o(sqrt(n))
  vector<int> v;
  for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){ 
      v.push_back(i);
      if(i!=(n/i)){
        v.push_back(n/i);
    }
    }
  }
  sort(v.begin(),v.end());
  for(auto it: v){
    cout<<(it)<<' ';
    it++;
  }
}
bool armstrongNumber(int n) {
        int ono=n;
        int td=log10(n)+1;
        int ano=0;
        while(n>0){
            int ld=n%10;
            n/=10;
            ano+=pow(ld,td);
        }if(ano==ono) return true;
        return false;
    }
bool isPalindrome(int x) {
        if(x==0) return true;
        if(log10(x)+1==1) return true;
        if(x<0) return false;
        long long rev_no=0;
        int o_no=x;
        while(x>0){
            int ld=x%10;
            x/=10;
            rev_no=rev_no*10+ld;
        }return rev_no==o_no;
    }
int countDigits(int n){
	// int nd=0;
	// while(n>0){
	// 	n=n/10;
	// 	nd++;
	// }return nd;

	return int(log10(n)+1);
}
long long int reverseNumber(long long int n)
{
	//type your code here
	long long int reverseNumber=0;
	while(n>0){
		long long ld=n%10;
		n/=10;
		reverseNumber=(reverseNumber*10)+ld;
	}return reverseNumber;
}
int main(){
  int n;
  cin>>n;
  // printfactors(n);
  checkprime(n);
}