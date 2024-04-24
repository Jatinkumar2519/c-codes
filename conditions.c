// #include <stdio.h>
// int main(){
//     float anaually_sellery;
//     printf("your annually sallery: ");
//     scanf("%f", &anaually_sellery);
//     if (anaually_sellery < 2.5){
//         printf("you do not need to pay any tax");
//     }
//     if(anaually_sellery <= 5.0 && anaually_sellery >= 2.5){
//         printf("you will have to pay 5 percent of your sallery");
//     }
//     if(anaually_sellery <= 10.0 && anaually_sellery >=5.0){
//         printf("you will have to pay 20 percent of your sallery");
//     }
//     if(anaually_sellery > 10.0){
//         printf("you will have to pay 30 percent of yoour sallery");
//     }
//     return 0;
// }

// # include<stdio.h>
// int main(){
//     int year;
//     printf("enter the year that you have to check that the year is leep year or not: ");
//     scanf("%d",&year);
//     if ((year % 4 == 0) && (year % 400 == 0) && (year % 100 != 0)){
//         printf("the year %d is leap year",year);
//     }
//     else{
//         printf("year %d is not a leap year",year);
//     }
//     return 0 ;

// }

// # include<stdio.h>
// int main(){
//     int num1,num2,num3,num4,largestnum_1,largetsnum_2,largest;
//     printf("enter num1: ");
//     scanf("%d",&num1);
//     printf("enter num2: ");
//     scanf("%d",&num2);
//     printf("enter num3: ");
//     scanf("%d",&num3);
//     printf("enter num4: ");
//     scanf("%d",&num4);
//     if(num1 > num2){
//         largestnum_1 = num1;
//     }
//     else{
//         largestnum_1 = num2;
//     }
//     if(num3 > num4){
//         largetsnum_2 = num3;
//     }
//     else{
//         largetsnum_2 = num4;
//     }
//     if(largestnum_1 > largetsnum_2){
//         largest = largestnum_1;
//     }
//     else{
//         largest = largetsnum_2;
//     }
//     printf("the largest of four is %d ",largest);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int lowerLimit, upperLimit, sum;

//     // Input lower and upper limits from the user
//     printf("Enter the starting element of the range: ");
//     scanf("%d", &lowerLimit);
//     printf("Enter the ending element of the range: ");
//     scanf("%d", &upperLimit);

//     printf("Perfect Numbers within the range %d to %d:\n", lowerLimit, upperLimit);

//     // Iterate through the range to check for perfect numbers
//     for (int num = lowerLimit; num <= upperLimit; num++) {
//         sum = 0; // Initialize the sum to zero for each element

//         // Check whether the current number is a perfect number
//         for (int divisor = 1; divisor < num; divisor++) {
//             if (num % divisor == 0) {
//                 sum += divisor;
//             }
//         }

//         // If the sum of all factors (excluding the number itself) equals the number, it's a perfect number
//         if (sum == num) {
//             printf("%d ", num);
//         }
//     }

//     printf("\n");
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int num,x,even = 0,odd = 0;
//     scanf("%d",&num);
//     for (int i = 0;i < sizeof(num); i++){
//         x = num % 10;
//         if( x % 2 == 0){
//             even = even + x;
//         }
//         if( x % 2 != 0){
//             odd = odd + x;
//         }
//         num = num / 10;
//     }
//     if (num % 2 == 0){
//         even = even + num;
//     }
//     else{
//         odd = odd + num;
//     }
//     printf("%d %d",even,odd);
// }
// #include <stdio.h>
// int main()
// {
//     int num1, num2, arr[100], num, y = 0;
//     scanf("%d %d", &num1, &num2);
//     for (int i = num1; i < num2; i++)
//     {
//         num = i;
//         while (num != 1)
//         {
//             if ()
//                 int x = num % 10;
//             arr[y] = x;
//             y++;
//             if ()
//         }
//     }
// }
// # include<stdio.h>
// #include<string.h>
// # define  len 20
// int main(){
//     // char s;
//     // fgets(s,len,stdin);
//     char s[100] = "my name is jatin";
//     // printf("%d",strlen(s));
//     // printf("%c",s[0]);
//     for (int i = 0;i <strlen(s);i++){
//         if (s[i] != ' '){
//             printf("%c",s[i]);
//         }
//         else{
//             printf("\n");
//         }
//     }
// }


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// # define len 100
// int main() {
//     char s[len];
//     fgets(s,len,stdin);
//     int length = strlen(s);
//     int zero = 0,one = 0,two = 0,three = 0,four = 0,five = 0,six = 0,seven = 0, eight = 0,nine = 0;
//     for(int i = 0;i < length;i++){
//         if(s[i] == 0){
//             zero++;
//         }
//         else if(s[i] == '1'){
//             one++;
//         }
//         else if(s[i] == '2'){
//             two++;
//         }
//         else if(s[i] == '3'){
//             three++;
//         }
//         else if(s[i] == '4'){
//             four++;
//         }
//         else if(s[i] == '5'){
//             five++;
//         }
//         else if(s[i] == '6'){
//             six++;
//         }
//         else if(s[i] == '7'){
//             seven++;
//         }
//         else if(s[i] == '8'){
//             eight++;
//         }
//         else if(s[i] == '9'){
//             nine++;
//         }
//     }
//     printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int n ;
//     scanf("%d",&n);
//     int temp = n;
//     int x ;
//     int sum = 0;
//     while(temp >= 9){
//         x = temp % 10;
//         sum = sum + x;
//         temp = temp / 10;
//     }
//     printf("%d\n",sum + temp);
//     int temp1 = sum+ temp;
//     int y;
//     while(temp1 > 9){
//         y = temp1 % 10;
//         printf("%d",y);
//         temp1 = temp1 / 10;
//     }
//     if(temp1 < 10){
//         printf("%d",temp1);
//     }
// }
# include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int arr[num1][num2];
    for(int i = 0; i < num1; i++ ){
        for(int j = 0 ; j < num2; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    if(arr[num1 - 1][num2 - 1]  % 2 == 0){
        printf("%d is even",arr[num1 - 1][num2 - 1]);
    }
    else{
        printf("%d is odd",arr[num1 - 1][num2 - 1]);
    }
}