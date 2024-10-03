/*Create a class Complex having two int type variable named real & img denoting real and imaginary part respectively of 
a complex number. Overload +, - , == operator to add, to subtract and to compare two complex
numbers being denoted by the two complex type objects*/
#include <iostream>
using namespace std;
class Complex {
public:
int real;
int img;
Complex(int r = 0, int i = 0) : real(r), img(i) {}
Complex operator+( Complex& other) {
return Complex(real + other.real, img + other.img);
}
Complex operator-( Complex& other) {
return Complex(real - other.real, img - other.img);
}
bool operator==( Complex& other) {
return (real == other.real) && (img == other.img);
}
void display() const {
cout << real << " + " << img << "i" << endl;
}
};
int main() {
Complex c1(4, 2);
Complex c2(3, 8);
Complex sum = c1 + c2;
Complex difference = c1 - c2;
cout << "Sum: ";
sum.display();
cout << "Difference: ";
difference.display();
if (c1 == c2) {
cout << "c1 is equal to c2." << endl;
} else {
cout << "c1 is not equal to c2." << endl;
}
return 0;
}
