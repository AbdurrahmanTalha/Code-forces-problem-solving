#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0;
    scanf("%d", &n);

    while (n--) {
        string str;
        cin >> str;

        if (str == "++X") {
            x++;
        } else if (str == "--X") {
            x--;
        } else if (str == "X++") {
            x++;
        } else if (str == "X--") {
            x--;
        }
    }
    printf("%d", x);

    return 0;
}
