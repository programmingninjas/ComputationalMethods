#include<bits/stdc++.h>
using namespace std;

//x^{2}+x-1
float f(float x)//function
{
    return x*x*x - 4*x - 9;
}
int main()
{
    float x1 = 2;
    float x2 = 3;
    float x3;

    int iterations = 10;

    float threshold = .00001;

    while(iterations--)
    {
        x3 = x2 - (f(x2)*(x2-x1))/(f(x2)-f(x1));

        x1 = x2;
        x2 = x3;

        if(abs(x2-x1) < threshold)
        {
            break;
        }
    }

    cout<<x3<<endl;
}