#include <stdio.h>
int main(){
    int a;
    int b;
    int sum;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    sum=a+b;
    printf("sum is %d\n",sum);
    return 0;
}
//Alternative way
#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("Sum is : %d",a+b);
    return 0;

}