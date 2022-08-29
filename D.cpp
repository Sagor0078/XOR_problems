#include<bits/stdc++.h>
#define ll int64_t
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define MOD 1000000007
#define INF 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
/* ???
   step 1 :Understanding the problem
   step 2: Using past Problems
   step 3 : Using known ideas/Algorithms
   step 4:{Observations} , {Reductions} , {Random ideas} , {Answer bound} ,{simpler problems} .>__<.
*/
void solve(){
	ll n;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;++i) cin>>a[i];
	for(int i=0;i<n;++i) cin>>b[i];
    auto check = [&](int x){
    	vector<int> c(n),d(n);
    	for(int i=0;i<n;++i){
    		c[i] = a[i] & x;
    		d[i] = ~b[i] & x;
    	}
    	sort(all(c));
    	sort(all(d));
    	// for(auto i : c){
    	// 	cout<<i<<" ";
    	// }
    	// cout<<"\n";
    	// for(auto i : d){
    	// 	cout<<i<<" ";
    	// }
    	// cout<<"\n";
    	return c == d;
    };
    int ans = 0;
    for(int d = 29;d>=0;d--){
    	if(check(ans|1<<d)){
    		ans |= 1<<d;
    	}
    }
    cout<<ans<<"\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T;
    cin>>T;
    while(T--) {solve();}
}