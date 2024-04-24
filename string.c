// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str1 = "jatin kumar",*str2;
//     int length_of_str = strlen(str1);
//     printf("%d\n", length_of_str);
//     printf("%s\n", str1);
//     printf("enter any name : ");
//     scanf("%s",&str2);

// }

// #include<stdio.h>
// #include<strings.h>

// int main(){
//     char str[10];
//     printf("enter any name : ");
//     scanf("%s",str);
//     printf("%s", str);
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     printf("enter your name: ");
//     gets(str);
//     puts(str);
//     return 0;
// }

// #include <stdio.h>
// int pascaltriangle();
// int main()
// {
//     int x;
//     printf("enter the number: ");
//     scanf("%d", &x);
//     pascaltriangle(x);
// }
// int pascaltriangle(int a)
// {
//     int i, j;
//     for(i = 1; i < a + 1; i++)
//     {
//         for (j = 1; j < i + 1; j++)
//         {
//             printf("%d ", i * j);
//         }
//         printf("\n");
//     }
//     return 0;
// // }
// # include<stdio.h>
// // # define max_length 100
// int main(){
//     printf("%d",sizeof(12345));
// }

// # include<stdio.h>
// # include<string.h>
// char processInput(char *ch){
//     char arr[100] = {'Z','A','B','C','D','E','F','G','H','I','J','K','L','M',
//     'N','O','P','Q','R','S','T','U','V','W','X','Y','Z','z','a','b','c','d','e','f',
//     'g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y',
//     'z'};
//     int k = 0;
//     while(*ch != arr[k]){
//         k++;
//     }
//     printf("%c",arr[k-1]);
// }
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     processInput(&ch);
// }
// // You are using GCC
// # include<stdio.h>
// int isDuckNumber(int *num){
//     int temp = *num;
//     int zero = 0;
//     while(temp > 0){
//         if(temp % 10 == 0){
//             zero = 1;
//             break;
//         }
//         temp = temp / 10;
//     }
//     if(zero == 1 ){
//         printf("The number is a duke number");
//     }
//     else{
//         printf("The number is not a duke number");
//     }
// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     isDuckNumber(&num);
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.


// void calculate_the_maximum(int n, int k) {
//     int arr1[10000000000000000],arr2[10000000000000000],arr3[10000000000000000];
//     int s = 0,total = 0;
//     for(int i = 1; i <= n;i++){
//         for(int j = 1; j <= n;j++){
//             if(i != j && i < j){
//                 arr1[s] = i & j;
//                 arr2[s] = i | j;
//                 arr3[s] = i ^ j;
//                 s++;
//                 total++;
//             }
//         }
//     }
//     int num1 = 0,num2 =0,num3 = 0;
//     for (int i = 0;i < total; i++){
//         if(arr1[i] < k && arr1[i] > num1){
//             num1 = arr1[i];
//         }
//         if(arr2[i] < k && arr2[i] > num2){
//             num2 = arr2[i];
//         }
//         if(arr3[i] < k && arr3[i] > num3){
//             num3 = arr3[i];
//         }
//     }
//     printf("%d\n",num1);
//     printf("%d\n",num2);
//     printf("%d\n",num3);
// }

// int main() {
//     int n, k;
//     scanf("%d %d", &n, &k);
//     calculate_the_maximum(n, k);
 
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.

// int find_nth_term(int n, int a, int b, int c) {
//   //Write your code here.
// //   int sum = 0;
//   int arr[100];
//   arr[0] = a;
//   arr[1] = b;
//   arr[2] = c;
//   for(int i = 3;i < n;i++){
//       arr[i] =arr[i - 1] + arr[i - 2] + arr[i - 3];
//   }
//   int result = arr[n - 1];
// }

// int main() {
//     int n, a, b, c;
  
//     scanf("%d %d %d %d", &n, &a, &b, &c);
//     int ans = find_nth_term(n, a, b, c);
 
//     printf("%d", ans); 
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int temp = num;
//     int start = 0;
//     int size = num*2 -1;
//     int end = size - 1;
//     int a[size][size];
//     while(num != 0){
//         for(int i = start;i <= end;i++){
//             for(int j = start;j <= end;j++){
//                 if((j == start || j == end) || (i == start || i == end)){
//                     a[i][j] = num;
//                 }
//             }
//         }
//         --end;
//         ++start;
//         --num;
//     }
//     for(int i = 0;i < size;i++){
//         for(int j = 0;j < size;j++)
//             printf("%d ",a[i][j]);
//             printf("\n");
//         }
//     return 0;
// }

# include<stdio.h>
# include<math.h>
int main(){
  printf("%d",sqrt(9));
}