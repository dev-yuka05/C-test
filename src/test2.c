#include <stdio.h>

int num(int x, int y);

int main() {
  printf("%d", num(10,20) + num(15,11));
}

int num(int x, int y){
  if(x>y)
    return x;
  else
    return y;
}

// 35
