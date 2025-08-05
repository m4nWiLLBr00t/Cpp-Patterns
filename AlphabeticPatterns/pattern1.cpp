#include <iostream>

// if num = 6
// A A A A A A
// B B B B B B
// C C C C C C
// D D D D D D
// E E E E E E
// F F F F F F

int main()
{
  int num;
  char alphabet = 'A';
  std::cout << "Enter a number between(1-26): ";
  std::cin >> num;

  if (num >= 1 && num <= 26)
  {
    for (int rows = 1; rows <= num; rows++)
    {
      for (int cols = 1; cols <= num; cols++)
      {
        std::cout << char(alphabet + rows - 1) << " ";
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
