// # include<stdio.h>
// int main(){
//     int x = 19;
//     int *j = &x;
//     printf("the adress of x is : %u\n",j);
//     printf("the adress of x is : %d\n",*j);
//     printf("the adress of x is : %d\n",x);
//     return 0;

// }

// #include<stdio.h>
// int printsdd(int x);
// int main(){
//     int a = 16;
//     printf("the address of a is : %u \n",&a);
//     printsdd(a);
// }
// int printsdd(int *x){
//     *x = 16;
//     printf("the address of a is : %u",&x);
//     return 0;
// }

// #include <stdio.h>
// int tentimer();
// int main()
// {
//     int x = 12;
//     printf("address is %u\n",&x);
//     tentimer(&x);
//     printf("adress is %u\n",&x);
// }
// int tentimer(int *x)
// {
//     int alpha;
//     alpha = *x * 10;
//     printf("the value agter 10 times of itself is : %d\n", alpha);
//     return 0;
// }

// # include<stdio.h>
// int nested_array();
// int main(){
//     int num1,num2;
//     printf("enter the length of array: ");
//     scanf("%d",&num1);
//     printf("enter the length of array's elements: ");
//     scanf("%d",&num2);
//     nested_array(num1,num2);

// }
// int nested_array(int x,int y){
//     int i,j;
//     int numbers[x][y];
//     for(i =0;i<x;i++){
//         for (j = 0;j<y;j++){
//             printf("enter the %d value for %d : ",i+1,j+1);
//             scanf("%d",&numbers[i][j]);
//         }
//     }
//     for(i =0;i<x;i++){
//         for (j = 0;j<y;j++){
//             printf("the %d value for %d is : %d\n",i+1,j+1,numbers[i][j]);
//         }
//     }

// }

// # include<stdio.h>
// int main(){
//     int array[10],i,num;
//     printf("enter the number that you have to print the table : ");
//     scanf("%d",&num);
//     for(i = 0;i < 10;i++){
//         printf("Enter the %dst value: \n",i+1);
//         scanf("%d",&array[i]);
//     }
//     for(i = 0;i < 10;i++){
//         printf("%d X %d : %d\n",num,i+1,array[i]);
//     }
//     return 0;
// }

// # include<stdio.h>
// int strongnumber();
// int main(){
//     int num;
//     printf("enter the number that you have to factorise : ");
//     scanf("%d",&num);
//     strongnumber(&num);

// }
// int strongnumber(int *x){
//     int i;
//     for (i = 2;i<10;i++){
//         if(*x % i == 0){
//             printf("the factors of %d are %d\n",*x,i);
//         }
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int occurence();
// int main(){
//     char string[20];
//     printf("enter any string: ");
//     scanf("%s", string);
//     occurence(string[20]);
//     printf("%d\n",strlen(string));

// }
// int occurence(char string[]){
//     char ch = 'n';
//     int count = 0;
//     for (int i = 0;i < strlen(string);i++){
//         if(string[i] == 'n'){
//             count++;
//         }
// //     }
// //     printf("count of character is : %d",count);
// //     return 0;
// // }
// #include <stdio.h>
// int main()
// {
    // for (int i = 0; i < 4; i++)
    // {
    //     int k = i;
    //     for (int j = 1; j >= 4; j--)
    //     {
    //         printf("%d", k);
    //         k++;
    //     }
    //     printf("\n");
    // }/
// #include <stdio.h>
// #include <stdio.h>

// void replaceCharacter(char *text, char target, char replacement) {
//     while (*text) {
//         if (*text == target) {
//             *text = replacement;
//         }
//         text++;
//     }
// }
// #include <stdio.h>

// int countOccurrences(char *text, char character) {
//     int count = 0;
//     while (*text) {
//         if (*text == character) {
//             count++;
//         }
//         text++;
//     }
//     return count;
// }




// int main() {
//     char inputText[100]; // Assume a maximum input length of 100 characters
//     char targetCharacter, replacementCharacter;
//     int choice;

//     while (1) {
//         printf("\nText Processing Menu:\n");
//         printf("1. Count occurrences of a character\n");
//         printf("2. Replace a character\n");
//         printf("3. Display processed text\n");
//         printf("0. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter a character: ");
//                 scanf(" %c", &targetCharacter);
//                 printf("Occurrences of '%c': %d\n", targetCharacter, countOccurrences(inputText, targetCharacter));
//                 break;
//             case 2:
//                 printf("Enter target character: ");
//                 scanf(" %c", &targetCharacter);
//                 printf("Enter replacement character: ");
//                 scanf(" %c", &replacementCharacter);
//                 replaceCharacter(inputText, targetCharacter, replacementCharacter);
//                 break;
//             case 3:
//                 printf("Processed text: %s\n", inputText);
//                 break;
//             case 0:
//                 printf("Exiting program.\n");
//                 return 0;
//             default:
//                 printf("Invalid choice. Try again.\n");
//         }
//     }
// }

