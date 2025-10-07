#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define WATCH(x) DEBUG(cout<< #x " = " << x << "\n")
#define endl "\n"
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
const int M = 1e9 + 7;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> frq(n+1, 0);

        int ans = 0;

        for(int i = 0; i < n; i++){
            int c; cin>>c;

            if(c == k) ans++;
            else frq[c] = 1;
        }

        int ans2 = 0;

        for(int i = 0; i < k; i++){
            if(!frq[i])
                ans2++;
        }

        cout<<max(ans2, ans)<<endl;
    }


    return 0;
}
