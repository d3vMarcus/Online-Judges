// Stay Hard 
#include<bits/stdc++.h>
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
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
const int M = 1e9 + 7;

/* 
  definindo a quantidade de elementos diferentes do array target de Q.
  
  fato 1: A operação increase não altera a quantidade de elementos diferentes, logo [0, 0, 0], se x = 2 -> [2, 2, 2]
  E é necessário pelo menos de Q increases para chegar em cada um dos diferentes elementos diferentes.
  
  fato 2: como o elemento do vetor nunca pode ser 0, logo a última operação sempre é um increase, com isso 
  a forma ótima de operação é [increase, smash, increase, smash ... smash, increase], sempre termina em increase.

  logo, temos Q increases e (Q-1) smashes, logo a quantidade mínima é 2Q-1.

*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        set<int> st;

        for(int i = 0; i < n; i++){
            int u; cin>>u;
            st.insert(u);
        }

        cout<<2*sz(st) - 1 <<endl;

    }

    return 0;
}
