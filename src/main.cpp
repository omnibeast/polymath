#include <iostream>
#include <cmath> // for abs()
using namespace std;
public: 
    double a;
    double b;
    double c;
class Polynomial{
    friend istream& operator>>(istream&is, Polynomial poly){
        cout << "Enter Coefficient x^2: ";
        is >> poly.a;
        cout << "Enter Coefficient x: ";
        is >> poly.b;
        cout << "Enter Coefficient c: ";
        is >> poly.c;
        return is;
    }
    Polynomial operator+(const Polynomial& other) {
        Polynomial sum;
        sum.a = a + other.a;
        sum.b = b + other.b;
        sum.c = c + other.c;
        return sum;
    }
    Polynomial operator-(const Polynomial& other) {
        Polynomial diff;
        diff.a = a - other.a;
        diff.b = b - other.b;
        diff.c = c - other.c;
        return diff;
    }
    friend ostream& operator<<(ostream& os, const Polynomial& poly) {
        os << poly.a << "x^2 + " << poly.b << "x + " << poly.c;
        return os;
    }

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
