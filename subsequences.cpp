#include <bits/stdc++.h>
using namespace std;

vector<string> getSubs(string input){

  if (input.empty()){
    vector<string> temp;
    temp.push_back(" ");
    return temp;
  }
  
  char ch = input[0];
  vector<string> res = getSubs(input.substr(1));
  vector<string> fres;

  for (auto i: res){
    fres.push_back(ch + i);
    fres.push_back(""+i);
  }

  return fres;
}

int main(){
  string v = "abcdefgh";

  vector<string> res = getSubs(v);
  for(auto r: res){
    cout << r << endl;
  }

  return 0;
}