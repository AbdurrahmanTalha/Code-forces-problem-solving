#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, solved = 0;
    scanf("%d", &n);
    while (n--) {
        int arr[3];
        int count = 0;
        for (int i = 0; i < 3; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] == 1) {
                count++;
            }
        }

        if (count >= 2) {
            solved++;
        }
    }
    printf("%d", solved);
    return 0;
}
