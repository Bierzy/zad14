#include "point.h"

float
pole(struct POINT p1, struct POINT p2, struct POINT p3)
{
	/*
	 * Fuction computes area of the triangle.
	 */

	float area = 0;

	area += p1.x * p2.y - p2.x * p1.y;
	area += p2.x * p3.y - p3.x * p2.y;
	area += p3.x * p1.y - p1.x * p3.y;

	return (area / 2);
}
