/**
 * @author Aws123  
 **/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll eps = 1e-6;
typedef vector<int>vi;
typedef vector<ll>vl;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define read(v,n) for(ll i=0;i<n;i++)cin>>v[i];

void solve(){
    int N,D;
    cin>>N>>D;
    vector<int> v(N);
    for(int i=0;i<N;i++)cin>>v[i];
    vector<int> res;
    res.push_back(v[0]);
    for(int i=1;i<N;i++){
        if(v[i]!=res[res.size()-1])res.push_back(v[i]);
    }
    ll ans =0;
    for(auto x:res)ans+=(x!=0);
    cout<<ans<<endl;;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(6);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
