/*
    Leonardo Gonzalez   3/7/2024

    Week 8              I Get the Point!
*/
#include <iostream>
#include <cassert>
#include "Point.h"

using namespace std;

int main()
{
    cout << "Begin Testing..." << endl;
    
    cout << "\tTesting Constructor..." << endl;
    Point point1(3.5, 4.2);
    assert(point1.get_x_coordinate() == 3.5);
    assert(point1.get_y_coordinate() == 4.2);

    cout << "\tTesting Equality..." << endl;
    Point point2(3.5, 4.2);
    Point point3(4.2, 3.5);
    assert((point1 == point2) == true);
    assert((point2 == point3) == false);

    cout << "\tTesting Inequality..." << endl;
    assert((point1 != point3) == true);
    assert((point1 != point2) == false);

    cout << "\tTesting Distance..." << endl;
    Point point4(1, 1);
    Point point5(4, 5);
    assert(point1 - point2 == 0.0);
    assert(point4 - point5 == 5.0);

    cout << "\tTesting Midpoint..." << endl;
    Point point6 = point4 / point5;
    assert(point6.get_x_coordinate() == 2.5);
    assert(point6.get_y_coordinate() == 3.0);
    
    cout << "Testing Complete." << endl;
}

