#include <array>
#include <cstdio>
#include <iostream>
#include <vector>

int main()
{
  std::cout << "Hello there\n";
  std::array<int, 3> array;

  std::vector<int> my_vec;

  int i = 1;
  return 0;
}

void test(int i) { printf("%d\n", i); }
void test(double d)
{
  printf("%f\n", d);
  std::cout << "ok" << std::endl;
}

void test(float f)
{
  int a = 0;
  std::cout << "hey\n";
  // why is : removing indentation ?
}
