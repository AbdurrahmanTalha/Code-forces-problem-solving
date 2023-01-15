#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

void solve(string str1, string str2) {
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 == str2) {
        printf("0");
    } else if (str1 < str2) {
        printf("-1");
    } else if (str1 > str2) {
        printf("1");
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str1, str2;
    cin >> str1 >> str2;

    solve(str1, str2);
    return 0;
}
