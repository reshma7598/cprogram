// #include<stdio.h>

// void insertionSort(int arr[], int n) {
//     int i, temp, j;
//     for(i = 1; i < n; i++) {
//         temp = arr[i];
//         j = i - 1;
//         while(j >= 0 && arr[j] > temp) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = temp;
//     }
// }

// void printArray(int arr[], int n) {
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]); // Add space after each number
//     printf("\n");
// }

// int main() {
//     int arr[] = {75, 15, 24, 64, 32, 81};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Original array: ");
//     printArray(arr, n);
//     insertionSort(arr, n);
//     printf("Sorted array: ");
//     printArray(arr, n);
//     return 0;
// }

// insertion sort

#include<stdio.h>
void insertionSort(int arr[],int n){
    int i,temp,j;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[],int n){
for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    printf("\n");
}
int main(){
    int arr[]={75 , 15 , 24 , 64 , 32 , 81 };
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("orginal array : ");
    printArray(arr,n);
    insertionSort(arr,n);
    printf("sorted array : ");
    printArray(arr,n);
    return 0;
}