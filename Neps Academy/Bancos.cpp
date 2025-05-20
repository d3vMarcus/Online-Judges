#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
typedef pair<int,int> ii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int c, n;
    cin>>c>>n;
    
    priority_queue<ii, vector<ii>, greater<ii>> caixas;
    /*usaremos fila de prioridade para criar um ciclo nos caixas, de quando estiverem
    livres ou não, e a função greater para organizar o caixa que irá ficar disponível
     primeiro.*/
    
    
    for(int i = 0; i < c; i++)
        caixas.push(mp(0, i));
        //inicializando os caixas todos com tempo de espera 0 e um id i;
    
    int atraso = 0;
    
    for(int j = 0; j < n; j++){
        int n, t;
        cin>>n>>t;
        
        auto cxDisp = caixas.top(); 
        caixas.pop();
        
        int atendimento = max(t, cxDisp.fi); 
        /*o tempo para ser atendido ira ser de no max. a hora que o cliente chega
        ou o tempo do prox. caixa estar disponivel.*/
        
        if(atendimento - t > 20)
            atraso++;
        
        caixas.push(mp(atendimento+d, cxDisp.se));
    }
    
    cout<<atraso<<endl;
    
    return 0;
}
