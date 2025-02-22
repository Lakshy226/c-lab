#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
int number1, number2;
printf("Enter two numbers:");
scanf("%d %d",&number1, &number2 );

swap(&number1, &number2);
printf("Swapping: number1= %d, number2= %d", number1, number2);

return 0;
}
