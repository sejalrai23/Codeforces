#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
   
    int comp=v[k-1];
    int cnt=0;
    for(auto it:v){
        if(it>=comp && it>0){
            cnt++;
        }
    }
    cout<<cnt;


    
    return 0;

}