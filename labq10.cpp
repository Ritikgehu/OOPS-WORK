/*Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store. An 
Invoice should include four pieces of information as instance.
Data Members -
• partNumber (type String)
• partDescription (type String)
• quantity of the item being purchased (type int)
• price_per_item (type double)
Your class should have a constructor that initializes the four instance variables. 
Provide a set and a get method for each instance variable. In addition, provide a method named getInvoiceAmount() 
that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then returns the amount as a double
value. If the quantity is not positive, it should
be set to 0. If the price per item is not positive,it should be set to0.0. Write a test application named invoiceTest that 
demonstrates class Invoice’s capabilities.*/
#include <iostream>
#include <string>
using namespace std;
class Invoice{
private:
string partNumber;
string partDescription;
int quantity;
double price_per_item;
public:
Invoice(string pNumber, string pDescription, int qty, double price){
partNumber = pNumber;
partDescription = pDescription;
setQuantity(qty);
setPricePerItem(price);}
void setPartNumber(string pNumber){
partNumber = pNumber;}
string getPartNumber(){
return partNumber; }
void setPartDescription(string pDescription){
partDescription = pDescription;}
string getPartDescription(){
return partDescription;}
void setQuantity(int qty){
if (qty > 0)
{
quantity = qty;
}
else
{
quantity = 0;
}
}
int getQuantity()
{
return quantity;
}
void setPricePerItem(double price)
{
if (price > 0.0)
{
price_per_item = price;
}
else
{
price_per_item = 0.0;
}
}
double getPricePerItem()
{
return price_per_item;
}
double getInvoiceAmount()
{
return quantity * price_per_item;
}
};
int main()
{
Invoice invoice("20", "RITIK",8, 30);
cout << "Part Number: " << invoice.getPartNumber() << endl;
cout << "Part Description: " << invoice.getPartDescription() << endl;
cout << "Quantity: " << invoice.getQuantity() << endl;
cout << "Price per Item: " << invoice.getPricePerItem() << endl;
cout << "Invoice Amount: " << invoice.getInvoiceAmount() << endl;
return 0;
}
