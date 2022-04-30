/**
 * @author Aws123  
 **/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll eps = 1e-9;
typedef vector<int>vi;
typedef vector<ll>vl;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define read(v,n) for(ll i=0;i<n;i++)cin>>v[i];

bool isPalindrome(ll n)
{
    string str = to_string(n);
    int s = 0, e = str.length() - 1;
    while (s < e) {
 
        // If char at s and e are
        // not equals then return
        // false
        if (str[s] != str[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
 
// Function to find  palindromic divisors
ll palindromicDivisors(ll n)
{
    // To sore the palindromic divisors of
    // number n
    vector<ll> PalindromDivisors;
 
    for (ll i = 1; i <= sqrt(n); i++) {
 
        // If n is divisible by i
        if (n % i == 0) {
 
            // Check if number is a perfect square
            if (n / i == i) {
 
                // Check divisor is palindromic,
                // then store it
                if (isPalindrome(i)) {
                    PalindromDivisors.push_back(i);
                }
            }
            else {
 
                // Check if divisors are palindrome
                if (isPalindrome(i)) {
                    PalindromDivisors.push_back(i);
                }
 
                // Check if n / divisors is palindromic
                // or not
                if (isPalindrome(n / i)) {
                    PalindromDivisors.push_back(n / i);
                }
            }
        }
    }
 
    // Print all palindromic divisors in sorted order
    sort(PalindromDivisors.begin(),
         PalindromDivisors.end());
 
    return PalindromDivisors.size();
}
void solve()
{
    ll n;
    cin>>n;
    cout << palindromicDivisors(n) << endl;
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
