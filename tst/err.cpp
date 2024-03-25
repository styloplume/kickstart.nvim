#include <array>
#include <iostream>

template <int i>
void
a ()
{
  a<i + 1> ();
}

void
foo ()
{
  a<0> ();
}

int
main ()
{
  std::cout << "Ok\n";
  std::cout << "Hello clangd\n";
  std::array<int, 3> my_array;

  char a[10];
  a[10] = 0;

  return 0;
}
