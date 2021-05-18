// https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> ps(n);
  for (auto &p : ps) cin >> p;

  auto ans = accumulate(begin(ps), end(ps), 0.0,
                        [](auto acc, auto p) { return acc + p; });

  cout << fixed << setprecision(12) << (ans / (double)n) << '\n';

  return 0;
}
