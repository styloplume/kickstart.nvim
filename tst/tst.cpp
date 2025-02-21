#include <array>
#include <cstdio>
#include <iostream>
#include <vector>

class A
{
public:
  A();
  ~A();

private:
  int a;
  bool b;
  void *p;
};

A::A() : a(0), b(false), p(NULL) { a = 1; }

A::~A() {}

// Anything else ?

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
