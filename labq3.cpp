/* Q3.Implement a C++ program to find the non-repeating characters in string.*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
 string s;
 cout << "Enter a string: ";
 getline(cin, s);
 int count[26] = {0};
 int n = s.length();
 for (int i = 0; i < n; i++)
 {
 count[s[i] - 'a']++;
 }
 for (int i = 0; i < n; i++)
 {
 if (count[s[i] - 'a'] == 1)
 {
 cout << s[i] << " ";
 }
 }
 return 0;
}
