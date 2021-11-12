// https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int ans = 0;
  while (a <= b) {
    ++ans;
    a *= 3;
    b *= 2;
  }

  cout << ans << '\n';

  return 0;
}
