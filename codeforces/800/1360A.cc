// https://codeforces.com/problemset/problem/1360/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int n_r = 2 * a, n_c = b;
    if (a > b) {
      n_c = a;
      n_r = 2 * b;
    }

    cout << (n_c >= n_r ? n_c * n_c : n_r * n_r) << '\n';
  }

  return 0;
}
