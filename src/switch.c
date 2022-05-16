#include <stdio.h>

int main() {
  int x;
  scanf("%d",&x);

  switch(x){
    case 1:
      printf("1");
    case 2:
      printf("2");
    case 3:
      printf("3");
    default:
    printf("error");
  }
}
