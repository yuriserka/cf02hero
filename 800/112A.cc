// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s1, s2;
  cin >> s1 >> s2;

  transform(begin(s1), end(s1), begin(s1), ::tolower);
  transform(begin(s2), end(s2), begin(s2), ::tolower);

  const int ans = s1.compare(s2);

  cout << (!ans ? 0 : (ans < 0 ? -1 : 1)) << '\n';

  return 0;
}
