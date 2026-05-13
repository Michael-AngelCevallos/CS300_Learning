

#include <iostream>
using namespace std;

int fibonacciSeq(int termIndex)
{
   if (termIndex == 0)
   {
      return 0;
   }
   else if (termIndex == 1)
   {
      return 1;
   }
   else
   {
      return fibonacciSeq(termIndex - 1) + fibonacciSeq(termIndex - 2);
   }
}

int main()
{
   cout << fibonacciSeq(4) << endl;
}
