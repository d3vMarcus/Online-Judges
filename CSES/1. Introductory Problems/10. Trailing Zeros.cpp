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

int ans(int n)
{
    if(n == 0) return 0;

    return n/5 + ans(n/5);
}

/*
    Para um número ter zeros no final ele deve ser múltiplo de 10 várias vezes, logo
    deve ter vários 5 e 2 em sua fatoração, como a quantidade de fatores 5 é bem
    menor que a de 2, então se contarmos todas as aparições de 5, conseguimos
    dizer qual a quantidade de zeros no final do número.
    
    Lógica por trás da função ans:
    
    Note que ao fazer ans(n) pegamos todos os 5 de n!, mas n não de (n/5)! , por isso
    a recursão em cima de n/5.
    
    Exemplo: n = 1000, n/5 = 200, pois 1000 é a soma de duzentos cincos, mas dentro
    desses duzentos tem mais cincos que não contamos, logo chamamos ans(200/5), logo
    n/5 = 40, pela mesma logica temos mais cincos dentro do 40 que não contamos, logo
    ans(40/5) = 8, e temos mais um cinco dentro do 8, mas porque? porque estamos contando
    até o fatorial desses números, de 1000 até 200 fatorial tem 200 zeros e assim por diante,
    então, dentro do 8 temos mais um zero, pois estamos falando do 8 fatorial. logo ans(8/5) = 1.
    Logo se n = 1000, temos 249 zeros no final de 1000!.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    cout<<ans(n)<<endl;

    return 0;
}
