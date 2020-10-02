//Removing duplicates from string;
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void removeDuplicates(st)
{
  int n = st.size();
  vactor<char> vs;
  int flag;
  for (int i = 0; i < n; i++)
  {
    flag = 0;
    for (int j = 0; j < i; j++ +)
    {
      if (st[i] == st[j])
        flag++;
    }
    if (flag == 0)
    {
      vs.push_back(st[i]);
    }
  }
  for (int i = 0; i < vs.size(); i++)
  {
    cout << vs[i];
  }
}

int main()
{
  string st;
  getline(cin, st);
  removeDuplicates(st);
  return 0;
}
