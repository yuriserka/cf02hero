// https://codeforces.com/problemset/problem/1370/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    cout << (n - n % 2) / 2 << '\n';
  }

  return 0;
}
