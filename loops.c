
// // ************************************while loop
// #include <stdio.h>
// int main()
// {
//     int number = 0;
//     while (number <= 20)
//     {
//         if (number >= 10)
//         {
//             printf("ooa %d \n", number);
//         }
//         number++;
//     }
//     return 0;
// }

//************************************** do-while loop
// #include <stdio.h>
// int main()
// {
//     int number,i = 0;
//     printf("please enter the number: ");
//     scanf("%d", &number);
//     do
//     {
//         printf("%d\n", number);
//         number ++;
//     } while (i < number);
//     return 0;
// }
// ***************************************for loop
// #include <stdio.h>
// int main()
// {
//     int num, i, j, space;
//     printf("enter num: ");
//     scanf("%d", &num);
//     for (i = 0; i < num + 1; i++)
//     {
//         for (j = 0; j < i + 1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// # include<stdio.h>
// int main(){
//     int num,i,j;
//     printf("enter num: ");
//     scanf("%d", &num);
//     for (i = 0;i<num + 1;i++){
//         for (j = 0;j< num - i ;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int i, j, num,new_number;
//     printf("enter num: ");
//     scanf("%d", &num);
//     if (num % 2 == 0){
//         new_number = num/2;
//     }
//     else{
//         new_number = (num+1)/2;
//     }
//     for (i = new_number + 1; i < num + 1; i++)
//     {
//         for (j = 0; j < num - i; j++)
//         {
//             printf("  ");
//         }
//         for (j = 0; j < i ; j++)
//         {
//             printf("* ");
//         }
//         for (j = 0; j < i - 1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (i = 0; i < num ; i++)
//     {
//         for (j = 0; j < i + 1; j++)
//         {
//             printf("  ");
//         }
//         for (j = 0; j < num - i -1; j++)
//         {
//             printf("* ");
//         }
//         for (j = 0; j < num - i -2; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, num;
//     printf("enter number: ");
//     scanf("%d",&num);
//     for (i = 0; i < num + 1; i++)
//     {
//         for (j = 0; j < i ; j++)
//         {
//             if (i == 0 || i == num )
//             {
//                 printf("* ");
//             }
//             else if(j == 0 || j == i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i;
//     int a = 9;

//     for (i = 1;i < a+1;i++){
//         printf("%d X %d = %d \n",a,i,a*i);
//     }
//     return 0 ;
// }

// #include<stdio.h>
// int main(){
//     int a = 9,i;
//     for (i = a;i;i--){
//         printf("%d X %d = %d \n",a,i,a*i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 9, i, table, sum;
//     sum = 0;
//     for (i = a; i; i--)
//     {
//         table = a * i;
//         sum = sum + table;
//     }
//     printf("the sum of table is %d",sum);
//     return 0;
// }

// #include <stdio.h>
// void average(); int main()
// {
//     int num1, num2, num3;
//     printf("enter the value of number1: ");
//     scanf("%d", &num1);
//     printf("enter the value of number2: ");
//     scanf("%d", &num2);
//     printf("enter the value of number3: ");
//     scanf("%d", &num3);
//     average(num1, num2, num3);
// }
// void average(int x, int y, int z )
// {
//     int avg;
//     avg = (x + y + z) / 3;
//     printf("the average of three numbers is : %d", avg);
//     }

// ****************fibonachi series***************
// #include <stdio.h>
// void febo_series();
// int main()
// {
//     febo_series();
// }
// void febo_series()
// {
//     int a = 0, b = 1, next, num,i;
//     printf("enter the last number of the series: ");
//     scanf("%d",&num);
//     printf("%d\n", a);
//     printf("%d\n", b);
//     while(next < num)
//     {

//         next = a + b;
//         if(next < num){
//         printf("%d\n", next);
//         a = b;
//         b = next;
//         }
//     }
// }

// #include <stdio.h>
// #include <math.h>
// int factorial();
// int main()
// {
//     int num;
//     printf("enter the num: ");
//     scanf("%d", &num);
//     factorial(num);
//     return 0;
// }
// int factorial(int x)
// {
//     int factorial;
//     factorial = x * factorial(x - 1);
//     printf("%d",factorial);
// }

