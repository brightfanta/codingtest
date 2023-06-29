#include <bits/stdc++.h>
using namespace std;

int dp[64][64][64], a[3], n, visited[64][64][64];
int _a[6][3] = {
    {9, 3, 1},
    {9, 1, 3},
    {3, 1, 9},
    {3, 9, 1},
    {1, 3, 9},
    {1, 9, 3}
};

struct A{
    int a, b, c;
};
queue<A> q;
int solve(int a, int b, int c){
    visited[a][b][c] = 1;
    q.push({a, b, c});
    while(q.size()){
        int a = q.front().a;
        int b = q.front().b;
        int c = q.front().c;
        q.pop();
        if(visited[0][0][0]) break;
        for(int i = 0; i < 6; i++){
            cout <<"i: " << i <<"\nbefore hitted, hp is"<< " a: " << a << " b: " << b << " c: " << c << "\n";
            int na = max(0, a - _a[i][0]);
            int nb = max(0, b - _a[i][1]);
            int nc = max(0, c - _a[i][2]);
            cout <<"after hitted, hp is"<< " na: " << na << " nb: " << nb << " nc: " << nc << "\n";
            cout << "before, visited["<< na <<"]["<<nb<<"]["<<nc<<"]: " << visited[na][nb][nc] << "\n";
            if(visited[na][nb][nc]) continue;
            visited[na][nb][nc] = visited[a][b][c] + 1;
            cout << "after, visited["<< na <<"]["<<nb<<"]["<<nc<<"]: " << visited[na][nb][nc] << "\n";
            q.push({na, nb, nc});
        }
    }
    return visited[0][0][0] - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << solve(a[0], a[1], a[2]) << "\n";
    return 0;
}