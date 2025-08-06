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

long long ways(long long k)
{
  return ((k*k)*(k*k - 1)/2) - 4*(k-2)*(k-1);
}

/*
    A ideia para chegar nessa formula é a seguinte:
    
    O total de Maneiras de escolher duas casas para 2 cavalos em um tabuleiro
    K x K eh (k*k)*(k*k - 1)/2, pois há k^2 possibilidades para o primeiro
    cavalo e k^2 - 1 possiblidades de casas para o segundo, e dividimos
    por 2, pois não importa qual cavalo está em qual casa, digamos  eles são
    iguais, então não da pra saber se trocarmos eles de posição um com o outro,
    então há casos duplicados senão dividimos por 2.
    
    agora apenas, precisamos tirar as casas em que esses cavalos se atacam.
    Portanto, note que um cavalo consegue atacar dentro de uma
    area de um retangulo 2x3 ou 3x2, duas vezes cada, logo sabendo
    a quantidade de maneiras de colocar um bloco 2x3 dentro de um
    tabuleiro K x K temos o que queremos. A condição para colocar
    um bloco 2x3 é que tenha pelo menos 1 linha de distãncia da borda
    ou seja a linha do bloco deve começar no maximo em (k-1), e a coluna
    irá precisar de no mínimo 2 colunas de distancia da borda, ou seja,
    a coluna do bloco vai começar em no maximo (k-2), logo há (k-1)*(k-2)
    maneiras de se colocar um bloco 2x3, como um bloco 3x2 é um 2x3 só
    que rotacionado, logo para ele tambem terá a mesma quantidade de maneiras.
    logo, (k-1)*(k-2), como cada cavalo ataca 2 vezes por bloco, então o total
    de maneiras que os cavalos se atacam eh: 2*(k-1)*(k-2) + 2*(k-1)(k-2), logo:
    4*(k-1)*(k-2). 
    
    CQD. 
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t; cin>>t;

    for(auto i = 1; i <= t; i++)
      cout<<ways(i)<<endl;

    return 0;
}
