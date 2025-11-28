#include <cmath>
using namespace std;

int main() {
    double exp,a1,a2,r, x, y, z;
    cin >> x >> y >> z;
    exp = (2*x)+y-z;
    a1 = (2*x)+y-z;
    a1 = pow(a1,exp);
    a1 = a1 + 7;
    a2 = (2*x)+y-z;
    r= a1 / a2;
    cout << fixed << setprecision(6) <<r << endl;
}
