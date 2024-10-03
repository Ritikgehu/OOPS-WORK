/*You are given an array of elements. Now you need to choose the best index of this array. An index of the array is called best if the 
special sum of this index is maximum across the special sum of all the other indices. To calculate the special sum for any index you 
pick the first element that is and add it to your sum. Now you pick next two elements i.e., and and add both of them to your sum. 
Now you will pick the next elements, and this continues
till the index for which it is possible to pick the elements. Find the best index and in the output print its corresponding special sum. 
Note that there may be more than one best index, but you need to only print the maximum special sum.
*/
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"enter the number of elements=";
cin >> n;
int arr[1000];
cout<<"array=";
for (int i = 0; i < n; ++i) {
cin >> arr[i];
}
int maxSpecialSum = 0;
for (int i = 0; i < n; ++i) {
int sum = 0;
int count = 1;
for (int j = i; j < n;) {
if (j + count <= n) {
for (int k = 0; k < count; ++k) {
sum += arr[j + k];
}
j += count;
count++;
} else {
break;
}
}
if (sum > maxSpecialSum) {
maxSpecialSum = sum;
}
}
cout <<"MAX SPECIAL SUM="<<maxSpecialSum << endl;
return 0;
}
