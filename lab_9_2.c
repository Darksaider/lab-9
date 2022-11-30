#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int size(){
    int size;
    printf("Введіть розмір масиву : ");
    scanf("%d",&size);
    return size;
}
int randomFn(){
    int max = 100, 
    min = -100,
    a = 0;
    a = rand() % (min - max + 1) + min;
    return a;
}
void createArray(int *arr,int *s){
    int f0  =rand() % (0 - *s-1 + 1) + 0,
    t0 = rand() % (0 - *s-1 + 1) + 0;
    for (int i = 0; i < *s; i++)
        *(arr+i)=randomFn();

     while(f0 == t0)
         t0 = rand() % (0 - *s -1 + 1) + 0;

    *(arr+f0) = 0;
    *(arr+t0) = 0;
}
void show(int *arr,int *s){
    printf("Масив з зненерованими значеннями \n");
    for (int i = 0; i < *s; i++)
    printf("%d\t",*(arr +i));
     printf("\n");
}

void  suma(int *arr,int *s){
    int first_0,
    last_0,
    suma =0;
    for (int i = 0; i < *s; i++)
    {
        if(*(arr + i) == 0)
        {
            first_0 = i;
               break;  
        }
    }
    
    for (int i = *s - 1 ; i > first_0; i--)
    { 

        if(*(arr + i) == 0)
        {
            last_0 = i;
            break;
        }
       
    }
    if(last_0 !=0 )
    printf("Масив елементім розташовані між першим і останнім нулями \n");
      for (int i = first_0 +1; i < last_0; i++)
        printf("%d\t" , *(arr+i));
        printf("\n");
    for (int i = first_0 + 1; i < last_0-1 ; i++)
      
        suma += *(arr+i);
        
    printf("Сума елементім між 0 : %d", suma);
    printf("\n");
}
int main(){ 
    srand(time(NULL));
    int sizeArr = size();
    int *na = &sizeArr;
	int A[sizeArr];
	int* arr = A;
    arr = (int*)malloc(sizeArr * sizeof(int) );
	createArray(arr,na);
    show(arr,na);
	suma(arr,na);
    
}