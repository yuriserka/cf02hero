// https://leetcode.com/problems/group-anagrams/

#include <bits/stdc++.h>

using namespace std;

class OptimalSolution {
 public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> m;
    for (const string &str : strs) {
      m[counting_sort(str)].push_back(str);
    }
    vector<vector<string>> ans;
    for (const auto &[_, v] : m) ans.push_back(move(v));
    return ans;
  }

  string counting_sort(string s) {
    int arr[26] = {0};
    for (const auto &ch : s) ++arr[ch - 'a'];
    string ret;
    for (int i = 0; i < 26; ++i) ret += string(arr[i], i + 'a');
    return ret;
  }
};

class NSquaredSolution {
 public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> ans;
    vector<string> sorted;

    transform(begin(strs), end(strs), back_inserter(sorted), [](auto str) {
      sort(begin(str), end(str));
      return str;
    });

    int len = strs.size();
    vector<bool> visited(len);

    for (int i = 0; i < len; ++i) {
      vector<string> partial;
      if (!visited[i]) partial.push_back(strs[i]);
      visited[i] = true;
      for (int j = i + 1; j < len; ++j) {
        if (sorted[i].size() == sorted[j].size()) {
          if (sorted[i] == sorted[j]) {
            if (!visited[j]) partial.push_back(strs[j]);
            visited[j] = true;
          }
        }
      }
      if (!partial.empty()) ans.push_back(partial);
    }

    return ans;
  }
};
