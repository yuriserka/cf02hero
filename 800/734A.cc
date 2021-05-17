// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  string s;
  cin >> s;

  auto diff = count(begin(s), end(s), 'D') - count(begin(s), end(s), 'A');

  cout << (diff == 0 ? "Friendship" : (diff > 0 ? "Danik" : "Anton")) << '\n';

  return 0;
}
