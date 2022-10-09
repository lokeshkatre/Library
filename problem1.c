#include "Library.h"
#include<stdio.h>
// Suppose there are two roads,
// Road 1: ABC Road, represented by equation 5x + y - 3 = 0
// Road 2: XYZ Road, represented by equation 2x + 3y + 1 = 0
// These two roads meet each other at a chowk, called 123 Chowk.
// Determine at which angle , these two roads meet each other at chowk.
// What you have to do :
// Create a Program which determines angle at which these roads meet at 123 Chowk.
int main()
{
   double angle=angle_at_chowk(5,1,2,3);
   printf("Angle between roads are %.2lf degree",angle);
   return 0;

}