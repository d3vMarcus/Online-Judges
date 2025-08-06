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

/*
  Para resolver esse problema basta perceber as condições para ser possível zeras ambas as pilhas, que são:
  a pilha maior não pode ser muito maior que a menor, ele deve ser no máximo duas vezes o menor, pois caso
  contrário se eu tirasse apenas 2 moedas da maior a menor iria zerar primeiro que a maior, E a segunda condição
  é que a soma das pilhas deve ser um múltiplo de 3, já que sempre que faço uma operação de tirar moedas o total
  tirado sempre é 3, logo se a soma das pilhas não forem m(3), não será possível zera-las.
*/
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin>>t;
 
    while(t--){
        long long a, b; cin>>a>>b;
        long long temp = max(a, b);
        b = min(a, b);
        a = temp;
        /*
            Fiz isso acima para garantir que em A sempre esteja o maior número e em B o menor
        */
        
        if(a > 2*b || ((a+b) % 3 != 0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
 
    return 0;
