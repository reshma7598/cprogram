// #include <stdio.h>

// int main() { 
//   int myNumbers[10] = {1,2,3,4,5,6,7,8,9,10};
//   int i;

//   for (i = 0; i < 10; i++) {
//     printf("%d\n", myNumbers[i]);
//   }

//   return 0;
// }




// recrusion


# include <stdio.h>
int sum(int i);    //declare
int main() {
int result = sum (25);
printf("%d", result);
return 0;
}
int sum(int i){ //deefine
  if (i > 0) {
    return i + sum (i - 1);
  }else{
    return 0;
  }
}