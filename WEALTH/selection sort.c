#include<stdio.h>
int main(){
    int i,j,count,temp,number[100]
    printf("How many numbers to sort :");
    scanf("%d",&count);
    printf("Enter %d elements ",count)
    for(i=0,i<count;i++){
        scanf("%d",%number[i]);
    }
    for(i=0;i<count;i++){
        for(j=i+1;j<count;j++){
            if(number[i]>number[j]){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }
    printf("Sorted elements: ");
    for(i=0;i<count;i++)
        printf(" %d",number[i]);
    return 0;
}