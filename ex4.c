#include<stdio.h>

int main(){
int d1=5,d2=3;
    
    //名前をきくパート
char name[10];
printf("What is your name?");
scanf("%s",name);
printf("Hello, %s!\n",name);


    printf("Rolling the dice...\n");
    printf("Die 1:%d\n",d1);
    printf("Die 2:%d\n",d2);
    printf("Total value: %d\n",d1+d2); 
    //判定パート
    if(d1+d2>=7){
    printf("%s won!",name);
}else{
    printf("%s lost!",name);
}
    return 0;

}
