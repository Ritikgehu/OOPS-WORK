/*Create class SavingsAccount. Use a static variable annualInterestRate to store the annual interest rate for all account 
holders. Each object of the class contains a private instance variable savingsBalance indicating the amount the saver 
currently has on deposit. Provide method calculateMonthlyInterest() to calculate the monthly interest by multiplying the 
savingsBalance by annualInterestRate divided by 12.This interest should be added to savingsBalance. 
Provide a static method modifyInterestRate() that sets the annualInterestRate to a new value. Write a program to test 
class SavingsAccount. Instantiate two savings Account objects, saver1 and saver2, with balances of Rs2000.00 and 
Rs3000.00, respectively. Set annualInterestRate to 4%, then calculate the monthly interest and print the new balances 
for both savers. Then set the annualInterestRate to 5%, calculate the next month’s interest and print the new balances 
for both savers.*/
#include <stdio.h>
using namespace std;
class SavingsAccount {
private:
static float annualInterestRate;
float savingsBalance;
public:
SavingsAccount(float balance) {
savingsBalance=balance;}
void calculateMonthlyInterest(){
float monthlyInterest = savingsBalance*(annualInterestRate/12);
savingsBalance+=monthlyInterest;}
static void modifyInterestRate(float newRate) {
annualInterestRate=newRate;}
float getBalance() const{
return savingsBalance; }};
float SavingsAccount::annualInterestRate = 0.0;
int main() {
SavingsAccount saver1(6000.00);
SavingsAccount saver2(2000.00);
printf("Saver 1=%f\n", saver1.getBalance());
printf("Saver 2=%f\n", saver2.getBalance());
SavingsAccount::modifyInterestRate(0.04);
saver1.calculateMonthlyInterest();
saver2.calculateMonthlyInterest();
printf("Saver 1=%f\n", saver1.getBalance());
printf("Saver 2=%f\n", saver2.getBalance());
SavingsAccount::modifyInterestRate(0.05);
saver1.calculateMonthlyInterest();
saver2.calculateMonthlyInterest();
printf("Saver 1=%f\n", saver1.getBalance());
printf("Saver 2=%f\n", saver2.getBalance());
return 0;
}
