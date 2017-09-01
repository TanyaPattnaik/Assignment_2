#include <iostream>
#include <cmath>
using namespace std;
int main(){
double p,t,r,ci,amt;
cout << "Enter Principal, Time in years and rate per annum\n";
cin >> p >> t >> r;
amt=p*(pow((1.0+(r/100.0)),t));
ci=amt-p;
cout << "Compound interest is "<< ci << "\n";
return 0;
}
