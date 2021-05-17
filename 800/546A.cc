// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int k, n, w;
  cin >> k >> n >> w;

  auto s = w * (w + 1) / 2;
  s *= k;

  auto ans = s - n;

  cout << (ans > 0 ? ans : 0) << '\n';

  return 0;
}
