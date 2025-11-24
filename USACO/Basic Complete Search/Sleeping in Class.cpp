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
  Matemáticamente o problema se reduz a: Encontrar o menor divisor i de sum tal que possamos particionar o 
  array em segmentos contíguos, cada um somando exatamente i.
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("balancing.in", "r", stdin);
    //freopen("balancing.out", "w", stdout);

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vi v(n);
        int sum = 0;
        for(int &i : v){
            cin>>i;
            sum += i;
        }

        for(int i = 0; i <= sum; i++){
            if(i != 0 && sum%i != 0) // Apenas divisores de Sum
                continue;

            bool ok = 1;
            int current = 0;

            for(auto x : v){
                current += x;

                if(current > i){
                    ok = 0;
                    break;
                }
                else if(current == i)
                    current = 0;
            }

            if(ok){
                if(i == 0)
                    cout<<0<<endl;
                else
                    cout<< n - sum/i<<endl; // Como a cada soma reduz 1 elemento do vetor, entao a resposta eh o total - a quantidade minima de somas.

                break;
            }

        }

    }

    return 0;
}
