#include <iostream>
using namespace std;

int main() {
   int num, fib1 = 0, fib2 = 1, fib3 = 1;

   cout << "Digite um número inteiro positivo: ";
   cin >> num;

   while (fib3 < num) {
      fib3 = fib1 + fib2;
      fib1 = fib2;
      fib2 = fib3;
   }

   if (fib3 == num) {
      cout << num << " pertence a sequencia de Fibonacci.\n";
   } else {
      cout << num << " nao pertence a sequencia de Fibonacci.\n";
   }

   return 0;
}
