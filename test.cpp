// clangd should also auto add includes but it doesn't work yet, not sure why

template <int i>
void a() {
  a<i + 1>();
}

void foo() {
  a<0>();
}

int main()
{
  std::cout << "Hello world!\n";

  char a[10];
  a[10] = 0;
  
  return 0;
  }
// Also, formatting doesn't do anything to that last curly brace.

