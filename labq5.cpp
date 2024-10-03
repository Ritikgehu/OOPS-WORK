/*Implement a C++ program to demonstrate the concept of data abstraction using the concept of Class and Objects.
*/
#include <iostream>
#include <sstream>
using namespace std;
class student
{
private:
string name;
int roll;
int std_id;
public:
void getdata()
{
cout << "Enter Name =";
getline(cin, name);
cout << "Enter Roll No =";
cin >> roll;
cout << "Enter Student id=";
cin >> std_id;
}
void display();
};
void student::display()
{
cout << "Details of Student=" << endl;
cout << "Name =" << name << endl;
cout << "Roll=" << roll << endl;
cout << "Student id=" << std_id << endl;
}
int main()
{
student s1;
s1.getdata();
s1.display();
return 0;
}
