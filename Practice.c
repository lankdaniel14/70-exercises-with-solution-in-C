#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php

int main()
{

    // ! Exc 1 --------------------

    // printf("\tname: Daniel Lonkry\n \tBirth date: May 08, 2000\n \tmobile number: 058-42424242\n");

    // ! Exc 2 --------------------

    // printf("\n \tUsing GCC version: %s\n", __VERSION__);

    // ! Exc 3 --------------------

    // printf("######\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#####\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#\n");

    // ! Exc 4 -------------------

    // char x = 'X';
    // char m = 'M';
    // char l = 'L';

    // printf("The reverse of %c,%c,%c is: %c,%c,%c", x, m, l, l, m, x);

    // ! Exc 5 --------------------

    // int Height = 7;
    // int width = 5;

    // int P = Height * width;
    // printf("\nThe perimeter of the rectangle is: %d\n", P);

    // ! Exc 6 --------------------

    // double M_PIE = 3.14159265;

    // printf("\nHello! Enter Circle radius - ");
    // int R;
    // scanf("%d", &R);
    // double RPow = pow(R, 2);
    // double CP = M_PIE * RPow;

    // printf("The circle perimeter is: %.2f", CP);

    // ! Exc 7 --------------------

    // int a = 125, b = 12345;
    // long ax = 1234567890;
    // short s = 4043;
    // float x = 2.13459;
    // double dx = 1.1415927;
    // char c = 'W';
    // unsigned long ux = 2541567890;

    // printf("a + c =  %d\n", a + c);
    // printf("x + c = %f\n", x + c);
    // printf("dx + x = %f\n", dx + x);
    // printf("((int) dx) + ax =  %ld\n", ((int)dx) + ax);
    // printf("a + x = %f\n", a + x);
    // printf("s + b =  %d\n", s + b);
    // printf("ax + b = %ld\n", ax + b);
    // printf("s + c =  %hd\n", s + c);
    // printf("ax + c = %ld\n", ax + c);
    // printf("ax + ux = %lu\n", ax + ux);

    // ! Exc 8 --------------------

    // int days;
    // printf("Enter number of days: ");
    // scanf("%d", &days);

    // int years, weeks;

    // // Converts days to years, weeks and days
    // years = days / 365;
    // weeks = (days % 365) / 7;
    // printf("Years: %d\n", years);
    // printf("Weeks: %d\n", weeks);

    // ! Exc 9 --------------------

    // int num1, num2;
    // printf("Write Two integers that you want to sum?");
    // scanf("%d",num1);
    // scanf("%d",num2);

    // int sum = num1+num2;

    // printf("The sum is - %d",sum);

    //     //! Exc 10
    //      int x, y;
    //     printf("Hello! Enter two numbers: ");

    //     scanf("%d", &y);
    //     scanf("%d", &x);

    //     int multi = x*y;

    //     printf("The multiply is - %d", multi);

    // ! Exc 11 --------------------

    // int Weightnum1, Weightnum2, q1, q2;

    // printf("Enter Weight of first product");
    // scanf("%d", &Weightnum1);
    // printf("Enter quantity of first product");
    // scanf("%d", &q1);
    // printf("Enter Weight of second product");
    // scanf("%d", &Weightnum2);
    // printf("Enter quantity of second product");
    // scanf("%d", &q2);

    // int totalq = q1 + q2;
    // double sumWeight = (Weightnum1 * q1) + (Weightnum2 * q2);
    // double avgwe = sumWeight / totalq;

    // printf("The avg weight is - %.2f", avgwe);

    // ! Exc 12 --------------------

    // int ID, WorkingH, WorkPH;

    // printf("Enter Wroker ID - Max 10 Chars\t");
    // scanf("%d", &ID);
    // printf("\nEnter Working hours total\t");
    // scanf("%d", &WorkingH);
    // printf("\nEnter Salary Per hour\t");
    // scanf("%d", &WorkPH);

    // double salary = WorkingH * WorkPH;

    // printf("\nWorker number %d \nmonthly paycheck is - %.2f", ID, salary);

    // ! Exc 13 --------------------

    // printf("\nEnter 3 numbers and let me tell you who is the biggest\t");
    // int first, second, third;
    // scanf("%d", &first);
    // scanf("%d", &second);
    // scanf("%d", &third);

    // if (first > second && first > third)
    // {
    //     printf("Biggest number is - %d", first);
    // }

    // if (first < second && second > third)
    // {
    //     printf("Biggest number is - %d", second);
    // }

    // printf("Biggest number is - %d", third);

    // ! Exc 14 --------------------

    // int x;
    // float y;
    // printf("Input total distance in km: ");
    // scanf("%d", &x);
    // printf("Input total fuel spent in liters: ");
    // scanf("%f", &y);
    // printf("Average consumption (km/lt) %.3f ", x / y);
    // printf("\n");

    // ! Exc 15 --------------------

    // printf("This Progrem Calculates distance between two points on a graph");
    // printf("Enter first point -- X -> Y");
    // int x1, y1;
    // scanf("%d", &x1);
    // scanf("%d", &y1);

    // printf("Enter second point -- X -> Y");
    // int x2, y2;
    // scanf("%d", &x2);
    // scanf("%d", &y2);

    // int pow1 = pow((x1 - x2),2);
    // int pow2 = pow((y1 - y2),2);

    // double D = sqrt(pow1 + pow2);

    // printf("The Answer is - %.2f", D);

    // ! Exc 16 --------------------

    // printf("Enter an amount\t");
    // int amount;
    // scanf("%d", &amount);

    // if (amount <= 0)
    // {
    //     printf("Invalid amount entered.\n");
    //     return 1;
    // }

    // int hundreds, fifties, twenties, tens, fives, twos, ones;
    // hundreds = amount / 100;
    // amount %= 100;

    // fifties = amount / 50;
    // amount %= 50;

    // twenties = amount / 20;
    // amount %= 20;

    // tens = amount / 10;
    // amount %= 10;

    // fives = amount / 5;
    // amount %= 5;

    // twos = amount / 2;
    // amount %= 2;

    // ones = amount;

    // printf("There are:\n");
    // printf("%d Note(s) of 100.00\n", hundreds);
    // printf("%d Note(s) of 50.00\n", fifties);
    // printf("%d Note(s) of 20.00\n", twenties);
    // printf("%d Note(s) of 10.00\n", tens);
    // printf("%d Note(s) of 5.00\n", fives);
    // printf("%d Note(s) of 2.00\n", twos);
    // printf("%d Note(s) of 1.00\n", ones);

    // ! Exc 17 --------------------

    // printf("Enter an amount of seconds");
    // int seconds;
    // scanf("%d", &seconds);

    // int hours = seconds / 3600;
    // seconds -= (hours * 3600);

    // int min = seconds / 60;
    // seconds -= (min*60);

    // printf("H:M:S - %d,%d,%d", hours, min, seconds);

    // ! Exc 18 --------------------

    // printf("Enter an amount of days");
    // int daysSum, years, month, days;

    // scanf("%d", &daysSum);

    // years = daysSum / 365;
    // daysSum = daysSum % 365;

    // month = daysSum / 30;
    // daysSum = daysSum % 30;

    // printf("%d Years\n %d Month\n %d days", years, month, daysSum);

    /* ChatGpt Code -----------

    printf("Enter an amount of days: ");
    int daysSum, years, months, days;

    scanf("%d", &daysSum);

    years = daysSum / 365;
    daysSum = daysSum % 365;

    months = daysSum / 30;
    daysSum = daysSum % 30;

    days = daysSum;

    printf("%d Years\n%d Months\n%d Days", years, months, days);
*/

    // ! Exc 19 --------------------

    // printf("Enter 4 integers \n");
    // int p, q, r, s;

    // printf("Enter p -\t");
    // scanf("%d", &p);

    // printf("Enter q -\t");
    // scanf("%d", &q);

    // printf("Enter r -\t");
    // scanf("%d", &r);

    // printf("Enter s -\t");
    // scanf("%d", &s);

    // if (q > r && s > p && (r + s) > (p + q))
    // {
    //     printf("Correct values");
    // }
    // else
    // {
    //     printf("Wrong values");
    // }

    // ! Exc 20 --------------------

    // double a, b, c, pr1;
    // printf("\nInput the first number(a): ");
    // scanf("%lf", &a);
    // printf("\nInput the second number(b): ");
    // scanf("%lf", &b);
    // printf("\nInput the third number(c): ");
    // scanf("%lf", &c);

    // pr1 = (b * b) - (4 * (a) * (c));

    // if (pr1 > 0 && a != 0)
    // {
    //     double x, y;
    //     pr1 = sqrt(pr1);
    //     x = (-b + pr1) / (2 * a);
    //     y = (-b - pr1) / (2 * a);
    //     printf("Root1 = %.5lf\n", x);
    //     printf("Root2 = %.5lf\n", y);
    // }
    // else
    // {
    //     printf("\nImpossible to find the roots.\n");
    // }

    // ! Exc 21 --------------------

    // printf("Enter an integer - ");
    // int num;
    // scanf("%d", &num);

    // if (num > 80 || num < 0)
    // {
    //     printf("Error - Wrong number");
    // }

    // if (num >= 0 && num < 20)
    // {
    //     printf("In the range - [0, 19]");
    // }
    // if (num >= 20 && num < 39)
    // {
    //     printf("In the range - [20, 39]");
    // }
    // if (num >= 40 && num < 59)
    // {
    //     printf("In the range - [40, 59]");
    // }
    // if (num >= 60 && num <= 80)
    // {
    //     printf("In the range - [60, 80]");
    // }

    /* ChatGpt Code ---------------------
       printf("Enter an integer - ");
    int num;
    scanf("%d", &num);

    if (num > 80 || num < 0) {
        printf("Error - Wrong number\n");
    } else {
        int range = num / 20;
        switch (range) {
            case 0:
                printf("In the range - [0, 19]\n");
                break;
            case 1:
                printf("In the range - [20, 39]\n");
                break;
            case 2:
                printf("In the range - [40, 59]\n");
                break;
            case 3:
                printf("In the range - [60, 80]\n");
                break;
            default:
                printf("Error - Wrong number\n");
        }
    }

*/

    // ! Exc 22 --------------------

    // int first, Second, Third, Fourth, Fifth;

    // printf("Write 5 numbers \n");

    // printf("First - ");
    // scanf("%d", &first);

    // printf("Second - ");
    // scanf("%d", &Second);

    // printf("Third - ");
    // scanf("%d", &Third);

    // printf("Fourth - ");
    // scanf("%d", &Fourth);

    // printf("Fifth - ");
    // scanf("%d", &Fifth);

    // int sum = 0;

    // if (first % 2 != 0)
    // {
    //     sum += first;
    // }

    // if (Second % 2 != 0)
    // {
    //     sum += Second;
    // }

    // if (Third % 2 != 0)
    // {
    //     sum += Third;
    // }

    // if (Fourth % 2 != 0)
    // {
    //     sum += Fourth;
    // }

    // if (Fifth % 2 != 0)
    // {
    //     sum += Fifth;
    // }

    // printf("The Total sum of all integers is - %d", sum);

    // ChatGpt code ------------

    //     int numbers[5];
    //     int sum = 0;

    //     printf("Write 5 numbers:\n");

    //     for (int i = 0; i < 5; i++) {
    //         printf("Number %d - ", i + 1);
    //         scanf("%d", &numbers[i]);

    //         if (numbers[i] % 2 != 0) {
    //             sum += numbers[i];
    //         }
    //     }

    //     printf("The total sum of odd integers is: %d\n", sum);
    // }

    // ! Exc 23 --------------------

    // float x, y, z, P, A;
    // printf("\nInput the first number: ");
    // scanf("%f", &x);
    // printf("\nInput the second number: ");
    // scanf("%f", &y);
    // printf("\nInput the third number: ");
    // scanf("%f", &z);

    // if (x < (y + z) && y < (x + z) && z < (y + x))
    // {
    //     P = x + y + z;
    //     printf("\nPerimeter  = %.1f\n", P);
    // }
    // else
    // {
    //     printf("Not possible to create a triangle..!");
    // }

    // ! Exc 24 --------------------

    // int first, second;
    // printf("Write two intgers -\n");
    // printf("First - ");
    // scanf("%d", &first);
    // printf("Second - ");
    // scanf("%d", &second);

    // if ((first % second == 0) || (second % first) == 0)
    // {
    //     printf("Multiplied!");
    // }
    // else
    // {
    //     printf("Not Multiplied!");
    // }

    // ! Exc 25 --------------------

    // printf("Write a number between 1-12 \n");
    // int num;
    // scanf("%d", &num);
    // switch (num)
    // {
    // case 1:
    //     printf("January\n");
    //     break;
    // case 2:
    //     printf("February\n");
    //     break;
    // case 3:
    //     printf("March\n");
    //     break;
    // case 4:
    //     printf("April\n");
    //     break;
    // case 5:
    //     printf("May\n");
    //     break;
    // case 6:
    //     printf("June\n");
    //     break;
    // case 7:
    //     printf("July\n");
    //     break;
    // case 8:
    //     printf("August\n");
    //     break;
    // case 9:
    //     printf("September\n");
    //     break;
    // case 10:
    //     printf("October\n");
    //     break;
    // case 11:
    //     printf("November\n");
    //     break;
    // case 12:
    //     printf("December\n");
    //     break;
    // default:
    //     printf("Invalid input. Please enter a number between 1 to 12.\n");
    // }

    // ! Exc 26  --------------------

    // printf("this program prints all even numbers in a range that you decide");

    // int start, end;
    // printf("\nEnter start number - ");
    // scanf("%d", &start);
    // printf("\nEnter end number - ");
    // scanf("%d", &end);

    // for (int i = start; i < end; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d ,\t", i);
    //     }
    // }

    // ! Exc 27 --------------------

    // printf("Enter 5 numbers\n");
    // int positive = 0, negative = 0, current;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nEnter %d number - ", i + 1);
    //     scanf("%d", &current);

    //     if (current > 0)
    //     {
    //         positive++;
    //     }
    //     else
    //     {
    //         negative++;
    //     }
    // }

    // printf("\nYou have enterd %d positive numbers \n and %d negative numbers", positive, negative);

    // ! Exc 28 --------------------

    // printf("Enter 5 numbers\n");
    // int positive = 0, negative = 0, current, sum = 0;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nEnter %d number - ", i + 1);
    //     scanf("%d", &current);

    //     if (current > 0)
    //     {
    //         positive++;
    //         sum += current;
    //     }
    // }

    // int avg = sum / positive;

    // printf("the avg is %d, and number of positive numbers is %d", avg, positive);

    // ! Exc 29 --------------------

    // printf("Enter 5 numbers\n");
    // int odd, odd_sum=0, current;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nEnter %d number - ", i + 1);
    //     scanf("%d", &current);

    //     if (current % 2 != 0)
    //     {
    //         odd_sum += current;
    //     }
    // }

    // printf("Odd num number is - %d", odd_sum);

    // ! Exc 30 --------------------

    // printf("Enter a number (Max is 10) - ");
    // int number, pownum;
    // scanf("%d", &number);

    // for (int i = 0; i < number; i++)
    // {
    //     pownum = pow(number, i);
    //     printf("\n%d in the power of %d is - %d", number, i, pownum);
    // }

    // ! Exc 31 --------------------

    // printf("Enter a number - ");
    // int number;
    // scanf("%d", &number);

    // if (number % 2 == 0 && number > 0)
    // {
    //     printf("Positive even");
    // }
    // if (number % 2 == 0 && number < 0)
    // {
    //     printf("Negative even");
    // }
    // if (number % 2 != 0 && number > 0)
    // {
    //     printf("Positive odd");
    // }
    // if (number % 2 != 0 && number < 0)
    // {
    //     printf("Negative odd");

    // }

    // ! Exc 32 --------------------

    // int x, i;
    // printf("Input an integer: ");
    // scanf("%d", &x);

    // for (i = 1; i <= 100; i++)
    // {
    //     if ((i % x) == 3)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // ! Exc 33 --------------------

    // int numbers[5];
    // int max = 0;
    // int position = 0;

    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     printf("Enter a number");
    //     scanf("%d", &numbers[i]);
    //     if (numbers[i] > max)
    //     {
    //         max = numbers[i];
    //         position = i;
    //     }
    // }

    // printf("The biggest number is %d \n and his position is %d", max, position + 1);

    // ! Exc 34 --------------------

    // printf("Enter Two numbers - Exmp ( 10 , 2)");
    // int first, second, sum = 0;
    // scanf("%d", &first);
    // scanf("%d", &second);

    // while (second < first)
    // {
    //     printf("Enter a number bigger then the first one");
    //     scanf("");
    //     scanf("%d", &second);
    // }

    // for (int i = first; i < second; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //         printf("\n%d", i);
    //     }
    // }

    // printf("\nThe sum is - %d ", sum);

    // ! Exc 35 --------------------

    // int x, y, i, total = 0;
    // printf("\nInput a pair of numbers (for example 10,2 : 2,10):");
    // printf("\nInput first number of the pair: ");
    // scanf("%d", &x);
    // printf("\nInput second number of the pair: ");
    // scanf("%d", &y);

    // if (x > y)
    // {
    //     printf("The pair is in descending order!");
    // }
    // else
    // {
    //     printf("The pair is in ascending order!");
    // }
    // printf("\n");

    // ! Exc 36 --------------------

    // printf("Guess the password game");
    // int password = 12345;
    // int guess;
    // printf("\nEnter Your password guess");
    // scanf("%d", &guess);

    // while (guess != password)
    // {
    //     printf("\nEnter Your password guess again");
    //     scanf("%d", &guess);
    // }

    // printf("Great!");

    // ! Exc 37 --------------------

    // int x, y;
    // printf("Input the Coordinate(x,y): ");
    // printf("\nx: ");
    // scanf("%d", &x);
    // printf("y: ");
    // scanf("%d", &y);

    // if (x > 0 && y > 0)
    // {
    //     printf("Quadrant-I(+,+)\n");
    // }
    // else if (x > 0 && y < 0)
    // {
    //     printf("Quadrant-II(+,-)\n");
    // }
    // else if (x < 0 && y < 0)
    // {
    //     printf("Quadrant-III(-,-)\n");
    // }
    // else if (x < 0 && y > 0)
    // {
    //     printf("Quadrant-IV(-,+)\n");
    // }

    // ! Exc 38 --------------------

    // double x, y;

    // printf("Input two numbers:\n");
    // printf("x: ");
    // scanf("%lf", &x);
    // printf("y: ");
    // scanf("%lf", &y);

    //     if (y != 0)
    // {
    //     double result = x / y;
    //     printf("Result: %.1lf\n", result);
    // }
    // else
    // {
    //     printf("Division is not possible.\n");
    // }

    // ! Exc 39 --------------------

    // printf("Enter a range of numbers - we will calculate the sum of all numbers except those who wont divide by 17");
    // printf("\n Enter the first number -");
    // int first, second;
    // scanf("%d", &first);
    // printf("\nEnter the second number -");
    // scanf("%d", &second);

    // while (second < first)
    // {
    //     printf("Enter a number bigger then the first one");
    //     scanf("");
    //     scanf("%d", &second);
    // }

    // int sum = 0;

    // for (int i = first; i <= second; i++)
    // {
    //     if ( i%17 != 0)
    //     {
    //         sum += i;
    //     }
    // }

    // printf("\nThe total sum of all numbers that wont divide by 17 is - %d ",sum);

    // ! 40 --------------------

    // int x, y, temp, i, sum = 0;
    // printf("\nInput the first integer: ");
    // scanf("%d", &x);
    // printf("\nInput the second integer: ");
    // scanf("%d", &y);
    // if (x > y)
    // {
    //     temp = y;
    //     y = x;
    //     x = temp;
    // }

    // for (i = x + 1; i < y; i++)
    // {
    //     if ((i % 7) == 2 || (i % 7) == 3)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // ! 41 --------------------

    // printf("Enter how many lines you want");
    // int lines;
    // scanf("%d", &lines);
    // int counter=1;
    // for (int i = 0; i <= lines; i++)
    // {
    //     printf("\n");
    //     for (int j = 0; j < 3; j++,counter++)
    //     {
    //         printf("%d ", counter);
    //     }
    // }

    // ! 42 -------------------- (ChatGPT)

    // printf("Enter how many lines you want");
    // int lines;
    // scanf("%d", &lines);
    // // for (int i = 0; i <= lines; i++, counter++)
    // // {
    // //     printf("\n");
    // //     for (int j = 0; j < 3; j++)
    // //     {
    // //         printf(" %n ,%n ,%n", i, pow(i, 2), pow(i, 3));
    // //     }
    // // }

    // // * ChatGpt Code

    // for (int i = 1; i <= lines; i++)
    // {
    //     printf("%d %d %d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    // }

    // ! Exc 43 --------------------

    // printf("Enter how many lines you want");
    // int lines;
    // scanf("%d", &lines);
    // printf("Enter how many numbers each line you want");
    // int cul;
    // scanf("%d", &cul);
    // int counter = 1;
    // for (int i = 0; i <= lines; i++)
    // {
    //     printf("\n");
    //     for (int j = 0; j < cul; counter++, j++)
    //     {
    //         printf("%d ", counter);
    //     }
    // }

    // ! Exc 44 --------------------

    // int grade, sum = 0, counter = 0;
    // do
    // {
    //     printf("Enter a grade (-1 to calculate average): ");
    //     scanf("%d", &grade);
    //     if (grade >= 0)
    //     {
    //         sum += grade;
    //         counter++;
    //     }
    // } while (grade >= 0);

    // avg(sum, counter);

    // ! Exc 45 -------------------- (ChatGPT)

    // int S = 50;
    // double sum = 0.0; // Use a double variable for the sum to handle fractions

    // for (int i = 1; i <= S; i++)
    // {
    //     double dvi = 1.0 / i; // Use a double variable for the reciprocal
    //     sum += dvi;
    // }

    // printf("%.1f", sum); // Use %lf format specifier for a double

    // ! Exc 46 --------------------

    // double s = 0, j = 1, d, i;

    // for (i = 1; i <= 7; i += 2)
    // {
    //     d = (i / j);
    //     s += d;
    //     j = j * 2;
    // }
    // printf("Value of series: %.2lf\n", s);

    // ! Exc 47 --------------------

    // printf("Write a number from 0-100\n");
    // int number;
    // scanf("%d", &number);
    // printf("\nAll the divisor of 45 are: ");

    // for (int i = 1; i <= number; i++) // ! Cant divide by zero!
    // {
    //     if (number % i == 0)
    //     {
    //         printf("\n%d ",i);
    //     }
    // }

    // ! Exc 48 -------------------- (ChatGPT)

    // ! Input the length of the array
    // printf("Enter the length of the array: ");
    // int n;
    // scanf("%d", &n);

    // ! Seed the random number generator
    // srand(time(NULL));

    // ! Create an array of the specified length
    // int arr[n];

    // ! Fill the array with random numbers between -100 and 100
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = rand() % 201 - 100; // Generate a random number between -100 and 100
    // }

    // ! Print the original array
    // printf("Original array: ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    // ! Replace negative numbers and zeros with 100
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] <= 0)
    //     {
    //         arr[i] = 100;
    //     }
    // }

    // ! Print the modified array
    // printf("Modified array: ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    // ! Exc 49 --------------------

    // printf("Enter a number\n");
    // int first;
    // scanf("%d", &first);

    // int number[7];
    // number[0] = first;
    // printf("%d, ", number[0]);

    // for (int i = 1; i < sizeof(number) / sizeof(number[0]); i++)
    // {
    //     number[i] = number[i - 1] * 3;
    //     printf("%d, ", number[i]);
    // }

    // ! Exc 50 --------------------

    // int numbers[5];
    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     scanf("%d", &numbers[i]);
    // }
    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     if (numbers[i] < 5)
    //     {
    //         printf("Arr[%d] = %d\n", i, numbers[i]);
    //     }
    // }

    // ! Exc 51 --------------------

    // int numbers[5];

    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     printf("Enter number in position [%d] - ", i);
    //     scanf("%d", &numbers[i]);
    // }

    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     printf("\n%d", numbers[i]);
    // }

    // swap(&numbers[0], &numbers[4]); // * this is how to change pointers not values
    // swap(&numbers[1], &numbers[3]);

    // printf("\n");

    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     printf("\n%d", numbers[i]);
    // }

    // ! Exc 52 --------------------

    // int numbers[5];
    // int Smallest_position =0 ;

    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     printf("Enter number in position [%d] - ", i);
    //     scanf("%d", &numbers[i]);
    // }

    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {

    //     if (numbers[i] < numbers[Smallest_position])
    //     {
    //         Smallest_position = i;
    //     }
    // }

    // printf("Smallest number you entered is %d and its position is %d", numbers[Smallest_position], Smallest_position);

    // ! Exc 53 --------------------

    // float principle, rate, time, simple_interest;

    // printf("Input principle, Rate of interest (as a percentage), and Time (in years) to find simple interest:\n");
    // scanf("%f %f %f", &principle, &rate, &time);

    // rate = rate / 100;

    // simple_interest = principle * rate * time;

    // printf("Simple interest = %.2f\n", simple_interest);

    // ! Exc 54 --------------------

    // printf("Enter cm you want to see in inches - ");
    // float cm, inch;
    // scanf("%f", &cm);

    // inch = cm / 2.54;

    // printf("Distance of %.1f cms is = %.1f inches", cm, inch);

    // ! Exc 55 --------------------
    // printf("enter two numbers to swap - ");
    // int x, y;
    // scanf("%d %d", &x, &y);

    // printf("\n Before Swaping - %d:%d", x, y);
    // x = x + y;
    // y = x - y;
    // x = x - y;
    // printf("\n after Swaping - %d:%d", x, y);

    // ! Exc 56 --------------------

    // int a, b;
    // printf("Read the integer from keyboard-");
    // scanf("%d", &a);
    // printf("\nInteger value = %d ", a);
    // a <<= 2;
    // b = a;
    // printf("\nThe left shifted data is = %d ", b);

    // ! Exc 57 --------------------

    // int n, reverse = 0, remainder;

    // printf("Enter an integer: ");
    // scanf("%d", &n);

    // while (n != 0)
    // {
    //     remainder = n % 10;
    //     reverse = reverse * 10 + remainder;
    //     n /= 10;
    // }

    // printf("Reversed number = %d", reverse);

    // ! Exc 58 --------------------

    // double numbers[4];
    // int Biggest_Pos = 0, Smallest_Pos=0;
    // printf("Enter four numbers - ");

    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     scanf("%lf", &numbers[i]);
    //     if (numbers[i]>numbers[Biggest_Pos])
    //     {
    //        Biggest_Pos = i;
    //     }
    //      if (numbers[i]<numbers[Smallest_Pos])
    //     {
    //        Smallest_Pos = i;
    //     }

    // }

    // double diff = numbers[Biggest_Pos] - numbers[Smallest_Pos];

    // printf("The Diff is - %.2f ",diff);

    // ! Exc 59 --------------------

    // int num, i, sum = 0;
    // printf("Input any number: ");
    // scanf("%d", &num);
    // printf("1 + ");
    // for (i = 2; i <= num - 1; i++)
    //     printf(" 1/%d +", i);
    // for (i = 1; i <= num; i++)
    //     sum = sum + i;
    // printf(" 1/%d", num);
    // printf("\nSum = 1/%d", sum + 1 / num);

    // ! Exc 60 --------------------

    // enum week
    // {
    //     Sun,
    //     Mon,
    //     Tue,
    //     Wed,
    //     Thu,
    //     Fri,
    //     Sat
    // };
    // printf("Sun = %d", Sun);
    // printf("\nMon = %d", Mon);
    // printf("\nTue = %d", Tue);
    // printf("\nWed = %d", Wed);
    // printf("\nThu = %d", Thu);
    // printf("\nFri = %d", Fri);
    // printf("\nSat = %d", Sat);

    // ! Exc 61 --------------------

    // printf("Enter a number that you want in Sin(1/x): ");
    // int num;

    // if (scanf("%d", &num) != 1)
    // {
    //     printf("Failed to read integer.\n");
    // }
    // else if (num == 0)
    // {

    //     printf("Cannot divide by zero.\n");
    // }
    // else
    // {
    //     double res = sin(1 / (double)num);

    //     printf("The Answer is = %.4f", res);
    // }

    // ! Exc 62 --------------------

    // printf("Enter a number that is not greater then 500");
    // int num = scanf("%d", &num);
    // int sum = 0;

    // if (num > 500)
    // {
    //     printf("The number is greater then 500");
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     sum += num % 10;
    //     num /= 10;
    // }

    // printf("The answer is - %d",sum);

    //* Chat GPT fix

    //   int num, sum = 0;

    // printf("Enter a number that is not greater than 500: ");
    // scanf("%d", &num);

    // if (num > 500 || num < 0) {
    //     printf("The number is not valid. It must be between 0 and 500.\n");
    // } else {
    //     while (num > 0) {
    //         sum += num % 10;
    //         num /= 10;
    //     }

    //     printf("The answer is - %d\n", sum);
    // }

    // ! Exc 62 --------------------

    // int i, j, n, sum_int = 0;

    // printf("Input a positive number less than 100: \n");
    // scanf("%d", &n);

    // if (n < 1 || n >= 100)
    // {
    //     printf("Wrong input\n");
    //     return 0;
    // }

    // j = 1;
    // for (i = 1; j <= n; i++)
    // {
    //     sum_int += j * j * j * j;
    //     j += i;
    // }

    // printf("Sum of the series is %d\n", sum_int);

    // ! Exc 64 --------------------

    // int input, count = 0, min = 0, max = 0;
    // double sum = 0.0;

    // while (1) {
    //     printf("Input a positive integer: ");
    //     scanf("%d", &input);

    //     // Break the loop if input is zero or negative
    //     if (input <= 0) {
    //         break;
    //     }

    //     // Increment the count of positive numbers
    //     count++;

    //     // Initialize min and max with the first positive number
    //     if (count == 1) {
    //         min = input;
    //         max = input;
    //     }

    //     // Update min and max values
    //     if (input < min) {
    //         min = input;
    //     }
    //     if (input > max) {
    //         max = input;
    //     }

    //     // Add the input to the sum
    //     sum += input;
    // }

    // if (count > 0) {
    //     double average = sum / count;
    //     printf("Number of positive values entered is %d\n", count);
    //     printf("Maximum value entered is %d\n", max);
    //     printf("Minimum value entered is %d\n", min);
    //     printf("Average value is %.4f\n", average);
    // } else {
    //     printf("No positive integers were entered.\n");
    // }

    // ! Exc 65 --------------------

    // int i, j, flag, ip = 0;

    // printf("The prime numbers between 1 and 199 are:\n");

    // for (i = 2; i < 199; i++)
    // {
    //     flag = 1;

    //     for (j = 2; j <= i / 2 && flag == 1; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             flag = 0;
    //         }
    //     }

    //     if (flag == 1)
    //     {
    //         printf("%5d ", i);
    //         ip++;

    //         if (ip % 10 == 0)
    //         {
    //             printf("\n");
    //         }
    //     }
    // }

    // printf("\n");

    // ! Exc 66 --------------------

    
    FILE *fp;
    double randNum;

    srand(time(NULL));

    fp = fopen("rand.dat", "w");
    if (fp == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    fprintf(fp, "50\n");

    for (int i = 0; i < 50; i++)
    {
        randNum = ((double)rand() / RAND_MAX) - 0.5; 
        fprintf(fp, "%.2f\n", randNum);
    }

    fclose(fp);

    return 0;
}

// void avg(int sum, int number_of_Students) // ! Exc 44
// {
//     if (number_of_Students > 0)
//     {
//         int avg = sum / number_of_Students;
//         printf("\nThe avg is - %d\n", avg);
//     }
//     else
//     {
//         printf("\nNo valid grades entered.\n");
//     }
// }

// void swap(int *x, int *y) // ! Exc 51
// {
//     int temp = *x;
// /    *x = *y;
// /   *y = temp;
// }
