//7. Calculate electricity bill:
#include <iostream>
using namespace std;
int main() {
 int units;
 float bill;
 cout << "Enter units consumed: ";
 cin >> units;
 if (units <= 100) {
 bill = units * 5;
 } else if (units <= 300) {
 bill = (100 * 5) + ((units - 100) * 7);
 } else {
 bill = (100 * 5) + (200 * 7) + ((units - 300) * 10);
 }
 cout << "The total electricity bill is" << bill << endl;
 return 0;
}
