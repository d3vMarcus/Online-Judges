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

/* Expandindo o produto notável chegamos em uma função do 2 grau em variável y, logo achando o mínimo da função encontramos
  o y que minimiza a soma, com isso é só calcular o somatório */

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vi v(n);for(auto&t:v)cin>>t;

    int y{};
    for(int x : v) y += x;
    y = round(double(y)/double(n));
//usamos o round porque o minimo dessa função é uma razão, em que pode não ser inteira, logo queremos o inteiro mais
//próximo dessa média, por isso o round, senão irá dar errado a solve.

    int sum = 0;

    for(int u : v)
        sum += pow(u-y, 2);

    cout<<sum<<endl;


    return 0;
}
