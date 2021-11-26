// https://www.hackerrank.com/challenges/ctci-ransom-note/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'checkMagazine' function below.
 *
 * The function accepts following parameters:
 *  1. STRING_ARRAY magazine
 *  2. STRING_ARRAY note
 */

void checkMagazine(vector<string> magazine, vector<string> note) {
  unordered_map<string, int> mm;
  for (const auto &mag : magazine) ++mm[mag];

  unordered_map<string, int> mn;
  for (const auto &nt : note) ++mn[nt];

  bool ok = true;

  for (const auto p : mn) {
    if (!ok) break;
    if (!mm.count(p.first))
      ok &= false;
    else if (mm[p.first] < p.second)
      ok &= false;
  }

  cout << (ok ? "Yes" : "No") << '\n';
}