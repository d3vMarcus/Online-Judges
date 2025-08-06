#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define WATCH(x) DEBUG(cout<< #x " = " << x << "\n")
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

/*
  Se a Soma total dos números até N for ímpar, não há como partir em dois
  conjuntos, caso contrário sempre é possível.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin>>n;

    long long sum =(n*(n+1)/2);

    if(sum % 2 != 0) cout<<"NO"<<endl;

    else{
       cout<<"YES"<<endl;
       vector<long long> a, b;
       a.reserve(n); b.reserve(n);

       long long temp = sum/2;

       for(auto i = n; i > 0; i--){
           if(temp >= i){
                temp -= i;
                a.pb(i);
           }
           else 
             b.pb(i);
       }

      /*
        A ideia do for é ser guloso e começar tirando todos os maiores números
        do valor que queremos para o conjunto, que será sempre a metade do valor
        total da soma de 1 a N, senão for possível jogamos para o outro conjunto 
        até formar ambos, mas serão formados em ordem decrescente, então, basta
        usar um reverse.
      */

       reverse(all(a)); reverse(all(b));

       cout<<sz(a)<<endl;

       cout<<a[0];
       for(int x = 1; x < sz(a); x++) cout<<" "<< a[x];

       cout<<endl;

       cout<<sz(b)<<endl;

        cout<<b[0];
       for(int x = 1; x < sz(b);x++) cout<<" "<< b[x];

       cout<<endl;
    }
    return 0;
}
