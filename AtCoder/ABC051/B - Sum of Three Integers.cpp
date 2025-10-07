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

/* iterar x, y, z em 3 for comparando se a soma é igual a S. Força Bruta: O(n^3) -> TLE 
   mas ao notar que se iteramos por 2, já temos automaticamente o terceiro valor pois temos a soma
   logo z = S - x - t, logo basta verificar se ele está entre o range, que isto é uma solução. O(n^2) passa.
*/


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, s;
    cin>>k>>s;

    int cnt = 0;

    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int z = s-x-y;
            if(z >= 0 && z <= k)
                cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
