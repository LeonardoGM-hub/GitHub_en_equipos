#include <bits/stdc++.h>
using namespace std;

int main() {
	double x,y,z;
    cin >> x >> y;
    y = (((x*x*x) + (x*x)) / ((y*y)-y)) - ((x/y)+5);
    x = 2*x;
    z = y / x;
    cout << z << endl;
}
