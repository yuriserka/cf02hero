// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  const auto sum = [](const auto n) -> long long { return (n * (n + 1)) / 2; };

  int ans = 1;
  int acc = 0;
  for (int i = 1; acc <= n; ++i) {
    acc += sum(i);
    ans = i;
  }

  cout << ans - 1 << '\n';

  return 0;
}
