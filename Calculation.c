#include <stdio.h>
int main()
{
    int any;
    int number; 
    int year;
    int mark;
    int i, fact=1, n;
    int multi, t;
    
    
    printf("1. Find out the number is Positive or Negative \a\n");
    printf("2. Find out the leap year or not\n");
    printf("3. Result letter grade\n");
    printf("4. Calculate Factorial Number\n");
    printf("5. Multiplication Table\n");
    printf("6. Find out the Prime number\n");
    printf("7. Find out the GCD or LCM number\n");
    printf("8. Summation of counting number\n");
    printf("Which program do you need to run : ");
    scanf("%d", &any);

    switch(any)
    {
        case 1: 
        {
            while (1)
            {
                printf("Enter Your Posive or Negative Number : ");
            scanf("%d", &number);
            if (number>0)
                printf("This is a Positive Number\n");
            else if (number<0)
                printf("This is a Negative Number\n");
            else
                printf("Invalid Number");
            }
            
        }
        case 2:
        {
            while (1)
            {
                printf("Enter your Year : ");
            scanf("%d", &year);
            if (year%400==0)
                printf("This is a Leap Year %d\n", year);
            else if (year==0 || year<0)
                printf("Invalid Year \n");
            else if (year%4==0 && year%100!=0)
                printf("This is a Leap Year %d\n", year);
            else
                printf("this year is not a Leap Year %d\n", year);
            }
            
        }  
        case 3:
            {
                while (1)
                {
                    printf("Enter your mark : ");
                   scanf("%d", &mark);

                    if (mark>=80 && mark<=100)
                        printf("A+ \n");
                    else if (mark>=70 && mark<80)
                        printf("A \n");
                    else if (mark>=60 && mark<70)
                        printf("A- \n");
                    else if (mark>=50 && mark<60)
                        printf("B \n");
                    else if (mark>=40 && mark<50)
                        printf("C \n");
                    else if (mark>=33 && mark<40)
                        printf("D \n");
                    else if (mark>=32 && mark<=1)
                        printf("Failed The examination \n");
                    else 
                        printf("Out of mark!!!");
                }
                   
            }
        case 4:
        {
            while (1)
            {
                printf("Enter Your factorial value : ");
                    scanf("%d", &n);

                for (i=1; i<=n; i++)
                {
                    fact = fact * i;
                }
            printf("Your factorial Value is : %d \n", fact);
            }
        }
        case 5:
        {
            while (1)
            {
                int multi, t;
                printf("Enter Multiplication value : ");
                scanf("%d", &multi);

                for (t=1; t<=10; t++)
                printf("%d X %d = %d \n", multi, t, multi*t);
            }
        }
        case 6:
        {
            while (1)
            {
            int i__, count=0, numbr;
            printf("Enter any postive number : ");
            scanf("%d", &numbr);

            for (i__=2; i__<numbr; i__++)
                if (numbr%i__==0)
                    {
                        count++;
                        break;
                    }
            if (count==0)
                printf("Prime number is : %d \n", i__);
            else 
                printf("This is not a prime number !!\n");
            }
        }
        case 7:
        {
            while (1)
            {
                int num1, num2, n1, n2, gcd, lcm, rem;
                printf("Enter 1st value : ");
                scanf("%d", &num1);

                printf("Enter 2nd value : ");
                scanf("%d", &num2);
                n1 = num1;
                n2 = num2;

                while (n2!=0)
                {
                    rem = n1 % n2;
                    n1 = n2;
                    n2 = rem;

                }
                gcd = n1;
                lcm = (num1*num2)/gcd;
                printf("Your GCD is : %d\n", gcd);
                printf("Your LCM is : %d\n", lcm);
                return 0;
            }
        }
        case 8:
        {
            while (1)
            {
                int sum=0, rem, temp, num;
                printf("Enter any value to sum : ");
                scanf("%d", &num);

                temp = num;
                while (temp!=0)
                {
                    rem = temp%10;
                    sum += rem;
                    temp /= 10;
                }
                printf("Your Answer is : %d \n", sum);
            }
        }
    
    }   

}