#include <bits/stdc++.h>
using namespace std;

bool isSubstring(const string& text, const string& pattern, int textIdx = 0, int patternIdx = 0, int startPos = 0) {
    if (patternIdx == pattern.length()) {
        return true;
    }
    if (textIdx == text.length()) {
        return false;
    }
    if (text[textIdx] == pattern[patternIdx]) {
        if (isSubstring(text, pattern, textIdx + 1, patternIdx + 1, startPos)) {
            return true;
        }
    }
    if (patternIdx == 0) {
        return isSubstring(text, pattern, textIdx + 1, 0, textIdx + 1);
    }
    return isSubstring(text, pattern, startPos + 1, 0, startPos + 1);
}

bool trySplits(const string& s, int n, int aEnd = 0, int bEnd = 0) {
    if (aEnd == 0) {
        for (int i = 1; i < n - 1; i++) {
            if (trySplits(s, n, i, 0)) {
                return true;
            }
        }
        return false;
    }
    if (bEnd == 0) {
        for (int i = aEnd + 1; i < n; i++) {
            if (trySplits(s, n, aEnd, i)) {
                return true;
            }
        }
        return false;
    }
    string a = s.substr(0, aEnd);
    string b = s.substr(aEnd, bEnd - aEnd);
    string c = s.substr(bEnd);
    string ac = a + c;
    return isSubstring(ac, b);
}

bool solveRecursive(const string& s, int n, int pos = 1) {
    if (pos >= n - 1) {
        return false;
    }
    for (int bEnd = pos + 1; bEnd < n; bEnd++) {
        string a = s.substr(0, pos);
        string b = s.substr(pos, bEnd - pos);
        string c = s.substr(bEnd);
        if (!a.empty() && !b.empty() && !c.empty()) {
            string ac = a + c;
            if (isSubstring(ac, b)) {
                return true;
            }
        }
    }
    return solveRecursive(s, n, pos + 1);
}

bool solve(const string& s, int n) {
    return solveRecursive(s, n);
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
        bool res = solve(s, n);
        cout << (res ? "YES" : "NO") << "\n";
    }
    return 0;
}
