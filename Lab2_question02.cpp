#include <iostream>
using namespace std;
int main()
{
double ctemp,ftemp;
cout << "Enter temperature in celsius\n";
cin >> ctemp;
ftemp=(ctemp*((double)9/5))+32;
cout << "The temperature in fahreinheit is "<< ftemp <<"\n";
return 0;
}
