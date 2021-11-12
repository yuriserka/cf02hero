// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;

    if (auto l = s.size(); l <= 10) {
      cout << s << '\n';
    } else {
      cout << s[0] << l - 2 << s[l - 1] << '\n';
    }
  }

  return 0;
}
