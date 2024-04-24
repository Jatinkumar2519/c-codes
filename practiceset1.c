// # include<stdio.h>
// int main(){
//     int a,b;
//     printf("the length of rectangle is \"a\" = ");
//     scanf("%d",&a);
//     printf("the length of rectangle is \"b\" = ");
//     scanf("%d",&b);
//     printf("the area of rectangle is \"area_of_rect\" = %d",a*b);
//     return 0;
// }

// # include<stdio.h>
// int main(){
//     int radius;
//     printf("the radius of circle is: ");
//     scanf("%d",&radius);
//     int height;
//     printf("the height of cylinder is: ");
//     scanf("%d",&height);
//     printf("the area of circle is: %f \n",3.14*radius*radius);
//     printf("the volume of cylinder is: %f \n",3.14*radius*radius*height);
//     return 0;

// }

// # include<stdio.h>
// # include<string.h>
// int main(){
//     char *str;
//     char str[20];
//     printf("enter any string value: ");
//     scanf("%c",&str);
//     printf("enter any string value: ");
//     scanf("%s", str);
//     printf("");
// }
// #include <stdio.h>
// int main()
// {
//     int num,j;
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         int k = i;
//         for (j = 1; j <= (num - i); j++)
//         {
//             printf("  ");
//         }
//         for (int z = 1; z <= i; z++)
//         {
//             printf("%d ", k);
//             k++;
//         }
//         for (int z = i; z >= 2; --z)
//         {
//             printf("%d ",i);
            
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int numInputs;
//     printf("Enter the total number of inputs: ");
//     scanf("%d", &numInputs);

//     int *inputArray = malloc(numInputs * sizeof(int));

//     for (int i = 0; i < numInputs; i++) {
//         printf("Input #%d: ", i + 1);
//         scanf("%d", &inputArray[i]);
//     }

//     // Now you can use the inputArray for further processing
//     // For example, printing the input values:
//     for (int i = 0; i < numInputs; i++) {
//         printf("Input #%d = %d\n", i + 1, inputArray[i]);
//     }

//     // Don't forget to free the allocated memory
//     free(inputArray);

//     return 0;
// }

# include<stdio.h>
# include<math.h>
# include<string.h>
int main(){
    int num = 9;
    double x = sqrt(num);
    printf("%.1lf ",x);
    printf(typedef(x));
    return 0;
}