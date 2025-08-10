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
  A Ideia é verificar as condições de se formar um palíndromo, se for possível monte, se não retorne NO.

  As condições são: o número de todos os caracteres da string deve ser par, ou se for ímpar, ter no máximo 1 caractere com uma
  quantidade ímpar, caso contrário não é possível formar o palíndromo.
*/
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s; cin>>s;
 
    int alfa[128] = {0};
 
    for(char c : s){
        alfa[c]++;
    }
 
    bool ok = true;
    int cont = 0;
    list<char> ans;
 
    for(int i = 65; i <= 90; i++){
        if(alfa[i] % 2 != 0){
            cont++;
            ans.pb(i);
            alfa[i]--;
        }
        if(cont > 1){
            ok = false;
            break;
        }
    }
 
    if(!ok) cout<<"NO SOLUTION"<<endl;
 
    else{
        for(char i = 'A'; i <= 'Z'; i++){
            if(alfa[i] != 0 && alfa[i] % 2 == 0){
                while(alfa[i] != 0){
                    ans.pb(i);
                    ans.push_front(i);
                    alfa[i] -= 2;
                }
            }
        }
 
        for(char c : ans) cout<<c;
 
        cout<<endl;
    }
 
    return 0;
