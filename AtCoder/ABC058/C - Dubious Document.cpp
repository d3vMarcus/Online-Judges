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

/*Pensei da seguinte forma:

  Crio um vetor de frequência que é inicializado com a frequência de cada caractere da primeira string.
  Com isso, pego a frequência de cada caractere na string atual, e comparo com a frequência da string anterior.
  Se a frequência do caracactere atual for menor atualizo e se for maior ou igual não faço nada. Daí, basta imprimir as
  frequências do 97 ao 122, se for diferente de 0, que já é lexicograficamente mínima.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<string> v(n);
    for(auto&x:v)cin>>x;

    int asci[128] = {0};

    for(int c : v[0])
        asci[c]++;

    for(int i = 1; i < n; i++){
        int asci2[128] = {0};

        for(int c : v[i])
            asci2[c]++;
        
        for(int j = 97; j <= 122; j++)
            if(asci[j] > asci2[j])
                asci[j] = asci2[j];
    }

    for(char i = 97; i <= 122; i++)
        cout<<string(asci[i], i);

    cout<<endl;

    return 0;
}

