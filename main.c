#include <stdio.h>
#define MAX 100000

int main() {
    int arrayIndex=0;
    int input,temp;
    int arrayCount=0;
    int array[MAX]={0};
    while (scanf("%d",&input)!=EOF){

        array[arrayIndex]=input;
        arrayIndex++;
        arrayCount++;

    }
    for (int i = 0; i < arrayCount; ++i) {
        for (int j = 0; j < arrayCount-1-i; ++j) {
            if (array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }


    if (arrayIndex%2==1){
        printf("%d",array[(arrayIndex-1)/2]);
    } else{
        printf("%d",-1);
    }

    return 0;
}