// #include <stdio.h>
// void pattern();
// int main()
// {
//     int num;
//     printf("enter the num: ");
//     scanf("%d", &num);
//     pattern(num);
// }
// void pattern(int num)
// {
//     int i, j;
//     for (int i = 0; i < num ; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// int percent();
// int main()
// {
//     int num ;
//     printf("Please Enter your no. of subjects : ");
//     scanf("%d",&num);
//     percent(num);
// }
// int percent(int num)
// {
//     int i,x, sum = 0;
//     float per;
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Please Enter your marks in subject %d : \n", i + 1);
//         scanf("%d",&arr[i]);
//     }
//     for (i = 0; i < num; i++)
//     {
//         sum = sum + arr[i];
//     }
//     per = sum / num;
//     printf("Your CGPA in first sem : %.2f \n",(per/95)*10);
//     printf("****** THANKS FOR USING ******\n");
//     scanf("%d",&x);
//     return 0;
// }

// # include<stdio.h>
// void same();
// int main(){
//     int num = 3;
//     same(num);

// }
// void same(int num){
//     char *arr1[20],*arr2[20],*arr3[20];
//     for (int i = 0;i < num;i++){
//         scanf("%s",&arr1[i]);
//     }
//     for (int i = 0;i < num;i++){
//         scanf("%s",&arr2[i]);
//     }
//     int k = 0;
//     for(int i = 0;i < num;i++){
//         for(int j = 0;j < num;j++){
//             if(arr1[i] == arr2[j]){
//                 arr3[i] = arr1[i];
//                 k++;
//             }

//         }
//     }
//     for(int i = 0;i < k;i++){
//         printf("%s",arr3[i]);
//     }

// }

// #include<stdio.h>
// void nodes();
// int main(){
//     nodes(3,7);
// }
// void nodes(int k,int num){
//     int arr1[10],arr2[10],arr3[10];
//     for (int i = 0;i < num;i++){
//         scanf("%d",&arr1[i]);
//     }
//     for (int i = 0;i < k;i++){
//         arr2[i] = arr1[i];
//     }
//     int j = 0;
//     for (int i = k;i < num;i++){
//         arr3[j] = arr1[i];
//         j++;
//     }
//     for (int i = k - 1;i + 1;i--){
//         printf("%d ",arr2[i]);
//     }
//     for (int i = 0;i < num - k;i++){
//         printf("%d ",arr3[i]);
//     }
// }

// 1
// 2 9
// 3 8 10
// 4 7 11 14
// 5 6 12 13 15

// #include<stdio.h>
// void pattern();
// int main(){
//     pattern(5);

// }
// void pattern(int num){
//     int x = 0,k = 1;
//     for(int i = 0;i < num;i++){
//         for(int j = 0;j < i;j++){
//             printf("%d  ",x);
//             k++;
//             x++;
//         }
//     printf("\n");
//     }
// } 

// # include<stdio.h>
// void assending();
// int main(){
//     int num;
//     printf("enter length of array : ");
//     scanf("%d", &num);
//     assending(num);
// }
// void assending(int num){
//     int arr[20];
//     int assarr[20],k;
//     for(int i = 0;i< num;i++){
//         printf("enter num%d : ",i + 1);
//         scanf("%d", &arr[i]);
//     }
//     k = 0;
//     for(int i = 0;i< num;i++){

//     }
//     for(int i = 0;i< num;i++){
//         printf("%d ",assarr[i]);
//     }
// }

// # include<stdio.h>
// int factorial();
// int main(){
//     int num;
//     printf("enter the number:");
//     scanf("%d",&num);
//     factorial(num);

// }
// int factorial(int num){
//     int x,arry[1000],length,k = 0;
//     if(num < 10){
//         printf("lavde dusra number dal jo 10 se bda ho");
//     }
//     else{ x = num;
//         int temp = num;
//         for(int i = 0;i < x;i++){
//             temp = num;
//             arry[i] = temp;
//             num --;
//         }
//         long long int multi = 1;
//         for(int j = 0;j < x;j++){
//             multi = multi * arry[j];
//             }
//         printf("the factoriaL of %d is : %llu",x,multi);

//     }
// // }
// # include<stdio.h>
// # include<string.h>
// int main(){
//     int num,y,k = 0;
//     int arry[200];
//     printf("enter number: ");
//     scanf("%d",&num);
//     while(num == 0){
//         y = num % 2;
//         num = num / 2;
//         arry[k] = y;
//     }
//     // int length = strlen(arry);
//     for (int i = 0;i < 4;i++){
//     printf("%d",arry[i]);

//     }

//     return 0;
// }
// // Question == 1 *****
// #include <stdio.h>
// int main()
// {
//     printf("%d", sizeof(int));
//     printf("%d", sizeof(float));
//     printf("%d", sizeof(double));
//     printf("%d", sizeof(char));
// }
// // question == 3 *****
// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 97; i < 123; i++)
//     {
//         printf("%c", i);
//     }
// }
// // question == 2 *****
// # include<stdio.h>
// int main(){
//     int num ;
//     scanf("%d",&num);
//     if (num % 2 == 0){
//         printf("number is even");
//     }
//     else{
//         printf("number is odd");
//     }
// }
// // question === 4 ****
// # include<stdio.h>
// int main(){
//     int num ;
//     scanf("%d",&num);
//     if (num > 0){
//         printf("number is positive");
//     }
//     if(num == 0){
//         printf("number is zero");

