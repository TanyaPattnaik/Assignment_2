#include <iostream>
using namespace std;
int main()
{
int d,d2,y,w;
cout << "Enter number of days\n";
cin >> d;
d2=d;
y=d/365;
d=d-(y*365);
w=d/7;
d=d-(w*7);
cout << d2 <<" days is "<< y <<" year(s) "<< w <<" week(s) and "<< d <<" day(s).\n";
return 0;
}
