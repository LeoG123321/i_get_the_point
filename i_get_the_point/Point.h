#pragma once
class Point
{
private:
	double x_coordinate;
	double y_coordinate;
public:
	Point(double, double);	//x coordinate, y coordinate
	double get_x_coordinate();
	double get_y_coordinate();
	double operator-(Point);	//Distance between 2 points
	bool operator==(Point);		//Checks if same points
	bool operator !=(Point);	//Checks if not same points
	Point operator/(Point);	//Finds Midpoint between 2 points

	Point operator*(double constant);

	double operator[](char coordinate_type);
};

