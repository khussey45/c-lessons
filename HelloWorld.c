#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>






int main(){

    // 2D array = an array, where each element is an entire array
    // useful if you need a matrix, grid, or table of data

    int numbers[2][3] = {
                         {1, 2, 3}, 
                         {4, 5, 6}
                        };

for() {
    
}

    return 0;

}
// array = a data structure that can store many values of the same data type

   

  
    // looping through an array
    // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    // for(int i =  0; i < sizeof(prices)/sizeof(prices[0]); i++){
        
    //     printf("$%.2lf\n", prices[i]);
    // }
// continue = skips rest of code & forces the next iteration of the loop 
    // break = exits a loop/switch 

    // for loop  = repeats a section of code a limited amount of times
    // while loop = repeats a section of code possibly unlimited times while some condition remians true, or may not execute at all

    // char name[25];

    // printf("\nWhat's your name?: ");
    // fgets(name, 25, stdin);
    // name[strlen(name)-1] = '\0';
    
    // while(strlen(name) == 0) {
    //     printf("You did not enter your name");
    //     printf("\nWhat's your name?: ");
    //     fgets(name, 25, stdin);
    //     name[strlen(name)-1] = '\0';
    // }

    // printf("Hello %s", name);

     // do while loop = always executes a block of code once, THEN checks a condition

    // int number  = 0;
    // int sum = 0;

    //  do {
    //     printf("Enter a # above 0: ");
    //     scanf("%d", &number);
    //     if(number > 0) {
    //         sum += number;
    //     }
    // }while (number > 0);
    
    
     // nested loop = a loop inside of another loop 

    // int rows;
    // int columns;
    // char symbol;

    // printf("\nEnter # of rows: ");
    // scanf("%d", &rows);

    // printf("\nEnter # of columns: ");
    // scanf("%d", &columns);

    // scanf("%c");

    // printf("Enter a symbol to use:  ");
    // scanf("%c", &symbol);

    // for(int i = 1; i <= rows; i++){

    //     for(int j = 1; j <= columns; j++) {
    //         printf("%c", symbol );
    //     }
    //     printf("\n");
    // }
   






 // functions protype

    // what is it? 
    // function declaration, w/o a body before the main()
    // Ensure that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameters matching 
    // Missing arguments will result in unexpected behaviour
    // A function prototype causes the compiler to flag an error if arguments are missing

    // ADVANTAGES
    // 1. Easier to naviagate a program w/ main() at the top 
    // 2. Helps with debugging
    // 3. Commonly used in header files


      // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false

    
// int findMax(int x, int y) {
    
//     return (x > y) ? x : y;
// }

//     int max =  findMax(1, 4);

