// https://www.hackerrank.com/challenges/jumping-on-the-clouds/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */

int jumpingOnClouds(vector<int> c) {
  int l = c.size();
  int jmps = 0;
  for (int i = 0; i < l - 1;) {
    i += c[i + 2] ? 1 : 2;
    ++jmps;
  }
  return jmps;
}
