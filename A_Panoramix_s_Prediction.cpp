#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int flag = 0;

   if (n == 0 || n == 1)
    return false;

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}
int main(){
    int n ,m ;
    cin>>n >>m;

    while(true){
        n++;
        if(isPrime(n)){
            if(n==m){
                cout<<"YES"<<endl;
                break;
            }else{
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;


}