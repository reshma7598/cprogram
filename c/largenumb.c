# include <stdio.h>

int main() {
    // greatest number
int numb1,numb2;
    printf("Enter 2 numbers");
    scanf("%d%d",&numb1,&numb2);
    if(numb1>numb2){
        printf("Greatest number is %d", numb1);
    }else{
        printf("Greatest number is %d", numb2);
    }
    return 0;
    }