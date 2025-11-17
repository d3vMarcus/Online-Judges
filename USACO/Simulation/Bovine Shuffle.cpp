#include<bits/stdc++.h>
using namespace std;
#define pb push_back

/*
Apenas notar a forma que devemos reformular o vetor de id's, que é: id[i] = id[ord[i] - 1].
o menos 1 é devido ao fato do numeros da entrada estarem based-1.
*/

int main()
{
    
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    
    int n; cin>>n;
    vector<int> ord(n);
    for(auto&x:ord) cin>>x;
    vector<int> id(n);
    for(auto&x:id)cin>>x;
    
    for(int i = 0; i < 3; i++){
        vector<int> aux = id;
        for(int j = 0; j < n; j++){
            aux[j] = id[ord[j]-1];
        }
        id = aux;
    }
    
    for(auto x : id)
        cout<<x<<endl;
    
}
