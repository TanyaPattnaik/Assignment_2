#include <iostream>
using namespace std;
int main()
{
double ctemp,ftemp;
cout << "Enter temperature in fahrenheit\n";
cin >> ftemp;
ctemp=(ftemp-32)*((double)5/9);
cout << "The temperature in celsius is "<< ctemp <<"\n";
return 0;
}
