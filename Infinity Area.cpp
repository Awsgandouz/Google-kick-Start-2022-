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
const double pi=acos(-1);

void solve()
{
    ll r,a,b;
    cin>>r>>a>>b;
    long double area= pi*r*r ; 
    while(r)
    {
        area+=(r*a)*(r*a)*pi;
        r=(r*a)/b;
        area+=r*r*pi;
    }
    cout << area << endl;
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
