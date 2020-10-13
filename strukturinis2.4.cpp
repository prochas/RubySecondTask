#include <iostream>

using namespace std;

int main ()
{
    long long a, s, atb1, atb2, kvad, sk, kiekis;
    sk=1;
    kiekis=1;
    while (kiekis<=30)
    {
        a=sk;
        kvad=a*a;
        atb1=0;
        atb2=0;

        while (a!=0) //atbulinis
        {
            s=a%10;
            atb1=atb1*10 + s;
            a=a/10;
        }

        while (kvad!=0) //kvadrato atbulinis
        {
            s=kvad%10;
            atb2=atb2*10+s;
            kvad=kvad/10;
        }

        if (atb1==sk && atb2==sk*sk)
        {
            cout<< " Nr. " << kiekis << " | " <<sk<<endl;
            kiekis++;
        }
        sk++;
    }
    return 0;
}
