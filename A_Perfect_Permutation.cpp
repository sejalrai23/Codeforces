#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int> vec;
    for(int i=1 ; i <=n ;i++){
        vec.push_back(i);
    }
    if(n==0 || n%2!=0){
        cout<<-1<<endl;
    }else{
        for(int i=1;i<vec.size();i++){
            swap(vec[i], vec[i-1]);
            i++;
        }
        for(auto it : vec){
        cout<<it<<" ";
    }
    }

    
    return 0;

}