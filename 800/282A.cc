// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int x = 0;
  while (n--) {
    string s;
    cin >> s;
    x += s.find("X") != string::npos and s.find("++") != string::npos ? 1 : -1;
  }

  cout << x << '\n';

  return 0;
}
