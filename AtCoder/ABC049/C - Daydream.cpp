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

/* A ideia é verificar se cada palavra está em S, mas por causa das palavras terem mesmos prefixos, invertemos
a string S para podermos comparar se cabe ou não aquela palavra lá*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    vector<string> words = {"maerd", "remaerd", "esare", "resare"};

    reverse(all(s));

    int i = 0;
    bool is;

    while(i < sz(s)){
        is = 0;

        for(auto w : words){
            if(s.substr(i, sz(w)) == w){
                i += sz(w);
                is = 1;
            }
        }
        if(!is) break;
    }

    cout<<(is ? "YES" : "NO")<<endl;

    return 0;
}
