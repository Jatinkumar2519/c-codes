// # include<stdio.h>
// int main(){
//     int a,b,c;
//     // char c;
//     printf("the value of a is \n");
//     scanf("%d",&a);
//     printf("the value of b is \n");
//     scanf("%d",&b);
//     printf("the value of d is \n");
//     scanf("%d",&c);
//     printf("the sum of a,b and c is %d",a + b + c);
//     return 0;

// }
// # include<stdio.h>
// # include <string.h>
// int main(){
//     int n ;
//     scanf("%d",&n);
//     char *x = n;
//     printf("%d ",strlen(x));
// }
// # include<stdio.h>
// int alpha();
// int main(){
//     int num ;
//     scanf("%d",&num);
//     alpha(num);
// }
// int alpha(int num){
//     int temp = num,x;
//     int sum = 0,k = 0;

//     while(temp > 9){
//         x = temp % 10;
//         sum = sum + x;
//         temp = temp / 10;
//     }
// printf("%d\n",sum + temp);
//     if ((sum + temp) > 10){
//         temp = sum + temp;
//         alpha(sum+temp);
//     }
//     k++;
// printf("%d\n",k);
// }
// # include<stdio.h>
// # include<math.h>
// int isAutomorphic();
// int main(){
//     int num;
//     scanf("%d",&num);
//     isAutomorphic(&num);
// }
// int isAutomorphic(int *num){
//     int x = *num % 10;
//     int square = pow(*num,2);
//     int y = square % 10;
//     if(x == y){
//         printf("The number is an automorphic.");
//     }
//     else{
//         printf("The number is NOT an automorphic.");
//     }
// }
// # include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int end = (num * 2) - 1;
//     int start = 0; 
//     int size = end - 1;
//     int arr[size][size];
//     while(num != 0){
//         for (int i = start ; i < end;i++){
//             for(int j = start ;j < end;j++){
//                 if((i == end || i == start) || (j == end || j == start)){
//                     arr[i][j] = num;
//                 }
//             }
//         }
//         --end;
//         ++start;
//         --num;
//     }
//     for(int i = 0;i < num;i++){
//         for(int j = 0;j < num; j++){
//             printf("%d ",arr[i][j]);
//             printf("\n");
//         }
//     }
// return 0;
    
// }
// #include<stdio.h>

// int main(){
//     int num,num1,num2;
    // scanf("%d",&num);
//     scanf("%d %d",&num1,&num2);
//     int arr[num1];
//     for(int i = 0; i < num1;i++){
//         scanf("%d",&arr[i]);
//     }
//     int num3,num4;
//     scanf("%d %d",&num3,&num4);
//     int arr1[num3];
//     for(int i = num2; i < num1;i++){
//         printf("%d ",arr[i]);
//     }
//     for(int i = 0; i < num2;i++){
//         printf("%d ",arr[i]);
//     }
//     printf()
//     for(int i = num4; i < num3;i++){
//         printf("%d ",arr1[i]);
//     }
//     for(int i = 0; i < num4;i++){
//         printf("%d ",arr1[i]);
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int* arr;
//     arr = calloc(num , sizeof(int));
//     for(int i = 0; i < num; i ++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0;i < num; i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n%d\n",arr[0]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[3]);
// }
// # include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the size of array: ");
//     scanf("%d",&num);
//     int arr[num];
//     for(int i = 0;i < num; i++){
//         scanf("%d",&arr[i]);
//     }
//     int target;
//     printf("Enter the target: ");
//     scanf("%d",&target);
//     int isfound = 0;
//     int index_on_target_found ;
//     for(int i = 0;i < num; i++){
//         if(arr[i] == target){
//             index_on_target_found = i;
//             isfound = 1;
//         }
//     }
//     if(isfound == 1){
//         printf("%d ",index_on_target_found);
//     }
//     else{
//         printf("%d",-1);
//     }
// }
// # include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the size of matrix: ");
//     scanf("%d",&num);
//     int arr[num][num];
//     for(int i = 0 ; i < num;i++){
//         for(int j = 0; j < num; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i = 0 ; i < num;i++){
//         for(int j = 0; j < num; j++){
//             printf("%d ",arr[j][i]);
//         }
//         printf("\n");
//     }
// }
# include<stdio.h>
# include<string.h>
// int countOccurrences();
// void replaceCharacter();
int countOccurrences(char text[], char character){
    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == character){
            count++;
        }
    }
    printf("occurance of %c is : %d\n",character,count);
}
void replaceCharacter(char text[], char target, char replacement){
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == target){
            text[i] == replacement;
        }
        printf("%c",text[i]);
    }
    printf("\n");
}
int main(){
    int loop = 1;
        char text[100],character,target,replacement;
        printf("Enter a string: ");
        fgets(text,100,stdin);
   while (loop == 1){
        int choice;
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter the character: ");
            getchar();
            scanf("%c",&character);
            countOccurrences(text,character);
            break;
        case 2:
            printf("Enter the target character: ");
            getchar();
            scanf("%c",&target);
            printf("Enter the replacement character: ");
            getchar();
            scanf("%c",&replacement);
            replaceCharacter(text,target,replacement);
            break;
        case 3:
            printf("%s",text);
            break;
        case 0:
            loop = 0;
            break;
        }
   }
    printf("Exit....");

}

// #include <stdio.h>

// int main() {
    
//     int max = 100;
//     int matrix[max][max], transpose[max][max];
//     int m, n, i, j;

//     printf("Enter the number of rows and columns of the matrix: ");
//     scanf("%d %d", &m, &n);

//     printf("Enter the elements of the matrix:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }

//     printf("Transpose of the matrix:\n");
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < m; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }