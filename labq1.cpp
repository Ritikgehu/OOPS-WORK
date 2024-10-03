/* Q1.Write a C++ to calculate the electricity bill of a user according to the below criteria: Input: The program prompts the 
user to enter their name and the number of units consumed.
Charges Calculation: 
For the first 100 units, the charge is 60 paise per unit.
For the next 200 units, the charge is 80 paise per unit.
For units beyond 300, the charge is 90 paise per unit.
A minimum charge of Rs 50 is applied if the total charge is less than Rs 50.
If the charge exceeds Rs 300, a 15% surcharge is added.*/

#include <iostream>
using namespace std;
class bill
{
private:
 string name;
 int units;
 float cost;
public:
 void setName(string name)
 {
 this->name = name;
 }
 void setUnits(int units)
 {
 this->units = units;
 }
 void getBill()
 {
 int x = this->units;
 if (x <= 100)
 {
 this->cost = x * 60;
 }
 else if (x <= 300)
 {
 this->cost = 100 * 60 + (x - 100) * 80;
 }
 else
 {
 this->cost = 100 * 60 + 200 * 80 + (x - 300) * 90;
 }
 this->cost /= 100;
 if (this->cost < 50)
 {
 this->cost += 50;
 }
 if (this->cost > 300)
 {
 this->cost += 0.15 * this->cost;
 }
 }
 void output()
 {
 cout << "name: " << this->name << endl;
 cout << "no of units: " << this->units << endl;
 cout << "total bill: Rs " << this->cost << endl;
 }
};
int main()
{
 int n;
 cout << "enter number of users" << endl;
 cin >> n;
 bill c[n];
 for (int i = 0; i < n; i++)
 {
 string s;
 cout << "enter name:" << endl;
 cin >> s;
 int x;
 cout << "enter units:" << endl;
 cin >> x;
 c[i].setName(s);
 c[i].setUnits(x);
 c[i].getBill();
 }
 cout << "\nElectricity bill details:" << endl;
 for (int i = 0; i < n; i++)
 {
 c[i].output();
 }
}
