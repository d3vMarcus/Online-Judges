#include<bits/stdc++.h>
#define pb push_back
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define DEBUG(x...)x
#define ww(x) DEBUG(cout<< #x " = "<< x << "\n")
using namespace std;
typedef vector<int> vi;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 0, y = 0, v[3];

    for(int i = 0; i < 3; i++){
        cin>>v[i];

        if(v[i] == 5) x++;
        else if(v[i] == 7) y++;
    }

    if(x == 2 && y == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