//     }
//     if(num < 0){
//         printf("number is negative");
//     }
// }
// // question == 6 ****
// # include<stdio.h>
// int main(){
//     int num1,num2 ;
//     scanf("%d %d",&num1,&num2);
//     printf("before swap\n");
//     printf("num1 = %d\n",num1);
//     printf("num2 = %d\n",num2);
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
//     printf("after swap\n");
//     printf("num1 = %d\n",num1);
//     printf("num2 = %d\n",num2);
// }
// # include<stdio.h>
// int main(){
//     int num = 159,a,b,c,d,e,num1,num2,num3,num4,num5;
//     int temp = num;
//     if(temp % 100 == 0){
//         a = temp / 100;
//         num1 = num % 100;

//     }
//     if(num1 % 10== 0){
//         b = temp / 10;
//         num2 = num % 10;

//     }
//     if(num2 % 5 == 0){
//         c = temp / 5;
//         num3 = num % 5;

//     }
//     if(num3 % 2 == 0){
//         d = temp / 2;
//         num4 = num % 2;

//     }
//     if(num4 % 50 == 0){
//         e = temp / 50;
//         num5 = num % 50;

//     }
//     // if(num1=num2=num3=num4=num5 == 1)
//     printf("%d",a + b + c + d + e);
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int num;
//     // scanf("%d",&num);
//     for (int i = 0;i < 4;i++){
//         int value = rand() % 4;
//         printf("%d",value);
//     }

// }
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int N = 3;
//     int num, value;
//     for (int i = 0; i < 4; i++)
//     {
//         value = rand() % (N + 1);
//         scanf("%d", &num);
//         if (num < 4 && num > 0)
//         {
//             if (value == num)
//             {
//                 printf("draw");
//             }
//             if (value < num)
//             {
//                 printf("win");
//             }
//             if (value > num)
//             {
//                 printf("defet");
//             }
//         }
//         else{
//             printf("enter again that is less then 4 and greater than 0");
//         }
//         return 0;
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int i, j, num,new_number;
//     printf("enter num: ");
//     scanf("%d", &num);
//     num = num / 2 + 1 ;
//     for (i = 0 ; i < num + 1; i++)
//     {
//         for (j = 0; j < num - i; j++)
//         {
//             printf("  ");
//         }
//         for (j = 0; j < i ; j++)
//         {
//             printf("* ");
//         }
//         for (j = 0; j < i - 1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (i = 0; i < num ; i++)
//     {
//         for (j = 0; j < i + 1; j++)
//         {
//             printf("  ");
//         }
//         for (j = 0; j < num - i -1; j++)
//         {
//             printf("* ");
//         }
//         for (j = 0; j < num - i -2; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

// }
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// int main()
// {
//     int n = 123945;
//     // scanf("%n",&n);
//     int arr[10];
//     int temp = n;
//     int x, k = 0;
//     int min, max;
//     max = min = INT_MIN;
//     while (temp > 10)
//     {
//         x = temp % 10;
//         arr[k] = x;
//         temp = temp / 10;
//         k++;
//     }
//     if (temp < 10)
//     {
//         arr[k] = temp;
//     }
//     for (int i = 0; i <= k; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     for (int i = 0; i <= k; i++)
//     {
//         if (arr[i] > max)
//         {
//             min = max;
//             max = arr[i];
//             // min = max ;
//         }
//         else
//         {
//             min = arr[i];
//         }
//     }
//     printf("\n%d ", max);
// }
# include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num][num];
    for(int i = 0 ; i < num; i++){
        for(int j = 0; j < num; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0 ; i < num; i++){
        for(int j = 0; j < num - 1; j++){
            for(int k = 0; k < num;k++){
                if(arr[i][j] > arr[i][j + 1]){
                    int a = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = a;
                }
            }
        }
    }
    // for(int j = 0 ; j < num; j++){
    //     for(int i = 0; i < num - 1; i++){
    //         if(arr[i][j] < arr[i][j + 1]){
    //             int a = arr[i][j];
    //             arr[i][j] = arr[i][j + 1];
    //             arr[i][j + 1] = a;
    //         }
    //     }
    // }
    printf("your matrix......\n");
    for(int i = 0 ; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}