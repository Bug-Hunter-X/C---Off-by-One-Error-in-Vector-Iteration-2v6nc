```cpp
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3, 4, 5};
  for (int i = 0; i <= vec.size(); ++i) { // Bug: <= should be < 
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}
```