#include <bits/stdc++.h>

using namespace std;
const int N_MAX = 1e4 + 5;

int n, fr[N_MAX], levels[N_MAX];

int bfs(int x, int y) {
    fill(levels, levels + N_MAX, -1);
    queue<int> q;
    q.push(x);
    levels[x] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (levels[fr[cur]] == -1) {
            q.push(fr[cur]);
            levels[fr[cur]] = levels[cur] + 1;
        }
    }
    return levels[y] - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        fr[x] = y;
    }
    while (true) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        int ans = bfs(x, y);
        if (ans == -2) cout << "No\n";
        else cout << "Yes " << ans << "\n";
    }
}