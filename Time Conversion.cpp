#include <bits/stdc++.h>
using namespace std;
string s;
int main() {

  cin >> s;

  if (s[8] == 'P') {
    if (s[0] == '1' && s[1] == '2') {
      cout << s[0] << s[1] << s[2] << s[3] << s[4] << s[5] << s[6] << s[7];
      return 0;
    }
    s[0] += 1;
    s[1] += 2;

    cout << s[0] << s[1] << s[2] << s[3] << s[4] << s[5] << s[6] << s[7];
  }

  else if (s[8] == 'A') {
    if (s[0] == '1' && s[1] == '2') {
      s[0] = '0';
      s[1] = '0';
    }
    cout << s[0] << s[1] << s[2] << s[3] << s[4] << s[5] << s[6] << s[7];
  }

  return 0;
}
