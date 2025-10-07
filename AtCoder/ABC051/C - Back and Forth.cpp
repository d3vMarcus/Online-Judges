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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int sx, sy, tx, ty;
    cin>>sx>>sy>>tx>>ty;

    int dx = tx - sx, dy = ty - sy;
    
    cout<<string(dy, 'U')<<string(dx, 'R');
    cout<<string(dy, 'D')<<string(dx, 'L');
    cout<<string(1, 'L')<<string(dy+1, 'U')<<string(dx+1, 'R')<<string(1, 'D');
    cout<<string(1, 'R')<<string(dy+1, 'D')<<string(dx+1, 'L')<<string(1, 'U');

    return 0;
}
