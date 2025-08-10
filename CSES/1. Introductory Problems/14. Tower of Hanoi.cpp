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
  O algoritmo para resolver a torre de hanoi é começando com n discos na primeira pilha, passar n-1 discos para a pilha 2
  usando a pilha 3 como auxiliar, daí passar o maior disco para a pilha 3, e assim passar todos os n-1 discos da pilha 2
  para a pilha 3, e podemos fazer isso recursivamente como vemos abaixo.
*/

void hanoi(int n, int _1, int _3, int _2)
{
    if(n == 0) return;

    hanoi(n-1, _1, _2, _3);
    cout<<_1<<" "<<_3<<endl;
    hanoi(n-1, _2, _3, _1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k; cin>>k;
    //A quantidade mínima de passos para resolver a torre de hanói é 2^n - 1
    long long x = (1LL<<k)-1;
    cout<<x<<endl;

    hanoi(k, 1, 3 ,2);

    return 0;
}
