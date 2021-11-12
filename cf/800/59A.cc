// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  int uc = 0, lc = 0;
  for (int i = 0; i < s.size(); ++i) isupper(s[i]) ? ++uc : ++lc;

  transform(begin(s), end(s), begin(s), lc >= uc ? ::tolower : ::toupper);

  cout << s << '\n';

  return 0;
}
