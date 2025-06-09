#include <stdio.h>

int main(){
  //1.Farenheit to celsius conversion
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    int celsius = (int)((fahrenheit - 32) * 5 / 9);
    printf("Temperature in Celsius (integer): %d\n", celsius);

  //2.Integer Division with Float Result
    int a = 5, b = 2;
    float result = (float)a / b; 
    printf("Result of division as float: %.2f\n", result);

  //3.implicit vs explicit typecasting
    int num = 5;
    float fnum = 2.5;

    float implicit = num + fnum;
    float explicit = (float)num + fnum;

    printf("Implicit casting result: %.2f\n", implicit);
    printf("Explicit casting result: %.2f\n", explicit);
  
  //4.Character to ASCII Conversion
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    int ascii = (int)ch;
    printf("Ascii value : %d\n", ascii);

  //5.Float Salary to Integer for Reporting
    float salary;
    printf("Enter salary: ");
    scanf("%f", &salary);

    int reported_salary = (int)salary;
    printf("Reported Salary (integer): %d\n", reported_salary);

  //6.Average Marks as Float
    int mark1, mark2, mark3;
    printf("Enter three marks: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    float average = (float)(mark1 + mark2 + mark3) / 3;
    printf("Average marks: %.2f\n", average);

  
}
