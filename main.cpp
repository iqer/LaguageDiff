#include <iostream>

using namespace std;

int main() {
  int height = 8;
  int length = 12;
  int width = 10;

  int volume = height * length * width;

  int weight = (volume + 165) / 166;

  std::printf("height: %d, length: %d, width: %d\n", height, length, width);

  std::printf("weight: %d\n", weight);
}
