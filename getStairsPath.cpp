#include <bits/stdc++.h>
using namespace std;

vector<string> getAllStairsPath(int n){

  if (n == 0){
    vector<string> r;
    r.push_back("");
    return r;
  } else if (n < 0){
    vector<string> r;
    return r;
  }
  
  vector<string> path1 = getAllStairsPath(n-1);
  vector<string> path2 = getAllStairsPath(n-2);
  vector<string> path3 = getAllStairsPath(n-3);

  vector<string> res;

  for (auto i: path1){
    res.push_back("1"+i);
  }

  for (auto i: path2){
    res.push_back("2"+i);
  }

  for (auto i: path3){
    res.push_back("3"+i);
  }

  return res;
}

int main(){
  int n;
  cin >> n;

  vector<string> res = getAllStairsPath(n);

  for (auto i: res)
  {
    cout << i << "\n";
  }
  // cout << endl;
  // cout << res.size();
  return 0;
}