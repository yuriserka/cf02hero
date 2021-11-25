// https://codeforces.com/problemset/problem/1367/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    string b;
    cin >> b;

    string ans = b.substr(0, 2);
    for (int i = 3; i < b.size(); i += 2) ans += b[i];

    cout << ans << '\n';
  }

  return 0;
}
