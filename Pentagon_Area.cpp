#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    const double PI = 3.14159;
    cout << "Enter the length from the center to a vortex: ";
    double r; 
    cin >> r;
    double s =2 *r * sin(PI / 5);
    double area = 3 * sqrt(3.0) / 2 * s * s;
    cout << "The area of the pentagon is: " << area << endl;
    
    return 0;

}