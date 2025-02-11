//19. Sum of even numbers between 1 and 50 using a for loop:
#include <iostream>
using namespace std;
int main() {
 int sum = 0;
 for (int i = 2; i <= 50; i += 2) {
 sum += i;
 }
 cout << "The sum of even numbers between 1 and 50 is " << sum <<
endl;
 return 0;
}
