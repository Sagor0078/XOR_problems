#include<bits/stdc++.h>
#define ll int64_t
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define MOD 998244353
#define INF 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;

// FOR(i=2,n+1) summmation ans =  1  + (2^n) * (2^n - 2^(i-2))/i;
ll expo_power(ll a,ll k){
	ll ans = 1;
	while(k){
		if(k&1) ans = (ans*a) % MOD;
		a = (a*a) % MOD;
		k>>=1;
	}
	return ans;
}
ll inv(ll x){
	return expo_power(x,MOD-2);  /// fermat's little theorem for finding modular inverse
}
void solve(){
	ll n;cin>>n;
	ll ans = 1,curr = expo_power(2,n);
    ans = (ans+curr) % MOD;
    for(ll i=2;i<=n+1;++i){
    	curr = curr*(expo_power(2,n) - expo_power(2,i-2)+MOD) % MOD * inv(i) % MOD;
    	ans = (ans+curr)%MOD;
    }
    cout<<ans<<"\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--) {solve();}
}