#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <assert.h>
#include <ctime>
#include <bitset>
#include <numeric>
#include <complex>
#include <valarray>
using namespace std;
// #define FOREACH(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
// #define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
// #define FORE(i, a, n) for (i = (a); i < (int)(n); ++i)
// #define Size(n) ((int)(n).size())
// #define all(n) (n).begin(), (n).end()
// #define ll long long
// #define pb push_back
// #define error(x) cout << #x << " = " << (x) << endl;
// #define ull unsigned long long
// #define pii pair<int, int>
// //#define pii pair<ll, ll>
// #define pll pair<ll, ll>
// #define pdd pair<double, double>
// #define point complex<double>
// #define X real()
// #define Y imag()
// //#define X first
// //#define Y second
// #define EPS 1e-10
// //#define endl "\n"
// #define pdd pair<double, double>
// #define mk make_pair


int main(){
    vector<vector<int>> v;
    int x=-1 , y=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a;
            cin>>a;
            v[i].push_back(a);
            if(a==1){
                x=i;
                y=j;
            }
        }
    }
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cout<<v[i][j];
        }
        cout<<endl;
    }

        return 0;

    }

