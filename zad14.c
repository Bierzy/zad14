#include <stdio.h>
#include "point.h"

int
main()
{
	struct POINT p1, p2, p3;

	p1.x = 0;
	p1.y = 0;
	p2.x = 1;
	p2.y = 0;
	p3.x = 0;
	p3.y = 1;

	printf("%f  %f\n", pole(p1, p2, p3), obwod(p1, p2, p3));

	return (0);
}
