#include<bits/stdc++.h>
using namespace std;

//x^{2}+x-1
float f(float x)//function
{
    return x*x*x - 4*x - 9;
}
float df(float x)//function
{
    return 3*x*x - 4;
}
int main()
{
    float x = 2;

    int iterations = 10;

    while(iterations--)
    {
        x = x - f(x)/df(x);
    }

    cout<<x;
}