// Lagrange's Interpolation to find a polynomial from random data points
// Gen formula = f(x) = (x-x1)(x-x2)...(x-xn)           (x-x0)(x-x2)...(x-xn)
//                      ---------------------  *y0  +   ---------------------  *y1 +  ...till n
//                     (x0-x1)(x0-x2)...(x0-xn)        (x1-x0)(x1-x2)...(x1-xn)

// Time Complexity = O(n^2)

#include <stdio.h>

int main() {
    // X[n] is n values of x in an array like [x0,x1,x2.....xn]
    // Y[n] is n values of y in an array like [y0,y1,y2.....yn]
    // p = [(x-x1)(x-x2)...(x-xn)]/[(x0-x1)(x0-x2)...(x0-xn)] {for i=1}
    // xp is the interpolation point
    // yp is the interpolation value
	
    // Filling x and y arrays with data points
    float x[10],y[10],p,xp,yp=0;
    int n;
    printf("Enter number of data points: ");
    scanf("%d",&n);
    for (int i=0;n>i;i++){
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
    }
    printf("Enter interpolation point: "); // Point at which we need to find value of the unknown function
    scanf("%f",&xp);
    // Iterating complete terms(of one factors*y value) till n
    for(int i=0;n>i;i++){
        p=1;
	// Iterating p(all factors for one x value) till n
        for(int j=0;n>j;j++){
            if (i!=j){
                p = p*(xp-x[j])/(x[i]-x[j]);
            }
        }
        yp = yp + p*y[i];
    }
    printf("Interpolated value at %.2f is %.2f.", xp, yp);
    return 0;
}
