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
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s; cin>>s;
 
    int atual = 1, global = 1;
 
    for(int i = 1; i < sz(s); i++){
        if(s[i-1] == s[i])
            atual++;
        else{
            atual = 1;
        }
 
        if(atual > global)
            global = atual;
    }
 
    cout<<global<<endl;
 
    return 0;
}
