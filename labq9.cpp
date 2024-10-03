/*Construct a Program in C++ to show the working of function overloading (compile time polymorphism) by using a 
function named calculate Area () to calculate area of square, rectangle and triangle using different signatures as required
*/
#include <iostream>
#include <math.h>
using namespace std;
double Area(int n){
return n * n;}
double Area(int n, int m){
return n * m;}
double Area(int n, int m, int l){
double s = n + m + l;
s = s / 2;
s = (s * (s - n) * (s - m) * (s - l));
double ans = sqrt(s);
return ans;}
int main(){
cout << "Area of square=" << Area(7) << endl;
cout << "Area of rectangle=" << Area(3, 8) << endl;
cout << "Area of triangle=" << Area(2, 2, 2) << endl;
return 0;
}
