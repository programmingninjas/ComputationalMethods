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

    float x[n+1];//array to store the interval values
    
    float curr = low;
    for(int i = 0 ; i <= n ; i++)//seting intervals to array
    {
        x[i] = curr;
        curr += h;
    }

    float ans = 0;//final answer

    ans += f(x[0]);//add first term

    for(int i = 1 ; i < n ; i++)
    {
        if(i % 2)ans += 2*f(x[i]);
        else ans += 4*f(x[i]);
    }

    ans += f(x[n]);//add last term

    ans *= h/3;//multiplier

    cout<<ans;
}