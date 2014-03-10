double perimeter(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double rez=0;
	rez += sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	rez += sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	rez += sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
	return rez;
}