#include <iostream>
using namespace std;
int main()
{
int d,r,y,w;
cout << "Enter number of days\n";
cin >> d;
y=d/365;
r=d%365;
w=r/7;
r=r%7;
cout << d <<" days is "<< y <<" year(s) "<< w <<" week(s) and "<< r <<" day(s).\n";
return 0;
}
