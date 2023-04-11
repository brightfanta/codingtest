#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int n, k, temp, psum[100001], ret = -10000000; 
//최대값을 구하라 했으니, 최소값을 먼저 산정하고 시작한다.
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;

    for(int i = 1; i <= n; i++) { // i = 0 or i = 1 check!!
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }
    for(int i = k; i <= n; i++) {
        ret = max(ret, psum[i] - psum[i - k]);
    }

    cout << ret << "\n";
    return 0;

}


//https://www.acmicpc.net/problem/2559