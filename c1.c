#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
float power(int, int);
int main(){
    
    int num1, num2, res;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Call the add() function
    res = add(num1, num2);
    // Print the result
    printf("Sum of the two numbers is: %d", res);
     res =sub(num1,num2);
    printf("\nSub of the two numbers is: %d", res);
     res =mul(num1,num2);
     printf("\nmul of the two numbers is: %d", res);
     res =div(num1,num2);
      printf("\ndiv of the two numbers is: %d", res);
      res =power(num1,num2);
      printf("\npower of the two numbers is: %d", res);
     return 0;
    
}
int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int sub(int a ,int b){
    int sub;
    sub=a-b;
 return sub;
}
int mul(int a, int b){
    int mul;
    mul = a*b;
    return mul;
}

int div(int a ,int b){
    int div;
    div=a/b;
 return div;
}
float power(int a ,int b){
    float power;
    power=a^b;
 return power;
}
