/*
    Leonardo Gonzalez   3/7/2024

    Week 8              I Get the Point!
*/
#include <iostream>
#include <cassert>
#include <cmath>
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
    assert(point1 == point2);
    assert(!(point2 == point3));

    cout << "\tTesting Inequality..." << endl;
    assert(point1 != point3);
    assert(!(point1 != point2));

    cout << "\tTesting Distance..." << endl;
    Point point4(1, 1);
    Point point5(4, 5);
    assert(point1 - point2 == 0.0);
    assert(point4 - point5 == 5.0);

    cout << "\tTesting Midpoint..." << endl;
    Point point6 = point4 / point5;
    assert(point6.get_x_coordinate() == 2.5);
    assert(point6.get_y_coordinate() == 3.0);
    
    cout << "\tTesting Multiplication..." << endl;
    Point point7 = point6 * (-5.2);
    assert(point7.get_x_coordinate() == -13.0);
    assert(point7.get_y_coordinate() == 3 * -5.2); //3 * -5.2 == -15.81
    
    //For some reason, there is a thing that c++ does that if you compare (3 * -5.2 == -15.81), you will get false, even if it's correct
    //It has something to do with float point arithmetic and using exact numbers

    cout << "\tTesting Array Indexing..." << endl;
    double place_holder_x = point6['x'];
    double place_holder_y = point6['y'];
    assert(place_holder_x == 2.5);
    assert(place_holder_y == 3.0);
    
    place_holder_x = point6[8];
    assert(place_holder_x == 0);

    cout << "Testing Complete." << endl;
}

