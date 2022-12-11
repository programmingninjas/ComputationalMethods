#include<bits/stdc++.h>
using namespace std;

//x^{2}+x-1
double f(double x)//function
{
    return x*x*x - 4*x - 9; 
}
int main()
{
    double L = 2;
    double R = 3;//range
    double M = (L+R)/2;
    int iterations = 20;
    while(iterations--)
    {
        M = (L+R)/2;
        if(f(L) * f(M)  < 0)//root is b/w (L,M)
        {
            R = M;
        }
        else//root is b/w (M,R) 
        {
            L = M;
        }
    }
    cout<<M;
}