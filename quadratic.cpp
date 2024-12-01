#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;

    // Input: coefficients a, b, and c
    cout << "Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    // Check if a is zero, as it would not be a quadratic equation
    if (a == 0) {
        cout << "The value of a cannot be zero in a quadratic equation!" << endl;
        return 0;
    }

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the discriminant to determine the nature of the roots
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // One real and repeated root
        root1 = -b / (2 * a);
        cout << "The root is real and repeated:" << endl;
        cout << "Root = " << root1 << endl;
    }
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex and distinct:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
