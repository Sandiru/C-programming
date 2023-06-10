#include<stdio.h>
#include<string.h>


int main(){
    char name[100];
    printf("Enter name:");
    gets(name);
    int count=1;
    for(int i=0;i<strlen(name)-1;i++){
        if(name[i]==' '){
            count+=1;
        }

}
printf("There are %d words in the string.",count);

}
