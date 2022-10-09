#include<math.h>


double angle_at_chowk (int a1,int b1,int a2,int b2)
{
    double radian;
    radian=atan(abs((a2*b1-a1*b2)/(a1*a2+b1*b2)));
    return (180/3.14)*radian;
}

double find_distance(float lon1,float lat1,float lon2,float lat2)
{
    double distance;
    lat1=lat1*(180/3.14);
    lat2=lat2*(180/3.14);
    lon1=lon1*(180/3.14);
    lon2=lon2*(180/3.14);
    distance=(double) 6378.1 * acos((sin(lat1) * sin(lat2)) + cos(lat1) * cos(lat2) * cos(lon2 - lon1));
    return distance;
}

double find_area(float x1,float y1,float x2,float y2,float x3,float y3)
{
    double area;
    area=(double)0.5*abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    return area;
}