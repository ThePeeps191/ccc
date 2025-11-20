#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll a, b, x, y;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> x >> y;
    ll ans = min(2 * (max(b, y) + (a + x)), 2 * (max(a, x) + b + y));
    cout << ans << endl;
}
