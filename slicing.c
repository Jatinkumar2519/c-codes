// # include<stdio.h>
// void slice();
// int main(){
//     int n = 6,m = 2;
//     char str[] = "jatinparjapat";
//     slice(str,m,n);

// }
// void slice(char *ptr,int m,int n){
//     char nptr[20];
//     int k = 0;
//     for (int i = m;i<n+1;i++){
//         nptr[k] = ptr[i];
//         k++;
//     }
//     nptr[k] = '\0';
//     printf("the sliced string is %s", nptr);

// }

// #include <stdio.h>
// void encrypted();
// int main()
// {
//     char a[] = "jatin";
//     encrypted(a);
// }
// void encrypted(char *c)
// {
//     char *ptr = c;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         printf("the %dst char is %c\n",i+1,*ptr);
//         *ptr = *ptr + 1;
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int fun();
// int main(){
//     char a[30];
//     printf("enter the number: ");
//     scanf("%s", a);
//     fun(a);

// }
// int fun(char x){
//     char oddarray[20],evenarray[20];
//     int j, k,i;
//     for(i = 0;i < strlen(x);i++){
//         if(i % 2 == 0){
//             evenarray[j] = x[i];
//             j++;
//         }
//         else{
//             oddarray[k] =  x[i];
//             k++;
//         }
//     }
//     printf("the number of array having odd indexing : %d\n",oddarray);
//     printf("the number of array having even indexing : %d\n",evenarray);

// }
// # include<stdio.h>
// int main(){
//     printf("%d ",3 & 5);
// }
// You are using GCC
// # include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int k = 0;
//     int temp = num;
//     int arr1[10];
//     while(temp > 9){
//         int x = temp % 10;
//         arr1[k] = x;
//         temp = temp / 10;
//         k++;
//     }
//     arr1[k] = temp;
//     // printf("%d\n",k);
//     // printf("%d",arr1[]);
//     int ispali = 0;
//     for(int i = 0;i <= k;i++){
//         for(int j = k;j >= 0;j--){
//             if(arr1[i] == arr1[j]){
//                 ispali = 1;
//             }
//             else{
//                 ispali = 0;
//             }
//         }
    // }
    // for(int i = 0;i <= k;i++){
    //     printf("%d",arr1[i]);
    // }
    // printf("\n");
    // for(int j = k;j >= 0;j--){
    //     printf("%d",arr1[j]);
    // }
//     if(ispali == 1){
//         printf("Palindrome");
//     }
//     else{
//         printf("Not a palindrome");
//     }
// }
// // # include<stdio.h>
// // int main(){
//     int num1,num2;
//     int sum = 0;
//     scanf("%d %d",&num1,&num2);
//     for(int i = num1 ;i < num2;i++){
//         if(i % 2 != 0){
//             sum = sum + i;
//         }
//         else{
//             continue;
//         }
//     }
//     printf("%d",sum);
// }
// You are using GCC
// # include<stdio.h>
// # include<math.h>
// int main(){
//     long long int num;
//     scanf("%lli",&num);
//     long long int sum = 0;
//     long long int sum_fact= 1;
//     long long int temp = num;
//     while(temp > 9){
//         int x = temp % 10;
//         for(int i = 1 ; i <= x;i++){
//             sum_fact = sum_fact * i;
//         }
//         sum = sum + sum_fact;
//         temp = temp / 10;
//     }
//     for(int i = 1;i <= temp;i++){
//         sum_fact = sum_fact * i;
//     }
//     sum = sum + sum_fact;
//     // printf("%d",sum);12
//     if(sum == num){
//         printf("Strong number");
//     }
//     else{
//         printf("Not a strong number");
//     }
// }
// int thirdMax(int arr[], int *numsSize) {
//     int num = 0;
//     for(int i = 0 ; i < *numsSize;i++){
//         if(num < arr[i]){
//             num = arr[i];
//         }
//     }
//     printf("first highest is %d\n",num);
//     int k;
//     for(int i = 0 ; i < *numsSize;i++){
//         if(num == arr[i]){
//             k = i;
//             break;
//         }
//     }
//     for(int i = k; i < *numsSize;i++){
//         arr[i] = arr[i + 1];
//     }
//     int num1 = 0;
//     for(int i = 0 ; i < *numsSize - 1;i++){
//         if(num1 < arr[i]){
//             num1 = arr[i];
//         }
//     }
//     printf("second highest is %d\n",num1);
//     int j;
//     for(int i = 0 ; i < *numsSize - 1;i++){
//         if(num1 == arr[i]){
//             j = i;
//             break;
//         }
//     }
//     for(int i = j; i < *numsSize - 1;i++){
//         arr[i] = arr[i + 1];
//     }
//     int num3 = 0;
//     for(int i = 0 ; i < *numsSize - 2;i++){
//         if(num3 < arr[i]){
//             num3 = arr[i];
//         }
//     }
//     printf("third highest is %d",num3);

// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     int arr[100];
//     for(int i = 0;i < num;i++){
//         scanf("%d",&arr[i]);
//     }
//     thirdMax(arr,&num);
// }
// # include<stdio.h>
// int sorting();
// int main(){
//     int num;
//     scanf("%d",&num);
//     int arr[100];
//     for(int i = 0;i < num;i++){
//         scanf("%d",&arr[i]);
//     }
//     sorting(arr,num);
// }
// int sorting(int arr[],int num){
//     int num1 = 0;
//     int a ;
//     for(int i = 0;i < num;i++){
//         for(int j = i + 1;j < num;j++){
//             if(arr[i] > arr[j]){
//                 a = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = a;
//             }
//         }
//     }
//     for(int i = 0; i < num; i++){
//         printf("%d ",arr[i]);
//     }
// }
// # include<stdio.h>
// int closestNumber(int *num1,int *num3){
//     int k = 0,j = 0;
//     int x,y;
//     // if(*num1 < 0){
//     //     *num1 = -(*num1);
//     // }
//     // else{
//     //     *num1 = *num1;
//     // }
//     if(*num1 == 0){
        
//     }
//     for(int i = *num1;i >= *num1 || i <= *num1;i--){
//         if( i % *num3 == 0){
//             x = i;
//             break;
//         }
//         k++;
//     }
//     for(int i = *num1;i >= *num1 || i <= *num1;i++){
//         if(i % *num3 == 0){
//             y = i;
//             break;
//         }
//         j++;
//     }
//     if(k > j){
//         printf("%d",y);
//     }
//     else{
//         printf("%d",x);
//     }
// }
// int main(){
//     int num1,num3;
//     scanf("%d %d",&num1,&num3);
//     closestNumber(&num1,&num3);
// }
// You are using GCC
# include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }
    int a;
    for(int i = 0;i < num;i++){
        for(int j = i + 1;j < num;j++){
            if(arr[i] > arr[j]){
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(int i = 0; i < num;i++){
        printf("%d ",arr[i]);
    }
}