#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int ans=0;
    if(m%2==0){
        cout<< m/2*n;
    }else{
        int k=(m/2)*n;
        cout<<k+n/2;

    }
    return 0;
}