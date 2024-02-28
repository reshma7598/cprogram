#include<stdio.h>

int findmissNumb(int arr[],int size){
    int total=(size+1)*(size+2)/2;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
        return total-sum;
    };
  int main(){
            int arr[]={1,2,3,4,5,6,8,9};
            int size =sizeof(arr)/sizeof(arr[0]);
            int missNumb=findmissNumb(arr,size);
            printf("the missing number: %d\n",missNumb);
            return 0;
}
    