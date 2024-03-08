#include "Point.h"
#include <math.h>

Point::Point (double x_coordinate, double y_coordinate) {
	this->x_coordinate = x_coordinate;
	this->y_coordinate = y_coordinate;
}

double Point::get_x_coordinate() {
	return x_coordinate;
}

double Point::get_y_coordinate() {
	return y_coordinate;
}

double Point::operator-(Point second_point) {	//Distance between 2 points
	return sqrt(pow((second_point.get_x_coordinate() - x_coordinate), 2) + pow((second_point.get_y_coordinate() - y_coordinate), 2));
}

bool Point::operator==(Point second_point){	//Checks if same points
	if (x_coordinate == second_point.get_x_coordinate() && y_coordinate == second_point.get_y_coordinate())
		return true;
	else
		return false;
}

bool Point::operator!=(Point second_point){	//Checks if not same points
	if (x_coordinate != second_point.get_x_coordinate() && y_coordinate != second_point.get_y_coordinate())
		return true;
	else
		return false;
}

Point Point::operator/(Point second_point){	//Finds Midpoint between 2 points
	double x_place_holder = (x_coordinate + second_point.get_x_coordinate()) / 2;
	double y_place_holder = (y_coordinate + second_point.get_y_coordinate()) / 2;
	Point place_holder(x_place_holder, y_place_holder);
	return place_holder;
}