#include <stdio.h>

int main() {
  int a=7, b=7, c;
  c= ++a + b++;
  printf("%d", c);
}

// 15 출력
