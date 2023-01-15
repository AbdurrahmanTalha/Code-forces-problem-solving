#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

string dotinize(const string &s) {
    if (!s.size()) {
        return "";
    }

    stringstream ss;

    for (int i = 0; i < s.size(); i++) {
        ss << '.' << s[i];
    }

    return ss.str();
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    s.erase(remove(s.begin(), s.end(), 'o'), s.end());
    s.erase(remove(s.begin(), s.end(), 'y'), s.end());
    s.erase(remove(s.begin(), s.end(), 'e'), s.end());
    s.erase(remove(s.begin(), s.end(), 'u'), s.end());
    s.erase(remove(s.begin(), s.end(), 'i'), s.end());

    s = dotinize(s);
    cout << s;

    return 0;
}
