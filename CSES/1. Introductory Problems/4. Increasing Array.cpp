#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define WW(x) DEBUG(cout<< #x " = " << x << "\n")
using namespace std;
typedef vector<int> vi;
typedef vector<vi> matrix;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
    vector<long long> v(n); for(auto& x : v) cin>>x;
 
    long long cnt = 0;
 
    for(int i = 1; i < n; i++){
        if(v[i] - v[i-1] < 0){
            cnt += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
 
    cout<<cnt<<endl;
 
    return 0;
}
 
