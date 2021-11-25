// https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  const vector<string> a = {"I hate ", "I love "};

  stringstream ss;
  for (int i = 0, k = 0; i < n; ++i) {
    ss << a[k++ % 2];
    ss << (i < n - 1 ? "that " : "it");
  }

  cout << ss.str() << '\n';

  return 0;
}
