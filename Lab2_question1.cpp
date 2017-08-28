#include <iostream>
using namespace std;
int main()
{
double l,lm,lkm;
cout << "Enter length in centimetre\n";
cin >> l;
lm=l/100;
lkm=l/100000;
cout << "Length in metre=" << lm << "\n";
cout << "Length in kilometre=" << lkm << "\n";
return 0;
}
