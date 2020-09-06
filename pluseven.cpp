#include<stdio.h>
#include<math.h>

int x,sum = 0,i;
int main(){
    scanf("%d",&x);
    for (i = 0; i <= x; i++)
    {
        if (i%2 == 0){
            printf("%d",i);
            sum += i;
        }
    }
    printf("sum = %d",sum);
}