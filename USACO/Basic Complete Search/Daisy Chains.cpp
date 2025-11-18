#include<bits/stdc++.h>
//#include<numbers>
//#include<chrono>
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define ww(x) DEBUG(cout<< #x " = " << x << "\n")
#define endl '\n'
#define vecin(name, len) vector<int> name(len); for (auto &x : name) cin >> x;
#define vecout(v) for (auto x : v) cout << x << " "; cout << endl;
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MOD = 1e9 + 7;

/*
Truque: Não desconsiderar a parte decimal em certas comparações.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("pails.in", "r", stdin);
    //freopen("pails.out", "w", stdout);

    int n; cin>>n;
    vecin(v, n);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;

            for (int k = i; k <= j; k++)
                sum += v[k];

            for (int k = i; k <= j; k++)
                if ((double)((double)sum/(j-i+1)) == (double)(v[k])) {
                    ans++;
                    break;
                }
        }
    }

    cout<<ans<<endl;

    return 0;
}
