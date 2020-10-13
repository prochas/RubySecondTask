#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    long double a, a1, n=1, test, test1=1;

    while (test1>0.00001)
    {
        a=(n+1)/(sqrt((n+1)*(n+1)+1)*sqrt((n+1)*(n+1)-1));

        a1=(n+1+1)/(sqrt((n+1+1)*(n+1+1)+1)*sqrt((n+1+1)*(n+1+1)-1));

        test=a1-a;
        test1=abs(test);

        n++;
    }

    cout << a1 << endl;

    return 0;
}
