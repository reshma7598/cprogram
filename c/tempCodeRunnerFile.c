# include <stdio.h>
int sum(int i);
int main() {
int result = sum (100);
printf("%d", result);
return 0;
}
int sum(int i){    // function
  if (i > 0) {
    return i + sum (i - 1);
  }else{
    return 0;
  }
}