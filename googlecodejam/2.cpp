#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>> n;
    for(long long m=0;m<n;m++){
        long long d , k , u;
        cin>>d>>k>>u;
        map<long long, pair<long long , long long>> mp;
        for(long long i=0 ;i < d ;i++){
           long long a , b, c;
           cin>>a>>b>>c;
           mp.insert({a,make_pair(b,c)});
        }
        vector<int> order;
        while(k--){
            int k1;
            cin>>k1;
            order.push_back(k1);
        }
        auto it= mp.begin();
        if(order[0] < it->first){
            
        }
    }
}