#include <bits/stdc++.h>
using namespace std;
int n, x[100000];
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x[i];
  }

  for (int i = 1; i <= n; i++) {

    if (x[i] > 37) {

      if ((x[i] + 2) % 5 == 0) {
        cout << x[i] + 2 << "\n";
      } else if ((x[i] + 1) % 5 == 0) {
        cout << x[i] + 1 << "\n";
      }

      else {
        cout << x[i] << "\n";
      }
    } else {
      cout << x[i] << "\n";
    }
  }

  return 0;
}
