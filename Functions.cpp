#include <cstdio>
#include <iostream>
using namespace std;
int a, b, c, d;
int xd;
int main() {
  cin >> a >> b >> c >> d;
  xd = max(max(max(a, b), c), d);

  cout << xd;
  return 0;
}
