#include<stdio.h>
#include "Library.h"
// Looking at an above image, actually that image is zoomed up version of pdf file.
// As we see there is ‘A’ shaped character, it has three vertices which has coordinates
// Project 3: Problem Statement 3
// (20.077,
// 11.598) , (26.526, 90.138) , (23.674, 32.579).

// We have to cover the area under ‘A’ shaped character and colour it black.
// Calculate area under ‘A’ shaped character
void main(){
double area;

area = find_area(20.077,11.598,26.526,90.138,23.674,32.579);
printf("Area to be coloured black: %.2lf\n",area);
}