#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N_MAX = 2e5 + 5;

ll C, tcount, x, line1[N_MAX], line2[N_MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> C;
    for (int i = 0; i < C; i++) {
        cin >> x;
        line1[i] = x;
        if (x == 1) tcount += 3;
    }
    for (int i = 0; i < C; i++) {
        cin >> x;
        line2[i] = x;
        if (x == 1) tcount += 3;
    }
    for (int i = 0; i < C; i++) {
        ll row1 = line1[i];
        ll row2 = line2[i];
        ll check1 = i;
        ll check2 = i + 1;
        ll check3 = i - 1;
        if (row1 == 1) {
            if (i % 2 == 0 && line2[check1] == 1) tcount--;
            if (i != C - 1 && line1[check2] == 1) tcount--;
            if (i != 0 && line1[check3] == 1) tcount--;
        }
        if (row2 == 1) {
            if (i % 2 == 0 && line1[check1] == 1) tcount--;
            if (i != C - 1 && line2[check2] == 1) tcount--;
            if (i != 0 && line2[check3] == 1) tcount--;
        }
    }
    cout << tcount << endl;
}