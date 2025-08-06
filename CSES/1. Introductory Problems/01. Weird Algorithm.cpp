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
 
    long long x; cin>>x;
 
    cout<<x;
 
    while(x != 1){
        if(x % 2 == 0) x /= 2;
        else x = 3*x + 1;
 
        cout<<" "<<x;
    }
    cout<<endl;
 
    return 0;
}
