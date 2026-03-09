#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;

    vector<int> digits;
    while (n > 0) {
        digits.push_back(n % 3);
        n /= 3;
    }
    if (digits.empty()) digits.push_back(0);

    vector<ll> pow3(digits.size() + 2);
    pow3[0] = 1; // 3^0 hamesha 1 hoga!!
    int x = (int)pow3.size();
    for (int i = 1; i < x; i++) pow3[i] = pow3[i-1] * 3;

    ll cost = 0;
    for (int i = 0; i < (int)digits.size(); i++) {
        if (digits[i] == 0) continue;
        if (i == 0) cost += digits[i] * 3;
        else cost += digits[i] * (pow3[i+1] + i * pow3[i-1]);
    }

    cout << cost << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
