#include <iostream>

using namespace std;

struct produs
{ char denumire[20];
 int pret;
}p;

char a;

int main()
{
    cin >> p.denumire >> p.pret;
    if(p.pret>100) a=p.denumire[0]; else a='*';
    cout << a;
}