#include <stdio.h>
#include <stdlib.h>
int setS(){
    int sizeArr ;
    printf("Введіть розмір массиву : ");
    scanf("%d",&sizeArr);
    return sizeArr;
}

void setArr(int *n,int *a){
    printf("\nВведiть цiлi числа для масиву:");

	for (int i = 0; i < *n; i++)
    {
		printf("\nA[%d] = ", i);
		scanf("%d", &*(a + i));
    }
    
    printf("\nМасив\n:");
    for (int i = 0; i < *n; i++)
        printf("%d\t",*(a+i));
 }
 void min(int *n,int *a){
    int min = *a;
   	for (int i = 0; i < *n; i++)
    {
        if(min >*(a+i) && i%2 == i) 
            min = *(a+i);
    }
    printf("\nМінімальний елемент масиву з непарним номером = %d \n", min);

 }
int main(){
    int sizeArr = setS();
    int *na = &sizeArr;
	int A[sizeArr];
	int* arr = A;
    arr = (int*)malloc(sizeArr * sizeof(int) );
	setArr(na, arr);
    min(na,arr);
	
}