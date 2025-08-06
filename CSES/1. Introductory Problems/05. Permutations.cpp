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
 
    int n; cin>>n;
 
    if(n == 2 || n == 3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
 
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0)
            cout<<i<<" ";
    }
 
    cout<<1;
 
    for(int i = 3; i <= n; i++){
        if(i % 2 != 0){
            cout<<" "<<i;
        }
    }
 
    cout<<endl;
 
    return 0;
}
