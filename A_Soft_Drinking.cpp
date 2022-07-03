#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k , l , c , d, p , nl , np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int d1 = (k*l)/nl;
    int d2= c*d;
    int d3=p/np;
    int ans= min({d1, d2, d3})/ n;
    cout<<ans<<endl;
    return 0;
}