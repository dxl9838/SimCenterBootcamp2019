#include <stdio.h>
int sumInt(int a,int b);
int main(){
    int integer1,integer2,sum;
    printf("ENter first integer:");
    scanf("%d",&integer1);//read input to integer
    printf("Enter second integer:");
    scanf("%d",&integer2);//read input to integer
    sum=sumInt(integer1,integer2);
    printf("sum %d + %d = %d\n",integer1,integer2,sum);
    return(0);
}
// your code here
int sumInt(int a,int b){
int c=0;
c=a+b;
return c;
}
