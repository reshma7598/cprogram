// // triangle

// #include <stdio.h>

// int main() {
//   int size = 5;
//   for (int i = 0; i < size; i++) {
//     for (int j = 1; j < size-i+1; j++) {
//       printf("1 ");
//     }
//     printf("\n");
//   }
//   return 0;
// }


//character triangle

#include<stdio.h>
int main(){
  int size=5;
  for(int i=0;i<size;i++){
    for(int j=0;j<=i;j++){
      printf("%c",'A'+j);
    }
    printf("\n");
  }
  return 0;
}