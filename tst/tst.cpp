// SortIncludes: true|false
// There are more options to preserve include blocks or not.
#include <array>
#include <iostream>


// Use of AllowShortFunctionsOnSingleLine is a problem to debug inline functions
// so let's avoid id.
inline void InlineMethod(bool b)
{
  std::cout << bool << std::endl;
}

// PackConstructorInitializers: Never
Example::Example()
: _a(0),
  _p(NULL),
  _f(0.),
  _d(0.)
{
}

// AllowShortFunctionsOnASingleLine to allow one-liners
Example::~Example()
{
}

// Longer things are not packed
void Example::Method()
{
  int unused_var = 0, uninitialized_var;
  std::cout << __FUNCTION__ << std::endl;
}

// One-liners
void Example::Method(int input)
{
  std::cout << input << std::endl;
}

// Testing args alignment : can't seem to get it working...
void Example::Method(int iIntegerrrrrrrr, void *iPointerrrrrrrrr,
                     double iDoubleeeeeeee)
{
}

// By the way, use ColumnLimit to define a max width.

// Assignments are aligned
int    z = 0;
float  x = -2.;
double c = 300;
void  *v = NULL;
// But not through empty lines or comments
bool ultimate_test = false;
char b[15];

template <int i>
void a()
{
  a<i + 1>();
}

void foo()
{
  a<0>();
}

int main()
{
  std::cout << "Ok\n";
  std::cout << "Hello clangd\n";
  std::array<int, 3> my_array;

  char a[10];
  a[10] = 0;

  // Single line ifs are allowed
  if (1)
    std::cout << "Hurra!\n";

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
