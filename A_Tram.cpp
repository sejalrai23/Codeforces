#include<bits/stdc++.h>
using  namespace std;

int main(){
    int n;
    cin>>n ;
    int left=0, maxi=INT_MIN;
    while (n--)
    {
        int en, ex;
        cin>>en>>ex;
        left-=en;
        left+=ex;
        maxi=max(left,maxi);

    }
    cout<<maxi<<endl;
    return 0;
    
}