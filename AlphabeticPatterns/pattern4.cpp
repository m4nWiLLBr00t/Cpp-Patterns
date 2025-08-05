#include <iostream>

// if num  = 6
// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F
int main()
{
  int num;
  // char alphabet = 'A';
  std::cout << "Enter a number between(1-26): ";
  std::cin >> num;

  if (num >= 1 && num <= 26)
  {
    for (int rows = 1; rows <= num; rows++)
    {
      char alphabet = 'A';
      for (int cols = 1; cols <= rows; cols++)
      {
        std::cout << alphabet << " ";
        alphabet++;
      }
      std::cout << std::endl;
    }
  }
  else
  {
    std::cout << "Enter a number between(1-26) only";
  }
  return 0;
}
