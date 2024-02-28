#include <stdio.h>

int findMax(int arr[],int size){
    int Max=arr[0];
    for(int i=1;i<size;i++){
        if (arr[i]>Max){
        Max=arr[i];
    }
}
return Max;
};
int main(){
    int arr[]={1,2,3,4,5,55};
int size= sizeof (arr) /sizeof(arr[0]);
int Maxelement=findMax(arr,size);
printf("maximun size of element :%d\n",Maxelement);
return 0;
}