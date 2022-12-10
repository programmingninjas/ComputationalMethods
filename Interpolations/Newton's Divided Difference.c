// Newton's divided difference Interpolation to find a polynomial from random data points
#include <stdio.h>

int main() {
    // X[n] is n values of x in an array like [x0,x1,x2.....xn]
    // Y[n] is n values of y in an array like [y0,y1,y2.....yn]
    // p = factors for a term
    // xp is the interpolation point
    // yp is the interpolation value
    // d[] is to store divided difference and upadting y with new values of d
    
    float x[10],y[10],p,xp,yp=0,d[10];
    int n;
    printf("Enter number of data points: ");
    scanf("%d",&n);
    for (int i=0;n>i;i++){
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
    }
    
    printf("Enter interpolation point: ");
    scanf("%f",&xp);
    yp = y[0];
    int j=1;
    do {
    // Calculating divided difference
    for(int i=0;n>i;i++){
        d[i] = (y[i+1]-y[i])/(x[i+j]-x[i]);
        y[i] = d[i];
        }
    p=1;
    // Calculating factors
    for(int i=0;i<j;i++){
        p = p*(xp-x[i]);
        }
    yp = yp + p*y[0]; // factors*divided difference
    n--;j++;
    } while (n!=1);
    printf("Interpolated value at %.2f is %.2f", xp, yp);
    return 0;
}