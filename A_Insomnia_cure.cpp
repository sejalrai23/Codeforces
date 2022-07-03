#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt=0;
    int k , l , m , n , d;
    cin>>k;
    cin>>l;
    cin>>m ;
    cin>>n;
    cin>>d;
    for(int i=1;i<=d;i++){
        if(i%k==0) cnt++;
        else if(i%l==0) cnt++;
        else if(i%m==0) cnt++;
        else if(i%n==0) cnt++;
    }
    cout<< cnt<<endl;
    return 0;
}