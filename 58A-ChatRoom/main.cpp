#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str, h = "hello";
    cin >> str;

    int cnt = 0;

    int j = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == h[j]) {
            cnt++;
            j++;
        }
    }

    if (cnt == 5) {
        printf("YES");
    } else {
        printf("NO");
    };

    return 0;
}
