#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cin >> x;

    int y = trunc(x);

    double ans = x - y;

    cout << ans << endl;

    return 0;
}