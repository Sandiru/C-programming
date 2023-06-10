#include<stdio.h>
#include<string.h>


int main(){
    char name[100];
    printf("Enter name: ");
    gets(name);
    puts(name);
    puts(strrev(name));
    /*for(int i=strlen(name)-1;i>=0;i--){
        printf("%s",name[0]);
    }*/

}






