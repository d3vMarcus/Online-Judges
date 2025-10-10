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

/*Se um número tem mais dígitos que outro então sabemos se um é maior que o outro.
  Se forem iguais em tamanho, logo vemos qual string é lexicograficamente maior, ou
  seja qual tem um caractere maior primeiro que o outro*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b;
    cin>>a>>b;

    if(sz(a) > sz(b)) cout<<"GREATER"<<endl;
    else if(sz(b) > sz(a)) cout<<"LESS"<<endl;
    else{
        if(a > b) cout<<"GREATER"<<endl;
        else if(b > a) cout<<"LESS"<<endl;
        else cout<<"EQUAL"<<endl;
    }

    return 0;
}

