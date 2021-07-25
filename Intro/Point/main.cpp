#include "Point.h"

//#define STRUCT_POINT

void main()
{
#ifdef STRUCT_POINT
	Point A;

	A.x;
	A.y;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUCT_POINT

	Point A;

	cout << A.GetX() << "\t" << A.GetY() << endl; 

} 