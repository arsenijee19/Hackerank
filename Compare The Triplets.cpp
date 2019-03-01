#include <bits/stdc++.h>
using namespace std;
int a1, a2, a3, b1, b2, b3, br1, br2;
int main() {
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

  if (a1 > b1) {
    br1++;
  }

  else if (b1 == a1) {
    br1 = br1;
    br2 = br2;
  } else {
    br2++;
  }

  if (a2 > b2) {
    br1++;
  } else if (b2 == a2) {
    br1 = br1;
    br2 = br2;
  } else {
    br2++;
  }

  if (a3 > b3) {
    br1++;
  } else if (b3 == a3) {
    br1 = br1;
    br2 = br2;
  } else {
    br2++;
  }
  cout << br1 << " " << br2;
  return 0;
}
