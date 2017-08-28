#include <iostream>
using namespace std;
int main()
{
double a, b, c;
cout << "Enter two angles of a triangle in degrees\n";
cin >> a >> b;
c=180-(a+b);
cout << "The third angle is "<<c<<"\n";
return 0;
}
