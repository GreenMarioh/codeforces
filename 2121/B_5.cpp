#include <bits/stdc++.h>
using namespace std;

bool solve(const string& s, int n) {
    for (int i = 1; i < n - 1; i++) {
        string a = s.substr(0, i);
        string remaining = s.substr(i);
        for (int len = 1; len < remaining.length(); len++) {
            string b = remaining.substr(0, len);
            string c = remaining.substr(len);
            if (b.length() > a.length() + c.length()) continue;
            if (b.length() <= a.length() && a.substr(a.length() - b.length()) == b) {
                return true;
            }
            if (b.length() <= c.length() && c.substr(0, b.length()) == b) {
                return true;
            }
            if (b.length() > max(a.length(), c.length())) {
                string ac = a + c;
                if (ac.find(b) != string::npos) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool solveOptimized(const string& s, int n) {
    for (int aLen = 1; aLen < n - 1; aLen++) {
        for (int bLen = 1; bLen < n - aLen; bLen++) {
            int cLen = n - aLen - bLen;
            if (cLen <= 0) break;
            const string_view a(s.data(), aLen);
            const string_view b(s.data() + aLen, bLen);
            const string_view c(s.data() + aLen + bLen, cLen);
            if (bLen <= aLen && a.substr(aLen - bLen) == b) {
                return true;
            }
            if (bLen <= cLen && c.substr(0, bLen) == b) {
                return true;
            }
            for (int split = 1; split < bLen && split <= aLen; split++) {
                if (split <= aLen && (bLen - split) <= cLen) {
                    if (a.substr(aLen - split) == b.substr(0, split) && 
                        c.substr(0, bLen - split) == b.substr(split)) {
                        return true;
                    }
                }
            }
            if (bLen < aLen) {
                string aStr(a);
                string bStr(b);
                if (aStr.find(bStr) != string::npos) {
                    return true;
                }
            }
            if (bLen < cLen) {
                string cStr(c);
                string bStr(b);
                if (cStr.find(bStr) != string::npos) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool solveFast(const string& s, int n) {
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++) {
            int k = n - i - j;
            if (k <= 0) break;
            if (j <= i) {
                bool match = true;
                for (int p = 0; p < j; p++) {
                    if (s[i - j + p] != s[i + p]) {
                        match = false;
                        break;
                    }
                }
                if (match) return true;
            }
            if (j <= k) {
                bool match = true;
                for (int p = 0; p < j; p++) {
                    if (s[i + j + p] != s[i + p]) {
                        match = false;
                        break;
                    }
                }
                if (match) return true;
            }
            for (int split = max(1, j - k); split <= min(j - 1, i); split++) {
                bool match = true;
                for (int p = 0; p < split; p++) {
                    if (s[i - split + p] != s[i + p]) {
                        match = false;
                        break;
                    }
                }
                if (!match) continue;
                for (int p = 0; p < j - split; p++) {
                    if (s[i + j + p] != s[i + split + p]) {
                        match = false;
                        break;
                    }
                }
                if (match) return true;
            }
            if (j < i) {
                for (int start = 0; start <= i - j; start++) {
                    bool match = true;
                    for (int p = 0; p < j; p++) {
                        if (s[start + p] != s[i + p]) {
                            match = false;
                            break;
                        }
                    }
                    if (match) return true;
                }
            }
            if (j < k) {
                for (int start = 0; start <= k - j; start++) {
                    bool match = true;
                    for (int p = 0; p < j; p++) {
                        if (s[i + j + start + p] != s[i + p]) {
                            match = false;
                            break;
                        }
                    }
                    if (match) return true;
                }
            }
        }
    }
    return false;
}

bool solve_final(const string& s, int n) {
    return solveFast(s, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool res = solve_final(s, n);
        cout << (res ? "YES" : "NO") << "\n";
    }
    return 0;
}
