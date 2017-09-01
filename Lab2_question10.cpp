#include <iostream>
using namespace std;
int main(){
double m1,m2,m3,m4,m5,fm,tot,avg,per;
cout <<"Enter marks of 5 subjects\n";
cin >> m1 >> m2 >> m3 >> m4 >> m5;
cout <<"Enter maximum marks per  subject\n";
cin >> fm;
tot=m1+m2+m3+m4+m5;
avg=tot/5.0;
per=(tot/(fm*5.0))*100.0;
cout <<"The total marks="<< tot <<"\n";
cout <<"The average marks is "<< avg <<"\n";
cout <<"Percentage obtained is "<< per <<"\n";
return 0;
}
