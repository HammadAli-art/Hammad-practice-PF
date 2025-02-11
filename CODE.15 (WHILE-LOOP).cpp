//15. Reverse a given number using a while loop:
#include <iostream>
using namespace std;
int main() {
 int num, reversed = 0;
 cout << "Enter a number: ";
 cin >> num;
 while (num != 0) {
 reversed = reversed * 10 + num % 10;
 num /= 10;
 }
 cout << "The reversed number is " << reversed << endl;
 return 0;
}
