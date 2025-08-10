#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define mp make_pair
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define WW(x) DEBUG(cout<< #x " = " << x << "\n")
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
 
    vector<string> gray;
    gray.pb("0"); gray.pb("1"); // Se caso n = 1, s�o esses j�
 
    for(int i = 2; i <= n; i++){
        vector<string> yarg = gray;
        reverse(all(yarg));
 
        for(auto& x : gray) x = "0" + x;
        for(auto& x : yarg) x = "1" + x;
 
        gray.insert(gray.end(), all(yarg));
    }
    /*
        A lógica do codigo acima é pegar o grupo de strings
        anterior e duplica-lo em um grupo você inverte, no grupo
        invertido concatena 1 ao inicio e no normal concatena 0,
        com isso você formou o código grey, agora basta concatenar
        ambos os grupos que você formou todos os números gray de tamanho n.
    */
 
    for(auto& code : gray){
        while(sz(code) < n) code = "0" + code;
 
        cout<< code << endl;
    }
 
    return 0;
}
