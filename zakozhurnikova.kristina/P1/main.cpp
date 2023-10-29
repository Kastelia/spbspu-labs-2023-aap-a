#include <iostream>
#include <limits>
int main ()
{
  int number = 0;
  size_t count = 0;
  int max = 0;
  int i = 0;
  do
  {
    std::cin >> number;
    if (i<1)
    {
      max = number - 1;
      i = 1;
    }
    if (!std::cin)
    {
      std::cerr << "Is not sequence\n";
      return 1;
    }
     else if (number != 0)
     {
       size_t max_size = std::numeric_limits< size_t >::max();
       if (count == max_size)
       {
         std::cerr << "Sequence is too long\n";
         return 2;
       }
       else if (number > max)
       {
         count = 0;
         max = number;
       }
       else
       {
         ++count;
       }
     }
  }
  while (number != 0);
  std::cout << count << "\n";
}