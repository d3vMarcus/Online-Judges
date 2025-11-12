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

set<char> solo;
set<pair<char, char>> duo;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("tttt.in", "r", stdin);
    //freopen("tttt.out", "w", stdout);

    vector<string> s(3);
    for (auto&x:s) cin>>x;

    for (int i = 0; i < 3; i++) {
        set<char> aux;
        for (int j = 0; j < 3; j++) {
            aux.insert(s[i][j]);
        }
            if (sz(aux) == 1)
                solo.insert(*aux.begin());
            else if (sz(aux) == 2) {
                char a = *aux.begin();
                char b = *(++aux.begin());
                duo.insert({min(a, b), max(a, b)});
            }
    }

    for (int i = 0; i < 3; i++) {
        set<char> aux;
        for (int j = 0; j < 3; j++) {
            aux.insert(s[j][i]);
        }
        if (sz(aux) == 1)
            solo.insert(*aux.begin());
        else if (sz(aux) == 2) {
            char a = *aux.begin();
            char b = *(++aux.begin());
            duo.insert({min(a, b), max(a, b)});
        }
    }

    set<char> st;
    for (int i = 0; i < 3; i++)
        st.insert(s[i][i]);

    if (sz(st) == 1)
        solo.insert(*st.begin());
    else if (sz(st) == 2) {
        char a = *st.begin();
        char b = *(++st.begin());
        duo.insert({min(a, b), max(a, b)});
    }
    st.clear();

    for (int i = 0; i < 3; i++)
        st.insert(s[i][2-i]);

    if (sz(st) == 1)
        solo.insert(*st.begin());
    else if (sz(st) == 2) {
        char a = *st.begin();
        char b = *(++st.begin());
        duo.insert({min(a, b), max(a, b)});
    }

    cout<<sz(solo)<<endl<<sz(duo)<<endl;

    return 0;
}
