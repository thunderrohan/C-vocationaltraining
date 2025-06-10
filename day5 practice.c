#include <stdio.h>

//1.Farenheit to celsius conversion
void fahreneitToCelsius(){
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    int celsius = (int)((fahrenheit - 32) * 5 / 9);
    printf("Temperature in Celsius (integer): %d\n", celsius);
}

//2.Integer Division with Float Result
void integerDivision(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    float result = (float)a / b; 
    printf("Result as float: %.2f\n", result);
}

//3.implicit vs explicit typecasting
void typeCastingDemo(){
    int num = 5;
    float fnum = 2.5;
    printf("Implicit casting result: %.2f\n", num + fnum);
    printf("Explicit casting result: %.2f\n", (float)num + fnum);
}

//4.Character to ASCII Conversion
void charToAscii() {
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    printf("Ascii value : %d\n", (int)ch);
}

//5.Float Salary to Integer for Reporting
void salaryConversion(){
    float salary;
    printf("Enter salary: ");
    scanf("%f", &salary);

    int reported_salary = (int)salary;
    printf("Reported Salary (integer): %d\n", reported_salary);
}

//6.Average Marks as Float
void averageMarks(){
    int m1, m2, m3;
    printf("Enter three marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    float average = (float)(m1 + m2 + m3) / 3;
    printf("Average marks: %.2f\n", average);
}

//7.Double to Int Conversion
void doubleToInt() {
    double dvalue = 8.9876;
    int intvalue = (int)dvalue; 

    printf("Double value: %.4f\n", dvalue);
    printf("Converted to int (precision loss): %d\n", intvalue);
}

//8.Weight Conversion for Packaging
void weightConversion() {
    float weight;
    printf("Enter package weight: ");
    scanf("%f", &weight);

    int rounded_weight = (int)weight; 
    printf("Rounded down weight for packaging: %d\n", rounded_weight);
}

//9.Mixed-Type Billing Calculation
void billingCalculation() {
    int rupees;
    float paise;

    printf("Enter rupees and paise: ");
    scanf("%d %f", &rupees, &paise);

    float total = rupees + (paise / 100);
    printf("Total price: %.2f\n", total);
}

//10.Compare Results With and Without Casting
void divisionComparison() {
    int a = 7, b = 2;
    int int_result = a / b;
    float float_result = (float)a / b;

    printf("Integer division result: %d\n", int_result);
    printf("Float division result (casting): %.2f\n", float_result);
}

int main() {
    int choice;
    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Fahrenheit to Celsius\n");
        printf("2. Integer Division\n");
        printf("3. Implicit vs Explicit Casting\n");
        printf("4. Character to ASCII\n");
        printf("5. Salary Conversion\n");
        printf("6. Average Marks\n");
        printf("7. Double to Int\n");
        printf("8. Weight Conversion\n");
        printf("9. Billing Calculation\n");
        printf("10. Division Comparison\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: fahrenheitToCelsius(); break;
            case 2: integerDivision(); break;
            case 3: typeCastingDemo(); break;
            case 4: charToAscii(); break;
            case 5: salaryConversion(); break;
            case 6: averageMarks(); break;
            case 7: doubleToInt(); break;
            case 8: weightConversion(); break;
            case 9: billingCalculation(); break;
            case 10: divisionComparison(); break;
            case 0: printf("Exiting program.\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
