#include<stdio.h>
#include<conio.h>


void display(int n,int arr[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

void main(){
    int n,i,a;
    int arr[20];
    printf("Enter the number of elements in tle list : ");
    scanf("%d",&n);
    printf("Enter the Array Elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(n, arr);
}