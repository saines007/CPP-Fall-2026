// This program uses a constructor to initialize a member variable.
#include <iostream>
#include <cmath>
using namespace std;

// Circle class declaration
class Circle
{
private:
    double radius;

public:             // Member function prototypes
    Circle();
    Circle(double);
    void setRadius(double);
    double getRadius();
    double calcArea();
    double calcCircumference();
};

// Circle member function implementation section

/********************************************
 *             Circle::Circle               *
 * This is the constructor. It initializes  *
 * the radius class member variable.        *
 ********************************************/
Circle::Circle()
{
    radius = 1.0;
}

/********************************************
 *             Circle::Circle               *
 * This is the overloaded constructor.      *
 * It initializes radius using the value    *
 * passed to it. Negative values set radius *
 * to 1.0.                                  *
 ********************************************/
Circle::Circle(double r)
{
    if (r >= 0.0)
        radius = r;
    else
    {
        radius = 1.0;
        cout << "Negative radius entered. Radius set to 1.0." << endl;
    }
}

/********************************************
 *             Circle::setRadius            *
 * This function validates the value passed *
 * to it before assigning it to the radius  *
 * member variable.                         *
 ********************************************/
void Circle::setRadius(double r)
{
    if (r >= 0.0)
        radius = r;
    else
    {
        radius = 1.0;
        cout << "Negative radius entered. Radius set to 1.0." << endl;
    }
}

/********************************************
 *             Circle::getRadius            *
 * This function returns the circle's radius.*
 ********************************************/
double Circle::getRadius()
{
    return radius;
}

/**********************************************
 *               Circle::calcArea             *
 * This function calculates and returns the   *
 * Circle object's area. It does not need any *
 * parameters because it can directly access  *
 * the member variable radius.                *
 **********************************************/
double Circle::calcArea()
{
    return 3.14 * pow(radius, 2);
}

/**********************************************
 *          Circle::calcCircumference         *
 * This function calculates and returns the   *
 * Circle object's circumference.             *
 **********************************************/
double Circle::calcCircumference()
{
    return 2 * 3.14 * radius;
}

/***************************************
 *               main                  *
 * The main function creates and uses  *
 * 2 Circle objects.                   *
 ***************************************/
int main()
{
    double r1, r2;

    // Get the radius for circle1
    cout << "Enter the radius for circle 1: ";
    cin >> r1;
    Circle circle1(r1);

    cout << "Circle 1 = " << circle1.getRadius() << endl;

    // Define a second Circle object and set its radius
    Circle circle2;
    cout << "Enter the radius for circle 2: ";
    cin >> r2;
    circle2.setRadius(r2);

    cout << "Circle 2 = " << circle2.getRadius() << endl;

    // Get and display each circle's area
    cout << "The area of circle 1 is " << circle1.calcArea() << endl;
    cout << "The area of circle 2 is " << circle2.calcArea() << endl;

    // Get and display each circle's circumference
    cout << "The circumference of circle 1 is "
        << circle1.calcCircumference() << endl;
    cout << "The circumference of circle 2 is "
        << circle2.calcCircumference() << endl;

    return 0;
}