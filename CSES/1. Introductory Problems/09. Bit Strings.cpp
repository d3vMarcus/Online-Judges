#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define MOD 1000000007
#define WW(x) DEBUG(cout<< #x " = " << x << "\n")
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

/*
  Note que as formas das Bit Strings podem ser vistas a variação de verdadeiro e falso da tabela verdade.
  Exemplo: se n = 2, temos: 00, 01, 10, 11, o que seria na tabela verdade FF, FV, VF, VV. Com isso,
  na verdade esse raciocínio é o mesmo para gerar as Bit Strings, e sabemos que o total de combinações
  da tabela verdade é 2^n, como a questão pede a resposta MOD 10^9 + 7, usamos Exponenciação Rápida, já que
  Pow da problema com isso.
*/
 
long long FE(long long b, long long e, long long m)
{
    if(e == 0) return 1%m;
    long long ans = FE(b , e/2, m);
    ans = (ans*ans)%m;
 
    if(e % 2 == 0) return ans;
 
    return (ans*b)%m;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
 
    cout<<FE(2, n, MOD)<<endl;
 
    return 0;
}
