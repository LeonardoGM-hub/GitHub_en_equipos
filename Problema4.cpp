#include <bits/stdc++.h>
using namespace std;

int main() {
	double x, y, z,a1,a2;
    cin >>x>>y>>z;

    a1 = ((2*x+y)/z) * ((y*y*y)-z);
    a2 = ((x+(2*y)+(3*z))/(z-(2*y)-(3*x))) + (x*x) + (z*z);
    z = a1 / a2;

    cout <<fixed<< setprecision(6) << z << endl;
}
