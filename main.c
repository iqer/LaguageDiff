#include <stdio.h>
int main() {
  int height = 8, length = 12, width = 10;
  int volume = height * length * width;
  printf("尺寸 height: %d, length: %d, width: %d\n", height, length, width);
  printf("体积: %d\n", volume);

  int weight = (volume + 165) / 166;
  printf("weight: %d\n", weight);

  return 0;
}
