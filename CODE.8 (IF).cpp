//8. Check if a number is a multiple of both 3 and 5:
#include <iostream>
using namespace std;
int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 if (num % 3 == 0 && num % 5 == 0) {
 cout << num << " is a multiple of both 3 and 5." << endl;
 }
 return 0;
}
