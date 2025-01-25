#include<stdio.h>
#include<stdlib.h>
int main(){
int n=4,i;
int *arr_malloc, *arr_calloc;
arr_malloc = NULL;

if(arr_malloc == NULL||arr_calloc == NULL){
printf ("Memory allocatin failed!");
return 1;
}

printf("Values allocated using malloc");

for(i=0; i<n; i++){
printf("arr_malloc[%d]=%d\n",i,arr_malloc[i]);
}

printf("Vakues allocated using calloc");

for(i=0; i<n; i++){
printf("arr_calloc[%d]=%d\n",i,arr_calloc[i]);
}


}
