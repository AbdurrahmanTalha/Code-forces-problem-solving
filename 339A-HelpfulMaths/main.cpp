#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

void solve(char str[]) {
    int length = strlen(str);
    bool ifContinue = true;
    if (length <= 2) {
        cout << str[0];
        ifContinue = false;
    }
    if (ifContinue == true) {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length - 1; j++) {
                int a = int(str[i]);
                int b = int(str[j]);
                if (a < b) {
                    swap(str[i], str[j]);
                }
                j++;
            }
            i++;
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char str[100];
    scanf("%s", &str);

    solve(str);
    int length = strlen(str);

    if (length <= 2) {
        
    } else {
        fputs(str, stdout);
    }
    return 0;
}
