#include <algorithm>
#include <string>
#include <vector>
std::string ntom(std::string str, const std::string S, const std::string T){
  const int n = S.size(), m = T.size();
  std::vector<int> ns(130);
  for(int i = 0; i < n; ++i)ns[S[i]] = i;
  long long sum = 0;
  for(char c : str)sum = sum * n + ns[c];
  std::string res;
  do{
    res.push_back(T[sum % m]);
    sum /= m;
  }while(sum);
  reverse(res.begin(), res.end());
  return res;
}
std::string ntom(std::string str, const int n, const int m){
  std::string S, T;
  for(int i = 0; i < n; ++i)S.push_back((i >= 10 ? 'A' - 10 : '0') + i);
  for(int i = 0; i < m; ++i)T.push_back((i >= 10 ? 'A' - 10 : '0') + i);
  return ntom(str, S, T);
}