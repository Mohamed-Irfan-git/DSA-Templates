#include <bits/stdc++.h>
using namespace std;

// -------------------- FAST IO --------------------
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);

// -------------------- TYPEDEFS --------------------
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

// -------------------- MACROS --------------------
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

// -------------------- CONSTANTS --------------------
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

// -------------------- DEBUG --------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// -------------------- UTILITY FUNCTIONS --------------------
ll gcdll(ll a, ll b) {
    return b == 0 ? a : gcdll(b, a % b);
}

ll lcmll(ll a, ll b) {
    return (a / gcdll(a, b)) * b;
}

ll modPow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;

        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// -------------------- SOLVE FUNCTION --------------------
void solve() {

}

// -------------------- MAIN --------------------
int main() {
    FAST;

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}