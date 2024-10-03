/*Using the concept of operator overloading. Implement a program to overload the following: With the help of friend 
function
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement */
#include <iostream>
using namespace std;
class overloading
{
private:
int a, b;
public:
overloading(int a, int b)
{
this->a = a;
this->b = b;
}
friend void operator-(overloading &obj);
friend void operator++(overloading &obj);
friend void operator--(overloading &obj);
friend void operator++(overloading &obj, int);
friend void operator--(overloading &obj, int);
void show()
{
cout << "a=" << a << " b=" << b << endl;
}
};
void operator-(overloading &obj)
{
obj.a=-obj.a;
obj.b=-obj.b;
}
void operator++(overloading &obj)
{
obj.a++;
obj.b++;
}
void operator--(overloading &obj)
{
obj.a--;
obj.b--;
}
void operator++(overloading &obj, int noUse)
{
obj.a++;
obj.b++;
}
void operator--(overloading &obj, int noUse)
{
obj.a--;
obj.b--;
}
int main()
{
overloading obj(5, 7);
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
