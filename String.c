#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () 
{
    char*str;
    int length;

    printf("Enter the length of the string:");
    scanf("%d", &length);
while(getchar()!= '\n');
    str = (char*)malloc((length+1) * sizeof(char));

    if(str == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
   getchar();
	 printf("Enter the string:");
	 fgets(str,length+1, stdin);
	 str[strcspn(str,"\n")]= '\0'; 
	 printf("You entered:%s\n",str);
	 
	 free(str);
	 
return 0;
}
