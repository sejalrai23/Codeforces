#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n ;

    vector<int> vec;
    int maxi=INT_MIN , mini=INT_MAX;
    while(n--){
        int a;
        cin>>a;
        vec.push_back(a);
        maxi=max(maxi, a);
        mini=min(mini,a);
    }
    int min , max;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==mini){
            min=i;
        }
    }
     for(int i=0;i<vec.size();i++){
        if(vec[i]==maxi){
            max=i;
            break;
        }
    }
    int k=vec.size(), ans=0;
    if(max<min){
        ans= max + (k-min-1);
    }else{
        ans= max + (k-min-1)-1;
    }
    cout<<ans<<endl;
    return 0;
}