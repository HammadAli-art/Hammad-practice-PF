//4. Determine the grade based on marks using multiple if-else:
#include <iostream>
using namespace std;
int main() {
 int marks;
 cout << "Enter marks: ";
 cin >> marks;
 if (marks >= 90) {
 cout << "Grade A" << endl;
 } else if (marks >= 80) {
 cout << "Grade B" << endl;
 } else if (marks >= 70) {
 cout << "Grade C" << endl;
 } else if (marks >= 60) {
 cout << "Grade D" << endl;
 } else {
 cout << "Fail" << endl;
 }
 return 0;
}
