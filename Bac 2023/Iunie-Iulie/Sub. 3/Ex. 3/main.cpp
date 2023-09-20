#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("bac.txt");
    int rezultate[200]={0}; ///      PRIMELE|ULTIMELE
    int n=0, tmp, tmp2, tmp3, i=0;
    while(fin >> tmp)
    {
        if(tmp>100)
        {
            tmp2=tmp%100;
            tmp3=tmp2+100;
            rezultate[tmp3]++;
            while(tmp>99)
                tmp/=10;
            rezultate[tmp]++;
        }
        n++;

    }
    for(i=10; i<100; i++)
        {
        if(rezultate[i]!=0 && rezultate[i]==rezultate[i+100])
            cout << i << " ";
    }

}