//     printf("%d", max);


    // format specifiers % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf - double
    // %d = integer

    // %.1 = decial precision
    // %1 = minimum field width
    // %- = leftalign

    // float item1 = 5.75;
    // float item2 = 10.00;
    // float item3 = 100.99;

    // printf("Item 1: $%.4f\n", item1);
    // printf("Item 2: $%-8.2f\n", item2);
    // printf("Item 3: $%.2f\n", item3);

    // constant = fixed value that cannotbe altered by the program during its exectution 

    // const float PI = 3.14159; 
    // naming convention for const variables is uppercase

    // arithmetic operators

    // augmented assignment opperators

    // char name[25]; //bytes
    // int age;

    // USER INPUT

    // printf("\nWhat's your name?");
    // //scanf("%s", &name);
    // fgets(name, 25, stdin);
    // name[strlen(name)-1] = '\0';

    // printf("\nHow old are you?");
    // scanf("%d", &age);

    // printf("\nHello %s, how are you?", name);
    // printf("\nYou are %d years old", age);


    // double A = sqrt(9);
    // double B = pow(2, 4);
    // int C = round(3.14);
    // int D = ceil(3.14);
    // int E = floor(3.14);
    // double F = fabs(-100);
    // double G = log(3);
    // double H = sin(45);
    // double I = cos(45);
    // double J = tan(45);

    // printf("\n%lf", J);



    // const double PI = 3.14159;
    // double radius;
    // double circumference;
    // double area;
    

    // printf("\nEnter radius of a circle: ");
    // scanf("%lf", &radius);

    // circumference = 2 * PI * radius;
    // area = PI * radius * radius;

    // printf("\ncircumference: %lf", circumference);
    // printf("\narea: %lf", area);



    // double A;
    // double B;
    // double C;

    // printf("Enter side A: ");
    // scanf("%lf", &A);

    // printf("Enter side B: ");
    // scanf("%lf", &B);

    // C = sqrt(A*A + B*B);

    // printf("Side C: %lf", C);

    // IF STATEMENTS

    // int age;

    // printf("\nEnter your age: ");
    // scanf("%d", &age);

    // if(age >= 18){
    //     printf("You are now signed up!");
    // }
    // else if(age == 0 ){
    //     printf("You cant sign up you were just born");
    // }
    // else if(age < 0){
    //     printf("You haven't been born yet!");
    // }
    // else {
    //     printf("You are too young to sign up!");
    // }
    // return 0;

    // SWITH STATEMENTS
    
    // switch = A more efficient alternative to using many "else if" statements allows a value to be tessted for equality agaisnt many cases

    // char grade;
    
    // printf("\nEnter a letter grade: ");
    // scanf("%c", &grade);

    // switch(grade){
    //     case 'A': 
    //         printf("perfect!\n");
    //         break;
    //     case 'B':
    //         printf("You did good!\n");
    //         break;
    //     case 'C':
    //         printf("You did okay!\n");
    //         break;
    //     case 'D':
    //         printf("At least it's not an F!\n");
    //         break;
    //     case 'F':
    //         printf("You failed you idiot\n");
    //         break;
    //     default:
    //         printf("Please enter only valid grades\n");
    // }


    // char unit;
    // float temp;

    // printf("\nIs the temperature in (F) or (C)?: ");
    // scanf("%c", &unit);

    // unit = toupper(unit);

    // if(unit == 'C'){
    //     printf("Enter the temp in Celsius: ");
    //     scanf("%f", &temp);
    //     temp = (temp * 9/5 ) + 32;
    //     printf("\nThe Temp in Farenheit is: %.1f", temp);
    // } 
    // else if(unit == 'F'){
    //     printf("Enter the temp in farenheit: ");
    //     scanf("%f", &temp);
    //     temp = ((temp - 32) * 5) /  9;
    //     printf("\nThe Temp in Celsius  is: %.1f", temp);
    // }
    // else{
    //     printf("\n &c is not a valid unit of measurement", unit);
    // }


    // char operator;
    // double num1;
    // double num2;
    // double result;

    // printf("\nEnter an operator (+ - * /): ");
    // scanf("%c", &operator);

    // printf("Enter number 1: ");
    // scanf("%lf", &num1);

    // printf("Enter number 2: ");
    // scanf("%lf", &num2);

    // switch(operator) {
    //     case '+':
    //         result = num1 + num2;
    //         printf("\nresult: %lf", result);
    //         break;
    //     case '-':
    //         result = num1 - num2;
    //         printf("\nresult: %lf", result);
    //         break; 
    //     case '*':
    //         result = num1 * num2;
    //         printf("\nresult: %lf", result);
    //         break; 
    //     case '/':
    //         result = num1 / num2;
    //         printf("\nresult: %lf", result);
    //         break; 
    //     default: 
    //         printf("%c is not valid", operator);
    // }

    // logical operators = && (AND) checks if two condttions are true

    // float temp = 24;
    // bool sunny = true; 

    // if(temp >= 0 && temp <= 30 && sunny){
    //     printf("\nThe weather is good!");
    // }
    // else{
    //     printf("\nThe weather is bad!");
    // }


    // logical operator = || (OR) checks if at least one conditon is true

    //  float temp = -1000;
    

    // if(temp <= 0 || temp >= 30){
    //     printf("\nThe weather is bad!");
    // }
    // else{
    //     printf("\nThe weather is good!");
    // }


    // logical operator = ! (NOT) reverses the state of a condition 

    // bool sunny = true;

    // if(!sunny) {
    //     printf("\nIt's sunny outside!");
    // }
    // else{
    //     printf("\nIt's cloudy outside");
    // }



    




    
// test
 
