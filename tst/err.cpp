// This is a testbed c++ source file to figure out a good set of rules for
// clang-format, the super cool auto-formatter from LLVM.

// includes are automatically sorted
#include <array>
#include <iostream>

// Definition blocks are separated
class Example
{
public:
  Example();
  ~Example();

public:
  void Method();          // so
  void Method(int);       // this
  void Method(void *);    // is
  // a
private:       // thing
  int _a;      // ?
  void *_p;    // kinda cool
};

// Assignments are aligned
int z    = 0;
float x  = -2.;
double c = 300;
void *v  = NULL;
// But not through empty lines or comments
bool ultimate_test = false;
char b[15];

template <int i> void a() { a<i + 1>(); }

void foo() { a<0>(); }

int main()
{
  std::cout << "Ok\n";
  std::cout << "Hello clangd\n";
  std::array<int, 3> my_array;

  char a[10];
  a[10] = 0;

  // Single line ifs are allowed
  if (1) std::cout << "Hurra!\n";

  if (0)    // however
  {
    std::cout << "then\n";
    int var = 10;
  }

  void *ptr = NULL;

  for (int idx = 0; idx <= 10; idx++)
  {
    std::cout << idx << std::endl;
  }

  return 0;
}

// So here we are
// playing with comments.
