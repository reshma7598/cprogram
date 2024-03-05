#include<stdio.h>
#include<limits.h>

#define MAX 10;
int arr[MAX];
int top=-1;
void push(int val){
    if (top==MAX-1){
printf("stack is full \n");
return;
    }
top++;
arr[top]=val;
}
int pop(){
    if (top==-1){
        printf("stack is empty \n");
        return INT_MIN;
    }
    return arr[top--];
}
void peek(){
    if (top==-1){
  printf("stack is empty \n");
  return INT_MIN;
    }
    return arr[top];
}
void display(){
    if (top==-1){
        printf("stack is empty \n");
        return;
    }
    printf("stack elements :");
    for(int i=0;i<=top;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    push(5);
    push(7);
    push(8);
    display();
    printf("popped %d\n",pop());
    display();
    return 0;
}