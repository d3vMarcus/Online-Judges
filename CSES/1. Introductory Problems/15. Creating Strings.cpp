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
typedef long long ll;

/*
  A ideia é usar a função next_permutation para gerar todas as combinações possíveis, mas
  lembrando que ela só gera todas se o conjunto já estiver ordenado inicialmente, e o all(s)
  se deve para intervalo que ele deve permutar, o do while é para imprimir a permutação
  inicial, ordenada.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    vector<string> ans;
    sort(all(s));

    do{
        ans.pb(s);
    }while(next_permutation(all(s)));

    cout<<sz(ans)<<endl;
    for(auto x : ans) cout<<x<<endl;

    return 0;
}
