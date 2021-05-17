// https://codeforces.com/problemset/problem/281/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  auto mut_s = s.data();
  mut_s[0] = toupper(s[0]);

  cout << mut_s << '\n';

  return 0;
}
