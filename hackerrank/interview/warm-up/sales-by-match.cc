// https://www.hackerrank.com/challenges/sock-merchant/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
  unordered_map<int, int> m;
  int pairs = 0;
  for (const int &s : ar) {
    if (++m[s] == 2) {
      ++pairs;
      m[s] = 0;
    }
  }
  return pairs;
}
