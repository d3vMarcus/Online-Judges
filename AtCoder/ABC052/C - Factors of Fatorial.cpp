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

/* Pegamos todos os primos entre 0 e n, e com isso montamos um vetor de primos com os primos que compõe n, e usamos
a fórmula de legendre para saber qual é o expoente desse primo que compõe n, a fómula de legendre diz que o somatório de i = 1
e indo até o infinito da função piso de n/(p^i) em que p é um primo, retorna qual a maior potência de p que divide n
com isso, basta calcular os divisores que é dado pelo produto dos expoentes+1 das potências primas*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    vector<bool> isprime(n+1, 1);
    isprime[0] = isprime[1] = 0;

    for(int i = 2; i*i <= n; i++){
        if(!isprime[i])
            continue;
        for(int x = 2*i; x <= n; x += i)
            isprime[x] = 0;
    }

    vector<int> primes;
    for(int i = 2; i <= n; i++)
        if(isprime[i])
            primes.pb(i);

    ll div = 1;

    for(int prime : primes){ // Fórmula de Legendre
        ll exp = 0;
        ll pot = prime;

        while(pot <= n){
            exp += n/pot;
            pot *= prime;
        }

        div = (div * (exp + 1)) % M;
    }

    cout<<div<<endl;

    return 0;
}
