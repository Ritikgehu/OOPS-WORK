/*Anna is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored 
higher than her in the exams given during this semester. Create a class named Student with the following specifications:
An instance variable named scores holds a student's 5 exam scores.
A void input () function reads 5 integers and saves them to scores.
An int calculateTotalScore() function that returns the sum of the student's scores.*/
#include <iostream>
using namespace std;
class Student {
private:
int scores[5];
public:
void input() {
for (int i = 0; i < 5; i++) {
cin >> scores[i];
}
}
int calculateTotalScore() const {
int total = 0;
for (int i = 0; i < 5; i++) {
total += scores[i];
}
return total;
}
};
int main() {
int n;
cout << "Enter number of students: ";
cin >> n;
Student* students = new Student[n];
for (int i = 0; i < n; i++) {
cout << "Enter scores for student " << (i + 1) << ": ";
students[i].input();}
Student anna;
cout << "Enter Anna's scores: ";
anna.input();
int anna_total_score = anna.calculateTotalScore();
int higher_count = 0;
for (int i = 0; i < n; i++) {
if (students[i].calculateTotalScore() > anna_total_score) {
higher_count++;}}
cout << higher_count << endl;
delete[] students;
return 0;
}
