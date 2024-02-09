# c-codes
# include<stdio.h>
int main(){
    int num1,num2,num3,num4,largestnum_1,largetsnum_2,largest;
    printf("enter num1: ");
    scanf("%d",&num1);
    printf("enter num2: ");
    scanf("%d",&num2);
    printf("enter num3: ");
    scanf("%d",&num3);
    printf("enter num4: ");
    scanf("%d",&num4);
    if(num1 > num2){
        largestnum_1 = num1;
    }
    else{
        largestnum_1 = num2;
    }
    if(num3 > num4){
        largetsnum_2 = num3;
    }
    else{
        largetsnum_2 = num4;
    }
    if(largestnum_1 > largetsnum_2){
        largest = largestnum_1;
    }
    else{
        largest = largetsnum_2;
    }
    printf("the largest of four is %d ",largest);
    return 0;
}
