// # include<stdio.h>

// int main(){
//     int a= 5;
//     printf("%d",&a);
//     return 0;
// }



// # include<stdio.h>
// int main(){
//     int a=5;
//     int *b=&a;
//     printf("%d\n",&a);
//     printf("%d\n",b);
//     return 0;
// }

// functions

// # include <stdio.h>
// void hello(){  // function declsre
//     printf("hello");
// }
// int main(){
//     hello(); //function call
//     return  0;
// }

// function parametrs

// # include <stdio.h>
// void hello(int a,int b){ 
    
//    int c= a+b;
//    printf("%d",c);
// }
// int main(){
//     hello(5,6);   //argumnets 
//     return  0;
// }

// function definition

// # include <stdio.h>
// void hello() ;        //function declare
  
// int main(){
//     hello();               //function call
//     return  0;
// }
// void hello(){         //function define
//     printf("hello");
// }



 // functions declaration(addi,sub,multi,divi)


#include <stdio.h>

int myFunction(int x, int y) {
  return x * y;
}

int main() {  
  int result = myFunction( 18, 58); 
  printf("Result is = %d", result);
  return 0;
}