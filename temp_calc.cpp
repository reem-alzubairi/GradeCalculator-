#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    float r, result;

    cout << "Enter temperature: ";
    cin >> r;

    result = r * r * PI;

    cout << "Temperature squared times PI is: " << result << endl;

    return 0;
}
