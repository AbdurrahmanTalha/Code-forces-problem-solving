#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        string str;
        cin >> str;

        if (str.length() > 10) {
            int count = str.length() - 2;
            cout << str[0] << count << str[str.length() - 1] << endl;
        } else {
            cout << str << endl;
        }
    }

    return 0;
}
