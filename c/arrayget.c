#include <stdio.h>
int main(){
    int a[5];
    int i,limit;
    printf("Enterd array limit");
    scanf("%d",&limit);
    printf("Enter a values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
}
printf("Enter values are:");
for(i=0;i<5;i++){
   printf("%d\t",a[i]);
}
return 0;
}