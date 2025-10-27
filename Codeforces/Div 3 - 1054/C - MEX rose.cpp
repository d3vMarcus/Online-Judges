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

/*
    A solução é o maior valor entre tirar todos os iguais a K ou tirar todos os elementos menores que K.

    é o max porque da pra fazer as duas coisas ao mesmo tempo, tipo se k = 4 em [1, 2, 4, 5, 5]

    v. qtd para tirar k do vetor = 1 -> isso de ans1
    u. qtd para colocar os menores que k = 2 -> faltando 0 e 3.
    
    mas consigo colocar 3 no lugar de 4 e 0 no lugar de algum 5, ou seja consigo colocar o menor que k e substituir k.
    
*/

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
