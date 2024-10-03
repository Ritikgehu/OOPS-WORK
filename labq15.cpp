/*Using the concept of operator overloading. Implement a program to overload the following:
a. Unary –
b. Unary ++ preincrement, postincrement 
c. Unary -- predecrement, postdecrement */
#include <iostream>
using namespace std;
class overloading{
private:
int a, b;
public:
overloading(int a, int b){
this->a = a;
this->b = b;}
void operator-(){
a=-a;
b=-b;}
void operator++(){
a++;
b++;}
void operator++(int noUse){
a++;
b++;}
void operator--(){
a--;
b--;}
void operator--(int noUse){
a--;
b--;}
void show(){
cout << "a=" << a << " b=" << b << endl;
}
};
int main()
{
overloading obj(3,6);
obj.show();
-obj;
obj.show();
--obj;
obj.show();
obj--;
obj.show();
++obj;
obj.show();
obj++;
obj.show();
return 0;
}
