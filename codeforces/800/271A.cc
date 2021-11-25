// https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int y;
  cin >> y;

  const auto allUnique = [](int year) {
    auto var = to_string(year);
    sort(begin(var), end(var));
    return unique(begin(var), end(var)) == end(var);
  };

  while (!allUnique(++y))
    ;

  cout << y << '\n';

  return 0;
}
