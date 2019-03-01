#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, e, mn, mx, s1, s2, s3, s4, s5;
int main() {
  cin >> a >> b >> c >> d >> e;
  s1 = a + b + c + d; /// e
  s2 = a + b + c + e; /// d
  s3 = b + c + d + e; /// a
  s4 = a + c + d + e; /// b;
  s5 = a + b + d + e; /// c
  mn = min(min(min(min(s1, s2), s3), s4), s5);
  mx = max(max(max(max(s1, s2), s3), s4), s5);

  cout << mn << " " << mx;

  return 0;
}
