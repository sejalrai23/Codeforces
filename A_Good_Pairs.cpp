#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        vector<int> v;
        while(k--){
            int a ;
            cin>>a;
            v.push_back(a);
        }
        cout<<min_element(v.begin(),v.end())-v.begin()+1 <<" "<<max_element(v.begin(),v.end())-v.begin()+1<<endl;
    }
    
}