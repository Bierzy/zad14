#include "point.h"
#include <math.h>

float
obwod(struct POINT p1, struct POINT p2, struct POINT p3)
{
	float perimeter = 0;

	perimeter += sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	perimeter += sqrt(pow(p2.x - p3.x, 2) + pow(p2.y - p3.y, 2));
	perimeter += sqrt(pow(p3.x - p1.x, 2) + pow(p3.y - p1.y, 2));

	return (perimeter);
}
