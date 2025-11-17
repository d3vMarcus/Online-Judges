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
#define vecin(name, len) vector<ll> name(len); for (auto &x : name) cin >> x;
#define vecout(v) for (auto x : v) cout << x << " "; cout << endl;
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MOD = 1e9 + 7;

/*
Usei um vetor para simular o tempo, e a cada intervalo de tempo adicionava
a quantidade necessária de baldes naquele segundo, com isso a resposta é
apenas pegar o max element do vetor.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n ; cin>>n;
    vi tempo(1002);

    for (int i = 0; i < n; i++) {
        int si, ti, bi;
        cin>>si>>ti>>bi;
        for (int j = si; j <= ti; j++)
            tempo[j] += bi;
    }

    cout<<*max_element(all(tempo))<<endl;

    return 0;
}
