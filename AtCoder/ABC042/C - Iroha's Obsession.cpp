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

/* interessante o fato de mudar a string com o ++ devido a toda hora estar atualizando a string*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;
    vi v(k); for(auto&t:v)cin>>t;

    while(1){
        string s = to_string(n);

        bool ans = 1;

        for(int i = 0; i < sz(s); i++){
            for(int u : v){
                if(u == s[i]-'0'){
                    ans = 0;
                    break;
                }
            }
            if(!ans) break;
        }

        if(ans){
            cout<<n<<endl;
            break;
        }

        n++;
    }

    return 0;
}
