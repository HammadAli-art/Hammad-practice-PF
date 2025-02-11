//14. Print the factorial of a number using a while loop:
#include <iostream>
using namespace std;
int main() {
 int num;
 long long factorial = 1;
 cout << "Enter a number: ";
 cin >> num;
 if (num < 0) {
 cout << "Factorial of a negative number doesn't exist." << endl;
 } else {
 int i = 1;
 while (i <= num) {
 factorial *= i;
 i++; // Increment i
 }
 cout << "The factorial of " << num << " is " << factorial << endl;
 }
 return 0;
}
