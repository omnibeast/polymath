#include <iostream>
#include <cmath> // for abs()
using namespace std;
public: 
    a1;
    b1;
    c1;
class Polynomial{
    friend istream& operator>>(istream&is, Polynomial poly)


};

int main() {
    Polynomial p1, p2;

    cout << "Polynomial 1:\n";
    cin >> p1;

    cout << "\nPolynomial 2:\n";
    cin >> p2;

    Polynomial sum = p1 + p2;
    Polynomial diff = p1 - p2;

    cout << "\nP1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;

    cout << "\nP1 + P2 = " << sum << endl;
    cout << "P1 - P2 = " << diff << endl;

    return 0;
}
