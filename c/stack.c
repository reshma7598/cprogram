#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int a[MAX];
int n;
void create(){
    printf("enter how many elements are enter : ");
    scanf("%d", &n);
printf("enter %d elements:\n",n);
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
}
void display(){
    printf("elements in the array are : ");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}
void insert(){
    int pos ,val;
    printf("enter the positon to insert: ");
    scanf("%d",&pos);
    if(pos<1||pos>n+1){
        printf("invalid position\n");
        return;
    }
    printf("enter the value insert:");
    scanf("%d",&val);
    pos =pos-1;
    for (int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=val;
    n=n+1;
    printf("entered element succesfully insert \n");
}
void delete(){
    int pos , val;
    printf("enter the position of elemnt to be deleted ");
    scanf("%d",&pos);
    if(pos<1||pos>n){
        printf("invalid position:\n");
        return;
    }
    pos =pos-1;
    val=a[pos];
    for(int i=pos;i<n;i++){
    a[i]=a[i+1];
}
n=n-1;
printf("delete the element is %d\n",val);
}
void search(){
    int key,flag=0;
    printf("enter the element to be searched :");
    scanf("%d",& key);
    for(int i=1;i<n;i++){
    if(a[i]==key){
        printf("the elemnet is present at position %d\n",i+1);
        flag=1;
        break;
    }
    }
    if(flag==0){
        printf("search element is not found\n");
}
}
int main(){
    int ch;
    while (1){
        printf("array operations \n");
        printf("1.create \n");
        printf("2.display \n");
        printf("3.insert \n");
        printf("4.delete \n");
        printf("5.search \n");
        printf("6.quit \n");
        printf("enter a choice :");
        scanf("%d",&ch);
        switch (ch){
        case 1:
        create ();
            break;
        case 2:
       display ();
            break;
            case 3:
        insert ();
            break;
        case 4:
       delete ();
            break;
         case 5:
       search ();
            break;
        case 6:
        exit(0);
            break;
        default:
        printf("invalid choice\n");
        }
    }
    return 0;
}