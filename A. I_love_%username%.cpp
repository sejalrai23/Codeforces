#include<bits/stdc++.h>
using namespace std;


int main(){
    int n ;
    cin>>n;
    int maxi=INT_MIN , mini=INT_MAX, cnt=0;
    while(n--){
        int a;
        cin>>a;
        
        if(a>maxi) cnt++;
        else if(a<mini) cnt++;
        maxi=max(maxi,a);
        mini=min(mini,a);
    }
    cout<<cnt-1<<endl;
    return 0;
}