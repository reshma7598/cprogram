# include <stdio.h>
int main() {
    // Multiple process
    int num1,num2,choice,result;
    printf("Enter 2 numbers");
    scanf("%d%d",&num1,&num2);
    printf("1 for addition \n2 for substration \n3 for multiplication \n4 for divition \n Enter your choice");
    scanf("%d",&choice);
    if(choice==1){
        result=num1+num2;
    }else if(choice==2){
        result=num1-num2;
    }else if (choice==3){
        result=num1*num2;
    }else if (choice==4){
        result=num1/num2;
    }else{
        printf("fool!!!");
    }
    printf("Result=%d",result);
    return 0;
}