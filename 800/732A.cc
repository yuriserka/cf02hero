// https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int k, r;
  cin >> k >> r;

  for (long long i = 1;; ++i) {
    if (auto md = (k * i) % 10; md == r or !md) {
      cout << i << '\n';
      break;
    }
  }

  return 0;
}
