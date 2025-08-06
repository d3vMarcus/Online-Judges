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
 
    int t; cin>>t;
 
    while(t--){
        long long y, x;
        cin>>y>>x;
 
        long long area;
 
        if(y > x){
            area = (y-1)*(y-1);
 
            if(y % 2 == 0)
                cout<< area + 2*y - x;
            else
                cout<< area + x;
 
            cout<<endl;
        }
        else{
            area = (x-1)*(x-1);
 
            if(x % 2 == 0)
                cout<< area + y;
            else
                cout<< area + 2*x - y;
 
            cout<<endl;
        }
    }
 
    return 0;
}
