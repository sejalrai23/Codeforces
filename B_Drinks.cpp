#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    double sum=0;
    cin>>n ;
    k=n;
    while(k--){
        int a;
        cin>>a;
        sum+=a;
    }
    cout << setprecision (12) << fixed << sum/n;
    return 0;

}