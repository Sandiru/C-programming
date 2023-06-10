#include<stdio.h>
#include<string.h>


int main(){
    char ch;
    char name[100];
    int i,j;

    printf("Enter the string:");
    gets(name);
    printf("Enter what specific character you want to remove:");
    scanf("%c",&ch);
    for(i=0;i<strlen(name)-1;i++){
        if(name[i]==ch){
            for(j=i;j<strlen(name)-2;j++){
                name[j]=name[j+1];
            }
            name[j+1]='\0';
        }
        printf("%s\n",name);

    }
    printf("%s",name);

}
