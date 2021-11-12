// https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s;
  getline(cin, s);

  set<char> ss;
  for (auto c : s) {
    if (isalpha(c)) ss.insert(c);
  }

  cout << ss.size() << '\n';

  return 0;
}
