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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	ll s, c;
	cin>>s>>c;
	
	if(s >= c) cout<<c/2<<endl;
	else{
		if(c - 2*s < 0){
			if(c%2 == 0) cout<<c-s+1<<endl;
			else cout<<c-s<<endl;
		}
		else
			cout<<s + ((c-(2*s))/4)<<endl;
	}

    return 0;
}


