/*
 * Point.h
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#ifndef POINT_H_
#define POINT_H_

#include <math.h>

using namespace std;

class Point {
private:
	double xval, yval;
public:
	// Constructor uses default arguments to allow calling with zero, one,
	// or two values.
	Point(double x = 0.0, double y = 0.0) {
		xval = x;
		yval = y;
	}

	// Extractors.
	double getX() const {
		return xval;
	}

	double getY() const {
		return yval;
	}

	// Distance to another point.
	double dist(Point other) {
		double xd = xval - other.xval;
		double yd = yval - other.yval;
		return sqrt(xd * xd + yd * yd);
	}

	// Add or subtract two points.
	Point add(Point b) {
		return Point(xval + b.xval, yval + b.yval);
	}

	Point sub(Point b) {
		return Point(xval - b.xval, yval - b.yval);
	}

	// Move the existing point.
	void move(double a, double b) {
		xval += a;
		yval += b;
	}
};

#endif /* POINT_H_ */
