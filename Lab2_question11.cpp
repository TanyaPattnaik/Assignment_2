#include <iostream>
using namespace std;
int main(){
double p,t,r,si;
cout << "Enter Principal, Time in years and rate per annum\n";
cin >> p >> t >> r;
si=(p*t*r)/100.0;
cout << "Simple interest is "<< si << "\n";
return 0;
}
