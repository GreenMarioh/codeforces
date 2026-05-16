#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

#define co cout <<
#define ci cin >>
#define ded << "\n";

#define meow                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<ull> nums;

// state: 0 = smaller than a, 1 = equal to a, 2 = larger than a
void gen(ull x, int len, int target_len, string &s, ull d1, ull d2, int state){
    if (len == target_len) {
        nums.push_back(x);
        return;
    }

    ull min_d = min(d1, d2);
    ull max_d = max(d1, d2);

    if (state == 1) {
        // State is Equal: We must try both digits
        int target = s[len] - '0';
        
        // Try d1
        int next_state1 = (d1 < target) ? 0 : ((d1 == target) ? 1 : 2);
        gen(x * 10 + d1, len + 1, target_len, s, d1, d2, next_state1);
        
        // Try d2
        if (d1 != d2) {
            int next_state2 = (d2 < target) ? 0 : ((d2 == target) ? 1 : 2);
            gen(x * 10 + d2, len + 1, target_len, s, d1, d2, next_state2);
        }
    } 
    else if (state == 0) {
        // State is Smaller: Greedily pick the max digit to get closer to 'a'
        gen(x * 10 + max_d, len + 1, target_len, s, d1, d2, 0);
    } 
    else if (state == 2) {
        // State is Larger: Greedily pick the min digit to get closer to 'a'
        gen(x * 10 + min_d, len + 1, target_len, s, d1, d2, 2);
    }
}

void solve()
{
    ull a;
    ll n;
    if (!(ci a >> n)) return;
    ull x1, x2;
    ci x1 >> x2;

    string x = to_string(a);
    int len = x.size();
    nums.clear();

    // 0 is always a candidate if it's one of our choices
    if (x1 == 0 || x2 == 0) {
        nums.push_back(0);
    }

    // 1. Length L - 1 (Always smaller than 'a')
    if (len > 1) {
        ull max_d = max(x1, x2);
        if (max_d > 0) gen(max_d, 1, len - 1, x, x1, x2, 0);
    }

    // 2. Length L (Can be smaller, equal, or larger)
    int target_first_digit = x[0] - '0';
    if (x1 != 0) {
        int initial_state = (x1 < target_first_digit) ? 0 : ((x1 == target_first_digit) ? 1 : 2);
        gen(x1, 1, len, x, x1, x2, initial_state);
    }
    if (x2 != x1 && x2 != 0) {
        int initial_state = (x2 < target_first_digit) ? 0 : ((x2 == target_first_digit) ? 1 : 2);
        gen(x2, 1, len, x, x1, x2, initial_state);
    }

    // 3. Length L + 1 (Always larger than 'a')
    ull min_nonzero = (min(x1, x2) == 0) ? max(x1, x2) : min(x1, x2);
    if (min_nonzero > 0) {
        gen(min_nonzero, 1, len + 1, x, x1, x2, 2);
    }

    // Find the minimum absolute difference safely without signed underflow
    ull res = ULLONG_MAX;
    for(ull cv : nums) {
        ull diff = (a > cv) ? (a - cv) : (cv - a);
        res = min(res, diff);
    }

    co res ded
}

int main()
{
    meow;
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}