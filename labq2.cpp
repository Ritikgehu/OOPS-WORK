/* Q2.Construct a C++ program that removes a specific character from a given string and return the updated string.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
char ch;
string str;
cout<<"enter string"<<endl;
getline(cin,str);
int l=str.length();
cout<<"enter character to remove"<<endl;
cin>>ch;
int i,j;
for(i=0;str[i]!='\0';i++)
{
if(str[i]==ch){
 for(j=i;j<l;j++){
 str[j]=str[j+1];
 }
 l--;
}
}
str.resize(l);
cout<<str;
return 0;
}

