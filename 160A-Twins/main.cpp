#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

void solve() {
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    scanf("%d", &n);

    int arr[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int length = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + length, greater<int>());

    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt++;
        sum += arr[i];
        if (sum > total - sum) {
            printf("%d", cnt);
            return 0;
        }
    }

    return 0;
}
