#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265
int main(int argc, char *argv[]) {

double x, ret, value;
char *p= NULL;
double size= strtol(argv[1], &p,10);
double stepsize =  strtol(argv[2], &p, 10);

printf("Assignment 1-4, Abdiqani Ainab, ainab4072@yahoo.com \n");

int n;
double deg=0.0;
value=PI/180.0;

for(n=0; n<=size; n++) {
printf("%.2lf ", deg);
deg = deg + stepsize;
}
printf("\n");

deg= 0.0;

for(n=0; n<= size; n++){

double ret= cos(deg*value);
printf("%.2lf ", ret);

deg = deg + stepsize;
}
printf("\n");

return 0;

}

