#include <iostream>

int main() {
  std::cout << "Enter two numbers" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1;
  std::cout << " and " << v2 << " is ";
  std::cout << v1 + v2 << std::endl;
  return 0;
}
