#include <stdio.h>

int recursive(int num){
  if(num<=0)
    return 0;
  printf("%d", num);
  recursive(num-1);
};

int main() {
  recursive(5);
  return 0;
}

// 54321
