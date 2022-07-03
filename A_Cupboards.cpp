#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    int l0=0, l1=0, r1=0, r0=0;
    while(n--){
        int l ,r;
        cin>>l>>r;
        if(l==0) l0++;
        else if(l==1) l1++;

        if(r==0) r0++;
        else if(r==1) r1++;

    }

    cout<< min(l0, l1)+ min(r0, r1)<<endl;
    return 0;
}