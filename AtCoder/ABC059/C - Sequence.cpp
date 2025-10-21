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
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
const int M = 1e9 + 7;
 
/*Como precisamos alternar o sinal da soma a cada próximo index, bastamos verificar se atende essa condição e a de não ser 0.
Mas temos 2 formas de guardar os indices, os pares sendo positivos ou os impares sendo positivos.
se a soma em um index par, no caso positivo, não for > 0, então achamos o custo de coloca-lo no menor valor maior que 0, o 1, que é dado por (1-sum), e atualizamos o valor de sum
e fazemos esse processo para o impar etc, com isso achamos 2 custos, o menor entre eles é a resposta. ]

Sim, estou com preguiça de escrever mais coisa e saiu uma merda essa explicação
espero que dê para entender.*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    vi v(n); for(auto&x:v)cin>>x;

    ll sum = 0;
    ll coast1 = 0, coast2 = 0;

    for(int i = 0; i < n; i++){ // par -> positivo
        sum += v[i];

        if(i%2 == 0 && sum <= 0){
            coast1 += 1 - (sum);
            sum = 1; // atualiza a soma, tu tava esquecendo disso
        }

        if(i%2 == 1 && sum >= 0){
            coast1 += 1 + (sum);
            sum = -1;
        }
    }

    sum = 0;

    for(int i = 0; i < n; i++){ // impar -> positivo
        sum += v[i];

        if(i%2 == 1 && sum <= 0){
            coast2 += 1 - (sum); 
            sum = 1;
        }

        if(i%2 == 0 && sum >= 0){
            coast2 += 1 + (sum);
            sum = -1;
        }
    }

    cout<<min(coast1, coast2)<<endl;
    
    return 0;
}
