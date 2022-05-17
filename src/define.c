#include <stdio.h>
# define k 5

int main() {
  int n = 0;
  int b[k]={1,0,1,1,0}, temp;
  int i, j;

  printf("%d", temp);
  
  for(i=0; i<k; i++){
    temp = 1;
    for(j=1; j<=k-1-i; j++){
      temp = temp*2;
    }
    n = n + temp* b[i];
  }
  printf("%d", n);
}

// 22
