#include <iostream>
using namespace std;

float f(float x)//integration of f(x)dx
{
    return 1/(1+x*x);
}

int main()
{
    float low = 0;
    float high = 1;//limits

    int n = 100;//number of subIntervals
    float h = (high - low)/n;

    float ans = 0;//final answer

    ans += f(low);//add first term
    ans += f(high);//add last term

    for(int i = 1 ; i < n ; i++)
    {
        if(i % 2)ans += 2*f(low + i * h);
        else ans += 4*f(low + i * h);
    }

    ans *= h/3;//multiplier

    cout<<ans;
}