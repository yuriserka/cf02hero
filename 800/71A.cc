// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;

    auto l = s.size();

    if (l <= 10) {
      cout << s << '\n';
    } else {
      cout << s[0] << l - 2 << s[l - 1] << '\n';
    }
  }

  return 0;
}
