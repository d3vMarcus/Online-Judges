#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define DEBUG(x...)x
#define WW(x) DEBUG(cout<< #x " = " << x << "\n")
using namespace std;
typedef vector<int> vi;
typedef vector<vi> matrix;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int x; cin>>x;
    vector<int> v(x-1); for(auto &a : v) cin>>a;
    vector<int> ans(x+1);
 
    for(int u : v) ans[u]++;

    for(int i = 1; i <= x; i++){
        if(ans[i] == 0){
            cout<<i<<endl;
            break;
        }
    }
 
    return 0;
