#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>> k;
        vector<int> v;
        while(k--){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int s=v.size();
        sort(v.begin(),v.end());
        cout<<v[s-1]+v[s-2]<<endl;
    }
    return 0;
}