//18. Print the Fibonacci series up to n terms using a for loop:
#include <iostream>
using namespace std;
int main() {
 int n, a = 0, b = 1, next;
 cout << "Enter the number of terms: ";
 cin >> n;
 cout << "Fibonacci series: ";
 for (int i = 1; i <= n; i++) {
 cout << a << " ";
 next = a + b;
 a = b;
 b = next;
 }
 cout << endl;
 return 0;
}
