#include <stdio.h>
#define RED "\033[1;31m"
#define Red "\033[0;31m"
#define BLUE "\033[1;34m"
#define GREEN "\033[1;32m"
#define Yellow "\033[1;33m"
#define White "\033[0;37m"
#define DEFAULT "\033[Om"
int main ()
{
    int exit;
    int all_in_one;
    printf("1. Unit Converter\n");
    printf("2. Storage Converter\n");
    printf("3. Temperature Converter\n");
    printf("Press your button : ");
    scanf("%d", &all_in_one);
    switch (all_in_one)
    {
        case 1:
        {
            int lenth, lenth2;
            double miles, yards, Feet, Inches, Kilometers, Meters, Centimeters, Millimeters;
            printf(RED "______________________Unit Convertion_______________________\n", DEFAULT);
            printf("                                                                \n");
            printf(RED "                    ****Select Unit****\n", DEFAULT);
            printf(Red "____________________________________________________________\n", DEFAULT);
            printf(BLUE "1. Miles-(ml)\n", DEFAULT);
            printf("2. Yards-(yd)\n");
            printf("3. Feet-(ft)\n");
            printf("4. Inches-(inch)\n");
            printf("5. Kilometers-(km)\n");
            printf("6. Meters-(m)\n");
            printf("7. Centimeters-(cm)\n");
            printf("8. Millimeters-(mm)\n");
            printf(GREEN "Press integer key (1-8)........", DEFAULT);
            scanf("%d", &lenth);
            printf("                                                                \n");
            printf(RED "__________________Select Unit to Convert____________________\n", DEFAULT);
    //converted lenth
            printf(BLUE "1. Miles-(ml)\n", DEFAULT);
            printf("2. Yards-(yd)\n");
            printf("3. Feet-(ft)\n");
            printf("4. Inches-(inch)\n");
            printf("5. Kilometers-(km)\n");
            printf("6. Meters-(m)\n");
            printf("7. Centimeters-(cm)\n");
            printf("8. Millimeters-(mm)\n");
            printf(GREEN "Press integer key (1-8)........", DEFAULT);
            scanf("%d", &lenth2);
            printf(Red "____________________________________________________________\n", DEFAULT);
            printf(Red "                                                               \n", DEFAULT);

            switch (lenth)
            {
                printf(Red "____________________________________________________________\n", DEFAULT);
                case 1: printf(Yellow "       You Selected {Miles} Convert to", DEFAULT);
                    break;

                printf(Red "____________________________________________________________\n", DEFAULT);
                case 2: printf(Yellow "       You Selected {Yards} Convert to", DEFAULT);
                    break;

                printf(Red "____________________________________________________________\n", DEFAULT);
                case 3: printf(Yellow "       You Selected {Feet} Convert to", DEFAULT);
                    break;

                printf(Red "____________________________________________________________\n", DEFAULT);
                case 4: printf(Yellow "       You Selected {Inches} Convert to", DEFAULT);
                    break;

                printf(Red "____________________________________________________________\n", DEFAULT);
                case 5: printf(Yellow "       You Selected {Kilometers} Convert to", DEFAULT);
                    break;

                printf(Red "____________________________________________________________\n", DEFAULT);
                
                case 6: printf(Yellow "       You Selected {Meters} Convert to", DEFAULT);
                    break;

                printf(Red "____________________________________________________________\n", DEFAULT);
                case 7: printf(Yellow "       You Selected {Centimeters} Convert to", DEFAULT);
                    break;
                    
                printf(Red "____________________________________________________________\n", DEFAULT);
                case 8: printf(Yellow "       You Selected {Millimeters} Convert to", DEFAULT);
                    break;
            }
            
            switch (lenth2)
            {
                case 1: printf(" {Miles}\n");
                 printf(Red "____________________________________________________________\n", DEFAULT);
                    break;
                case 2: printf(" {Yards}\n");
                 printf(Red "____________________________________________________________\n", DEFAULT);
                    break;
                case 3: printf(" {Feet}\n");
                 printf(Red "____________________________________________________________\n", DEFAULT);
                    break;
                case 4: printf(" {Inches}\n");
                 printf(Red "____________________________________________________________\n", DEFAULT);
                    break;
                case 5: printf(" {Kilometers}\n");
                 printf(Red "____________________________________________________________\n", DEFAULT);
                    break;
                case 6: printf(" {Meters}\n");
                 printf(Red "____________________________________________________________\n", DEFAULT);
                    break;
                case 7: printf(" {Centimeters}\n");
                 printf(Red "____________________________________________________________\n", DEFAULT);
                    break;
                case 8: printf(" {Millimeters}\n");
                 printf(Red "____________________________________________________________\n", DEFAULT);
                    break;
            }
            if (lenth == 1)
            {
                printf(GREEN "Enter Miles : ", DEFAULT);
                scanf("%lf", &miles);
                if (lenth==1 && lenth2==1)
                {
                    //miles to miles
                    miles==miles;
                    printf(White "Your selected volume are equal...!!!", DEFAULT);
                    break;
                }
                    //miles to yards
                else if (lenth==1 && lenth2==2)
                {
                    yards = miles*1760;
                    printf(White "Your Yards is : %.2fyd", yards, DEFAULT);
                    break;
                }
                    //miles to feet
                else if (lenth==1 && lenth2==3)
                {
                    Feet = miles*5280;
                    printf(White "Your Feet is : %.2fft", Feet, DEFAULT);
                }
                    //miles to inches
                else if (lenth==1 && lenth2==4)
                {
                    Inches = miles*63360;
                    printf(White "Your Inches is : %.2finch", Inches, DEFAULT);
                }
                    //miles to kilometers
                else if (lenth==1 && lenth2==5)
                {
                    Kilometers = miles*1.60934;
                    printf(White "Your Kilometers is : %.5fkm", Kilometers, DEFAULT);
                }
                    //miles to meters
                else if (lenth==1 && lenth2==6)
                {
                    Meters = miles*1609.34;
                    printf(White "Your Meters is : %.3fm", Meters, DEFAULT);
                }
                    //miles to centimeters
                else if (lenth==1 && lenth2==7)
                {
                    Centimeters = miles*160934.4;
                    printf(White "Your Centimeters is : %.2fcm", Centimeters, DEFAULT);
                }
                    //miles to millimeters
                else if (lenth==1 && lenth2==8)
                {
                    Millimeters = miles*1609344;
                    printf(White "Your Millimeters is : %.0fmm", Millimeters, DEFAULT);
                }
                else 
                    printf(White "Invalid Lenth....!!!", DEFAULT);
            }
            else if (lenth==2)
            {
                
                printf(GREEN "Enter Yards : ", DEFAULT);
                scanf("%lf", &yards);
                if (lenth==2 && lenth2==1)
                {
                    //yards to miles
                    miles = yards/1760;
                    printf(White "Your Miles is : %lfml", miles, DEFAULT);
                }
                else if (lenth==2 && lenth2==2)
                {
                    //yards to yards
                    yards==yards;
                    printf(White "Your selected volume are equal...!!!", DEFAULT);
                }
                else if (lenth==2 && lenth2==3)
                {
                    //yards to feet
                    Feet = yards*3;
                    printf(White "Your Feet is : %.0fft", Feet, DEFAULT);
                }
                else if (lenth==2 && lenth2==4)
                {
                    //yards to inches
                    Inches = yards*36;
                    printf(White "Your Inches is : %.1finch", Inches, DEFAULT);
                }
                else if (lenth==2 && lenth2==5)
                {
                    //yards to kilometers
                    Kilometers = yards/1093.6132983;
                    printf(White "Your Kilometer is : %.7fkm", Kilometers, DEFAULT);
                }
                else if (lenth==2 && lenth2==6)
                {
                    //yards to meters
                    Meters = yards/1.0936132983;
                    printf(White "Your Meters is : %.5lfm", Meters, DEFAULT);
                }
                else if (lenth==2 && lenth2==7)
                {
                    //yards to centimeters
                    Centimeters = yards*91.44;
                    printf(White "Your Centimeters is : %.2lfcm", Centimeters, DEFAULT);
                }
                else if (lenth==2 && lenth2==8)
                {
                    //yards to millimeters
                    Millimeters = yards*914.4;
                    printf(White "Your Millimeters is : %.2lfmm", Millimeters, DEFAULT);
                }
                else 
                    printf(White "Invalid lenth...!!!", DEFAULT);
            }
            else if (lenth==3)
            {
                printf(GREEN "Enter Feet : ", DEFAULT);
                scanf("%lf", &Feet);
                if (lenth==3 && lenth2==1)
                {
                    //feet to miles
                    miles = Feet/5280;
                    printf(White "Your miles is : %.10lfml", miles, DEFAULT);
                }
                else if (lenth==3 && lenth2==2)
                {
                    //feet to yards
                    yards = Feet/3;
                    printf(White "Your Yards is : %.7lfyd", yards, DEFAULT);
                }
                else if (lenth==3 && lenth2==3)
                {
                    //feet to feet
                    Feet==Feet;
                    printf(White "Your selected volume are equal...!!!", DEFAULT);
                }
                else if (lenth==3 && lenth2==4)
                {
                    //feet to inches
                    Inches = Feet*12;
                    printf(White "Your Inches is : %.0lfinch", Inches, DEFAULT);
                }
                else if (lenth==3 && lenth2==5)
                {
                    //feet to kilometers
                    Kilometers = Feet/3280.839895;
                    printf(White "Your kilometers is : %.7lfkm", Kilometers, DEFAULT);
                }
                else if (lenth==3 && lenth2==6)
                {
                    //feet to meters
                    Meters = Feet/3.280839895;
                    printf(White "Your meters is : %.4lfm", Meters, DEFAULT);
                }
                else if (lenth==3 && lenth2==7)
                {
                    //feet to centimeters
                    Centimeters = Feet*30.48;
                    printf(White "Your Centimeters is : %.2lfcm", Centimeters, DEFAULT);
                }
                else if (lenth==3 && lenth2==8)
                {
                    //feet to millimeters
                    Millimeters = Feet*304.8;
                    printf(White "Your Milimeters is : %.2lfmm", Millimeters, DEFAULT);
                }
                else 
                    printf(White "Invalid lenth...!!!", DEFAULT);
            }
            else if (lenth==4)
            {
                printf(GREEN "Enter Inches : ", DEFAULT);
                scanf("%lf", &Inches);
                if (lenth==4 && lenth2==1)
                {
                    //inches to miles
                    miles = Inches/63360;
                    printf(White "Your Miles is : %.10lfml", miles, DEFAULT);
                }
                else if (lenth==4 && lenth2==2)
                {
                    //inches to yards
                    yards = Inches/36;
                    printf(White "Your Yards is : %lfyd", yards, DEFAULT);
                }
                else if (lenth==4 && lenth2==3)
                {
                    //inches to feet
                    Feet = Inches/12;
                    printf(White "Your Feet is : %.6lfft", Feet, DEFAULT);
                }
                else if (lenth==4 && lenth2==4)
                {
                    //inches to inches
                    Inches==Inches;
                    printf(White "Your selected volume are equal...!!!", DEFAULT);
                }
                else if (lenth==4 && lenth2==5)
                {
                    //inches to kilometers
                    Kilometers = Inches/39370.07874;
                    printf(White "Your Kilometers is : %.7lfkm", Kilometers, DEFAULT);
                }
                else if (lenth==4 && lenth2==6)
                {
                    //inches to meters
                    Meters = Inches/39.37007874;
                    printf(White "Your Meters is : %.4lfm", Meters, DEFAULT);
                }
                else if (lenth==4 && lenth2==7)
                {
                    //inches to centimeters
                    Centimeters = Inches*2.54;
                    printf(White "Your Centimeters is : %.2lfcm", Centimeters, DEFAULT);
                }
                else if (lenth==4 && lenth2==8)
                {
                    //inches to millimeters
                    Millimeters = Inches*25.4;
                    printf(White "Your Millimeters is : %.1lfmm", Millimeters, DEFAULT);
                }
                else 
                printf(White "Invalid lenth...!!!", DEFAULT);
            }
            else if (lenth==5)
            {
                printf(GREEN "Enter Kilometers : ", DEFAULT);
                scanf("%lf", &Kilometers);
                if (lenth==5 && lenth2==1)
                {
                    //kilometers to miles
                    miles = Kilometers/1.609344;
                    printf(White "Your Miles is : %.10lfml", miles, DEFAULT);
                }
                else if (lenth==5 && lenth2==2)
                {
                    //kilometers to yards
                    yards = Kilometers*1093.6132983;
                    printf(White "Your Yards is : %lfyd", yards, DEFAULT);
                }
                else if (lenth==5 && lenth2==3)
                {
                    //kilometers to feet
                    Feet = Kilometers*3280.839895;
                    printf(White "Your Feet is : %lfft", Feet, DEFAULT);
                }
                else if (lenth==5 && lenth2==4)
                {
                    //kilometers to inches
                    Inches = Kilometers*39370.07874;
                    printf(White "Your Inches is : %.5lfinch", Inches, DEFAULT);
                }
                else if (lenth==5 && lenth2==5)
                {
                    //kilometers to kilometers
                    Kilometers == Kilometers;
                    printf(White "Your selected volume are equal...!!!", DEFAULT);
                }
                else if (lenth==5 && lenth2==6)
                {
                    //kilometers to meters
                    Meters = Kilometers*1000;
                    printf(White "Your Meters is : %.0lfm", Meters, DEFAULT);
                }
                else if (lenth==5 && lenth2==7)
                {
                    //kilometers to centimeters
                    Centimeters = Kilometers*100000;
                    printf(White "Your Centimeters is : %.0lfcm", Centimeters, DEFAULT);
                }
                else if (lenth==5 && lenth2==8)
                {
                    //kilometers to millimeters
                    Millimeters = Kilometers*1000000;
                    printf(White "Your Millimeters is : %.0lfmm", Millimeters, DEFAULT);
                }
                else 
                    printf(White "Invalid Lenth...!!!", DEFAULT);
            }
            else if (lenth==6)
            {
                printf(GREEN "Enter Meters : ", DEFAULT);
                scanf("%lf", &Meters);
                if (lenth==6 && lenth2==1)
                {
                    //meters to miles
                    miles = Meters/1609.344;
                    printf(White "Your Miles is : %.10lfml", miles, DEFAULT);
                }
                else if (lenth==6 && lenth2==2)
                {
                    //meters to yards
                    yards = Meters*1.0936133;
                    printf(White "Your Yards is : %lfyd", yards, DEFAULT);
                }
                else if (lenth==6 && lenth2==3)
                {
                    //meters to feet
                    Feet = Meters*3.2808399;
                    printf(White "Your Feet is : %lfft", Feet, DEFAULT);
                }
                else if (lenth==6 && lenth2==4)
                {
                    //meters to inches
                    Inches = Meters*39.3700787;
                    printf(White "Your Inches is : %lfinch", Inches, DEFAULT);
                }
                else if (lenth==6 && lenth2==5)
                {
                    //meters to kilometers
                    Kilometers = Meters/1000;
                    printf(White "Your Kilometers is : %.4lfkm", Kilometers, DEFAULT);
                }
                else if (lenth==6 && lenth2==6)
                {
                    //meters to meters
                    Meters == Meters;
                    printf(White "Your selected volume are equal...!!!", DEFAULT);
                }
                else if (lenth==6 && lenth2==7)
                {
                    //meters to centimeters
                    Centimeters = Meters*100;
                    printf(White "Your Centimeters is : %.0lfcm", Centimeters, DEFAULT);
                }
                else if (lenth==6 && lenth2==8)
                {
                    //meters to millimeters
                    Millimeters = Meters*1000;
                    printf(White "Your Millimeters is : %.0lfmm", Millimeters, DEFAULT);
                }
                else 
                    printf(White "Invalid Lenth...!!!", DEFAULT);
            }
            else if (lenth==7)
            {
                printf(GREEN "Enter Centimeter : ", DEFAULT);
                scanf("%lf", &Centimeters);
                if (lenth==7 && lenth2==1)
                {
                    //centimeters to miles
                    miles = Centimeters/160934.4;
                    printf(White "Your miles is : %.10lfml", miles, DEFAULT);
                }
                else if (lenth==7 && lenth2==2)
                {
                    //centimeters to yards
                    yards = Centimeters/91.44;
                    printf(White "Your Yards is : %.10lfyd", yards, DEFAULT);
                }
                else if (lenth==7 && lenth2==3)
                {
                    //centimeters to feet
                    Feet = Centimeters/30.48;
                    printf(White "Your Feet is : %lfft", Feet, DEFAULT);
                }
                else if (lenth==7 && lenth2==4)
                {
                    //centimeters to inches
                    Inches = Centimeters/2.54;
                    printf(White "Your Inches is : %lfinch", Inches, DEFAULT);
                }
                else if (lenth==7 && lenth2==5)
                {
                    //centimeters to kilometers
                    Kilometers = Centimeters/100000;
                    printf(White "Your Kilometers is : %.5lfkm", Kilometers, DEFAULT);
                }
                else if (lenth==7 && lenth2==6)
                {
                    //centimeters to meters
                    Meters = Centimeters/100;
                    printf(White "Your Meters is : %.2lfm", Meters, DEFAULT);
                }
                else if (lenth==7 && lenth2==7)
                {
                    //centimeters to centiemters
                    Centimeters == Centimeters;
                    printf(White "Your selected volume are equal...!!!", DEFAULT);
                }
                else if (lenth==7 && lenth2==8)
                {
                    //centimeters to millimeters
                    Millimeters = Centimeters*10;
                    printf(White "Your Millimeters is : %.0lfmm", Millimeters, DEFAULT);
                }
                else 
                    printf(White "Invalid Lenth...!!!", DEFAULT);
            }
            else if (lenth==8)
            {
                printf(GREEN "Enter Millimeter : ", DEFAULT);
                scanf("%lf", &Millimeters);
                if (lenth==8 && lenth2==1)
                {
                    //millimeters to miles
                    miles = Millimeters/1609344;
                    printf(White "Your Miles is : %.15lfml", miles, DEFAULT);
                }
                else if (lenth==8 && lenth2==2)
                {
                    //millimeters to yards
                    yards = Millimeters/914.4;
                    printf(White "Your Yards is : %.10lfyd", yards, DEFAULT);
                }
                else if (lenth==8 && lenth2==3)
                {
                    //millimeters to feet
                    Feet = Millimeters/304.8;
                    printf(White "Your Feet is : %.10lfft", Feet, DEFAULT);
                }
                else if (lenth==8 && lenth2==4)
                {
                    //millimeters to inches
                    Inches = Millimeters/25.4;
                    printf(White "Your Inches is : %.10lfinch", Inches, DEFAULT);
                }
                else if (lenth==8 && lenth2==5)
                {
                    //millimeters to kilometers
                    Kilometers = Millimeters/1000000;
                    printf(White "Your kilometers is : %.6lfkm", Kilometers, DEFAULT);
                }
                else if (lenth==8 && lenth2==6)
                {
                    //millimeters to meters
                    Meters = Millimeters/1000;
                    printf(White "Your Meters is : %.3lfm", Meters, DEFAULT);
                }
                else if (lenth==8 && lenth2==7)
                {
                    //millimeters to centimeters
                    Centimeters = Millimeters/10;
                    printf(White "Your Centimeters is : %.1lfcm", Centimeters, DEFAULT);
                }
                else if (lenth==8 && lenth2==8)
                {
                    //millimeters to millimeters
                    Millimeters == Millimeters;
                    printf(White "Your selected volume are equal...!!!", DEFAULT);
                }
                else 
                    printf(White "Invalid Lenth...!!!", DEFAULT);
            }printf(Red "\n____________________________________________________________", DEFAULT);
            printf(RED "\nPress any key and hit Enter to exit...", DEFAULT);
            scanf("%d", &exit);
            break;
        
        }
        case 2:
        {
            int storage, storage2;
            double byte, bit, kilobyte, megabyte, gigabyte, terabyte, petabyte;
            printf(RED "______________________Storage Convertion_______________________\n", DEFAULT);
            printf(RED "                                                               \n", DEFAULT);
            printf("                    ****Select Storage****\n");
            printf(Red "_______________________________________________________________\n", DEFAULT);
            printf(BLUE "1. Byte-(B)\n", DEFAULT);
            printf("2. Bit-(bit)\n");
            printf("3. Kilobyte-(KB)\n");
            printf("4. Megabyte-(MB)\n");
            printf("5. Gigabyte-(GB)\n");
            printf("6. Terabyte-(TB)\n");
            printf("7. Petabyte-(PB)\n");
            printf(GREEN "Press integer key (1-7)........", DEFAULT);
            scanf("%d", &storage);
            printf(RED "                                                               \n", DEFAULT);

            printf(RED "_________________Select Storage to Convert_____________________\n", DEFAULT);
            printf(BLUE "1. Byte-(B)\n", DEFAULT);
            printf("2. Bit-(Bit)\n");
            printf("3. Kilobyte-(KB)\n");
            printf("4. Megabyte-(MB)\n");
            printf("5. Gigabyte-(GB)\n");
            printf("6. Terabyte-(TB)\n");
            printf("7. Petabyte-(PB)\n");
            printf(GREEN "Press integer key (1-7)........", DEFAULT);
            scanf("%d", &storage2);
            printf(Red "_______________________________________________________________\n", DEFAULT);
            printf(Red "                                                               \n", DEFAULT);

            switch (storage)
            {
                case 1: printf(Yellow "         You Selected {Byte} Convert to", DEFAULT);
                    break;
                case 2: printf(Yellow "         You Selected {Bit} Convert to", DEFAULT);
                    break;
                case 3: printf(Yellow "         You Selected {Kilobyte} Convert to", DEFAULT);
                    break;
                case 4: printf(Yellow "         You Selected {Megabyte} Convert to", DEFAULT);
                    break;
                case 5: printf(Yellow "         You Selected {Gigabyte} Convert to", DEFAULT);
                    break;
                case 6: printf(Yellow "         You Selected {Terabyte} Convert to", DEFAULT);
                    break;
                case 7: printf(Yellow "         You Selected {Petabyte} Convert to", DEFAULT);
                    break;
            }
            switch (storage2)
            {
                case 1: printf(" {Byte}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 2: printf(" {Bit}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 3: printf(" {Kilobyte}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 4: printf(" {Megabyte}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 5: printf(" {Gigabyte}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 6: printf(" {Terabyte}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 7: printf(" {Petabyte}\n");
                printf(Red "\n_______________________________________________________________\n", DEFAULT);
                    break;
                    
            }
            if (storage == 1)
            {
                printf(GREEN "Enter Byte : ", DEFAULT);
                scanf("%lf", &byte);
                if (storage==1 && storage2==1)
                {
                    byte == byte;
                    printf(White "Your selected storage are equal...!!!", DEFAULT);
                }
                else if (storage==1 && storage2==2)
                {
                    bit = byte*8;
                    printf(White "Your Bit is : %.0lfbits", bit, DEFAULT);
                }
                else if (storage==1 && storage2==3)
                {
                    kilobyte = byte/1000;
                    printf(White "Your Kilobyte is : %.3lfKb", kilobyte, DEFAULT);
                }
                else if (storage==1 && storage2==4)
                {
                    megabyte = byte/1000000;
                    printf(White "Your Megabytes is : %.4lfMb", megabyte, DEFAULT);
                }
                else if (storage==1 && storage2==5)
                {
                    gigabyte = byte/1000000000;
                    printf(White "Your Gigabytes is : %.5lfGb", gigabyte, DEFAULT);
                }
                else if (storage==1 && storage2==6)
                {
                    terabyte = byte/1000000000000;
                    printf(White "Your Terabytes is : %.10lfTb", terabyte, DEFAULT);
                }
                else if (storage==1 && storage2==7)
                {
                    petabyte = byte/1000000000000;
                    printf(White "Your Petabytes is : %.5lfPb", petabyte, DEFAULT);
                }
            }
            else if (storage == 2)
            {
                printf(GREEN "Enter Bit : ", DEFAULT);
                scanf("%lf", &bit);
                if (storage==2 && storage2==1)
                {
                    byte = bit/8;
                    printf(White "Your Bytes is : %.1lfB", byte, DEFAULT);
                }
                else if (storage==2 && storage2==2)
                {
                    bit == bit;
                    printf(White "Your selected storage are equal...!!!", DEFAULT);
                }
                else if (storage==2 && storage2==3)
                {
                    kilobyte = bit/8000;
                    printf(White "Your Kilobytes is : %.5lfKb", kilobyte, DEFAULT);
                }
                else if (storage==2 && storage2==4)
                {
                    megabyte = bit/8000000;
                    printf(White "Your Megabytes is : %.7lfMb", megabyte, DEFAULT);
                }
                else if (storage==2 && storage2==5)
                {
                    gigabyte = bit/8000000000;
                    printf(White "Your Gigabytes is : %.10lfGb", gigabyte, DEFAULT);
                }
                else if (storage==2 && storage2==6)
                {
                    terabyte = bit/8000000000000;
                    printf(White "Your Terabytes is : %.19lfTb", terabyte, DEFAULT);
                }
                else if (storage==2 && storage2==7)
                {
                    petabyte = bit/8000000000000000;
                    printf(White "Your Petabytes is : %.13lfPb", petabyte, DEFAULT);
                }
            }
            else if (storage == 3)
            {
                printf(GREEN "Enter Kilobytes : ", DEFAULT);
                scanf("%lf", &kilobyte);
                if (storage==3 && storage2==1)
                {
                    byte = kilobyte*1000;
                    printf(White "Your Bytes is : %.0lfB", byte, DEFAULT);
                }
                else if (storage==3 && storage2==2)
                {
                    bit = kilobyte*8000;
                    printf(White "Your Bits is : %.0lfbits", bit, DEFAULT);
                }
                else if (storage==3 && storage2==3)
                {
                    kilobyte == kilobyte;
                    printf(White "Your selected storage are equal...!!!", DEFAULT);
                }
                else if (storage==3 && storage2==4)
                {
                    megabyte = kilobyte/1000;
                    printf(White "Your Megabytes is : %.3lfMb", megabyte, DEFAULT);
                }
                else if (storage==3 && storage2==5)
                {
                    gigabyte = kilobyte/1000000;
                    printf(White "Your Gigabytes is : %.6lfGb", gigabyte, DEFAULT);
                }
                else if (storage==3 && storage2==6)
                {
                    terabyte = kilobyte/1000000000;
                    printf(White "Your Terabytes is : %.9lfTb", terabyte, DEFAULT);
                }
                else if (storage==3 && storage2==7)
                {
                    petabyte = kilobyte/1000000000000;
                    printf(White "Your Petabytes is : %.12lfPb", petabyte, DEFAULT);
                }
            }
            else if (storage == 4)
            {
                printf(GREEN "Enter Megabytes : ", DEFAULT);
                scanf("%lf", &megabyte);
                if (storage==4 && storage2==1)
                {
                    byte = megabyte*1000000;
                    printf(White "Your Bytes is : %.0lfB", byte, DEFAULT);
                }
                else if (storage==4 && storage2==2)
                {
                    bit = megabyte*8000000;
                    printf(White "Your Bits is : %.0lfbits", bit, DEFAULT);
                }
                else if (storage==4 && storage2==3)
                {
                    kilobyte = megabyte*1000;
                    printf(White "Your Kilobytes is : %.0lfKb", kilobyte, DEFAULT);
                }
                else if (storage==4 && storage2==4)
                {
                    megabyte == megabyte;
                    printf(White "Your selected storage are equal...!!!", DEFAULT);
                }
                else if (storage==4 && storage2==5)
                {
                    gigabyte = megabyte/1000;
                    printf(White "Your Gigabytes is : %.3lfGB", gigabyte, DEFAULT);
                }
                else if (storage==4 && storage2==6)
                {
                    terabyte = megabyte/1000000;
                    printf(White "Your Terabytes is : %.6lfTb", terabyte, DEFAULT);
                }
                else if (storage==4 && storage2==7)
                {
                    petabyte = megabyte/1000000000;
                    printf(White "Your Petabytes is : %.9lfPb", petabyte, DEFAULT);
                }
            }
            else if (storage == 5)
            {
                printf(GREEN "Enter Gigabytes : ", DEFAULT);
                scanf("%lf", &gigabyte);
                if (storage==5 && storage2==1)
                {
                    byte = gigabyte*1000000000;
                    printf(White "Your Bytes is : %.0lfB", byte, DEFAULT);
                }
                else if (storage==5 && storage2==2)
                {
                    bit = gigabyte*8000000000;
                    printf(White "Your Bits is ; %.0lfbits", bit, DEFAULT);
                }
                else if (storage==5 && storage2==3)
                {
                    kilobyte = gigabyte*1000000;
                    printf(White "Your Kilobytes is : %.0lfKb", kilobyte, DEFAULT);
                }
                else if (storage==5 && storage2==4)
                {
                    megabyte = gigabyte*1000;
                    printf(White "Your Megabytes is : %.0lfMb", megabyte, DEFAULT);
                }
                else if (storage==5 && storage2==5)
                {
                    gigabyte == gigabyte;
                    printf(White "Your selected storage are equal...!!!", DEFAULT);
                }
                else if (storage==5 && storage2==6)
                {
                    terabyte = gigabyte/1000;
                    printf(White "Your Terabytes is : %.3lfTb", terabyte, DEFAULT);
                }
                else if (storage==5 && storage2==7)
                {
                    petabyte = gigabyte/1000000;
                    printf(White "Your Petabytes is : %.6lfPb", petabyte, DEFAULT);
                }
            }
            else if (storage == 6)
            {
                printf(GREEN "Enter Terabytes : ", DEFAULT);
                scanf("%lf", &terabyte);
                if (storage==6 && storage2==1)
                {
                    byte = terabyte*1000000000000;
                    printf(White "Your Bytes is : %.0lfB", byte, DEFAULT);
                }
                else if (storage==6 && storage2==2)
                {
                    bit = terabyte*8000000000000;
                    printf(White "Your bits is : %0.lfbits", bit, DEFAULT);
                }
                else if (storage==6 && storage2==3)
                {
                    kilobyte = terabyte*1000000000;
                    printf(White "Your Kilobytes is : %.0lfKb", kilobyte, DEFAULT);
                }
                else if (storage==6 && storage2==4)
                {
                    megabyte = terabyte*1000000;
                    printf(White "Your Megabytes is : %.0lfMb", megabyte, DEFAULT);
                }
                else if (storage==6 && storage2==5)
                {
                    gigabyte = terabyte*1000;
                    printf(White "Your Gigabytes is : %.0lfGb", gigabyte, DEFAULT);
                }
                else if (storage==6 && storage2==6)
                {
                    terabyte == terabyte;
                    printf(White "Your selected storage are equal...!!!", DEFAULT);
                }
                else if (storage==6 && storage2==7)
                {
                    petabyte = terabyte/1000;
                    printf(White "Your Petabytes is : %.3lfPb", petabyte, DEFAULT);
                }
            }
            else if (storage == 7)
            {
                printf(GREEN "Enter Petabytes : ", DEFAULT);
                scanf("%lf", &petabyte);
                if (storage==7 && storage2==1)
                {
                    byte = petabyte*1000000000000000;
                    printf(White "Your Bytes is : %.0lfB", byte, DEFAULT);
                }
                else if (storage==7 && storage2==2)
                {
                    bit = petabyte*8000000000000000;
                    printf(White "Your Bits is : %.0lfbits", bit, DEFAULT);
                }
                else if (storage==7 && storage2==3)
                {
                    kilobyte = petabyte*1000000000000;
                    printf(White "Your Kilobytes is : %.0lfKb", kilobyte, DEFAULT);
                }
                else if (storage==7 && storage2==4)
                {
                    megabyte = petabyte*1000000000;
                    printf(White "Your Megabytes is : %.0lfMb", megabyte, DEFAULT);
                }
                else if (storage==7 && storage2==5)
                {
                    gigabyte = petabyte*1000000;
                    printf(White "Your Gigabytes is : %.0lfGb", gigabyte, DEFAULT);
                }
                else if (storage==7 && storage2==6)
                {
                    terabyte = petabyte*1000;
                    printf(White "Your Terabytes is : %.0lfTb", terabyte, DEFAULT);
                }
                else if (storage==7 && storage2==7)
                {
                    petabyte == petabyte;
                    printf(White "Your selected storage are equal...!!!", DEFAULT);
                }
                else 
                    printf(White "Invalid Storage....!!!\n", DEFAULT);
            }printf(Red "\n_______________________________________________________________\n", DEFAULT);
            printf(RED "\nPress any key and hit Enter to exit...", DEFAULT);
            scanf("%d", &exit);
            break;
        }
        case 3:
        {
            int temperature, temperature2;
            double Celsius, Fahrenhite, Kelvin, Rankine, Reaumur;
            printf(RED "____________________Temperature Convertion_____________________\n", DEFAULT);
            printf(RED "                                                               \n", DEFAULT);
            printf("                  ****Select Temperature****\n");
            printf(Red "_______________________________________________________________\n", DEFAULT);
            printf(BLUE "1. Degree Celsius-(C)\n", DEFAULT); //25\u00b0C\n
            printf("2. Degree Fahrenhite-(F)\n");
            printf("3. Degree Kelvin-(K)\n");
            printf("4. Degree Rankine-(R)\n");
            printf("5. Degree Reaumur-(Re)\n");
            printf(GREEN "Press integer key (1-5)........", DEFAULT);
            scanf("%d", &temperature);
            printf(RED "                                                               \n", DEFAULT);

            printf(RED "________________Select Temperature to Convert__________________\n", DEFAULT);
             printf(BLUE "1. Degree Celsius-(C)\n", DEFAULT);
            printf("2. Degree Fahrenhite-(F)\n");
            printf("3. Degree Kelvin-(K)\n");
            printf("4. Degree Rankine-(R)\n");
            printf("5. Degree Reaumur-(Re)\n");
            printf(GREEN "Press integer key (1-5)........", DEFAULT);
            scanf("%d", &temperature2);
            printf(Red "_______________________________________________________________\n", DEFAULT);
            printf(Red "                                                               \n", DEFAULT);

            switch (temperature)
            {
                case 1: printf(Yellow "     You Selected {Celsius (C)} Convert to", DEFAULT);
                    break;
                case 2: printf(Yellow "     You Selected {Fahrenhite (F)} Convert to", DEFAULT);
                    break;
                case 3: printf(Yellow "     You Selected {Kelvin (K)} Convert to", DEFAULT);
                    break;
                case 4: printf(Yellow "     You Selected {Rankine (R)} Convert to", DEFAULT);
                    break;
                case 5: printf(Yellow "     You Selected {Reaumur (Re)} Convert to", DEFAULT);
                    break;
            }
            switch (temperature2)
            {
                case 1: printf(" {Celsius (F)}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 2: printf(" {Fahrenhite (F)}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 3: printf(" {Kelvin (K)}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 4: printf(" {Rankine (R)}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;
                case 5: printf(" {Reaumur (Re)}\n");
                printf(Red "_______________________________________________________________\n", DEFAULT);
                    break;    
            }
            if (temperature == 1)
            {
                printf(GREEN "Enter Celsius : ", DEFAULT);
                scanf("%lf", &Celsius);
                if (temperature==1 && temperature2==1)
                {
                    temperature == temperature2;
                    printf("Your selected temperature are equal...!!!");
                }
                else if (temperature==1 && temperature2==2)
                {
                    Fahrenhite = (Celsius*9/5)+32;
                    printf("Your Fahrenhite is : %.1lfF", Fahrenhite);
                }
                else if (temperature==1 && temperature2==3)
                {
                    Kelvin = Celsius+273.15;
                    printf("Your Kelvin is : %.2lfK", Kelvin);
                }
                else if (temperature==1 && temperature2==4)
                {
                    Rankine = (Celsius+273.15)*9/5;
                    printf("Your Rankine is : %.2lfR", Rankine);
                }
                else if (temperature==1 && temperature2==5)
                {
                    Reaumur = (Celsius*4)/5;
                    printf("Your Reaumur is : %.3lfRe", Reaumur);
                }
                else 
                    printf("Invalid Temperature...!!!");
            }
            else if (temperature == 2)
            {
                printf(GREEN "Enter Fahrenhite : ", DEFAULT);
                scanf("%lf", &Fahrenhite);
                if (temperature==2 && temperature2==1)
                {
                    Celsius = (Fahrenhite - 32) * 5/9;
                    printf("Your Celsius is : %.10lfC", Celsius);
                }
                else if (temperature==2 && temperature2==2)
                {
                    Fahrenhite == Fahrenhite;
                    printf("Your selected temperature are equal...!!!");
                }
                else if (temperature==2 && temperature2==3)
                {
                    Kelvin = (Fahrenhite + 459.67) * 5/9;
                    printf("Your Kelvin is : %.10lfK", Kelvin);
                }
                else if (temperature==2 && temperature2==4)
                {
                    Rankine = (Fahrenhite + 459.67);
                    printf("Your Rankine is : %.2lfR", Rankine);
                }
                else if (temperature==2 && temperature2==5)
                {
                    Reaumur = (Fahrenhite-32)*4/9;
                    printf("Your Reaumur is : %.10lfRe", Reaumur);
                }
                else 
                    printf("Invalid Temperature...!!!");
            }  
            else if (temperature == 3)
            {
                printf(GREEN "Enter Kelvin : ", DEFAULT);
                scanf("%lf", &Kelvin);
                if (temperature==3 && temperature2==1)
                {
                    Celsius = Kelvin-273.15;
                    printf("Your Celsius is : %.2lfC", Celsius);
                }
                else if (temperature==3 && temperature2==2)
                {
                    Fahrenhite = (Kelvin-273.15)*9/5 + 32;
                    printf("Your Farhenhite is : %.2lfF", Fahrenhite);
                }
                else if (temperature==3 && temperature2==3)
                {
                    Kelvin == Kelvin;
                    printf("Your selected temperature are equal...!!!");
                }
                else if (temperature==3 && temperature2==4)
                {
                    Rankine = Kelvin*1.8;
                    printf("Your Rankine is : %.1lfR", Rankine);
                }
                else if (temperature==3 && temperature2==5)
                {
                    Reaumur = (Kelvin-273.15)*0.8;
                    printf("Your Reaumur is : %.2lfRe", Reaumur);
                }
                else
                    printf("Invalid Temperature....!!!");
            }
            else if (temperature == 4)
            {
                printf(GREEN "Enter Rankine : ", DEFAULT);
                scanf("%lf", &Rankine);
                if (temperature==4 && temperature2==1)
                {
                    Celsius = (Rankine-491.67)*5/9;
                    printf("Your Celsius is : %.4lfC", Celsius);
                }
                else if (temperature==4 && temperature2==2)
                {
                    Fahrenhite = Rankine -459.67;
                    printf("Your Farhenhite is : %.2lfF", Fahrenhite);
                }
                else if (temperature==4 && temperature2==3)
                {
                    Kelvin = Rankine*5/9;
                    printf("Your Kelvin is : %.4lfK", Kelvin);
                }
                else if (temperature==4 && temperature2==4)
                {
                    Rankine == Rankine;
                    printf("Your selected temperature are equal...!!!");
                }
                else if (temperature==4 && temperature2==5)
                {
                    Reaumur = (Rankine-491.67)*4/9;
                    printf("Your Reaumur is : %.10lfRe", Reaumur);
                }
                else 
                    printf("Invalid temperature...!!!");
            }  
             else if (temperature == 5)
            {
                printf(GREEN "Enter Reaumur : ", DEFAULT);
                scanf("%lf", &Reaumur);
                if (temperature==5 && temperature2==1)
                {
                    Celsius = Reaumur * 1.25;
                    printf("Your Celsius is : %.2lfC", Celsius);
                }
                else if (temperature==5 && temperature2==2)
                {
                    Fahrenhite = Reaumur*2.25+32;
                    printf("Your Farhenhite is : %.4lfF", Fahrenhite);
                }
                else if (temperature==5 && temperature2==3)
                {
                    Kelvin = Reaumur/0.8+273.15;
                    printf("Your Kelvin is : %.2lfK", Kelvin);
                }
                else if (temperature==5 && temperature2==4)
                {
                    Rankine = Reaumur * 2.25 + 491.67;
                    printf("Your Ranking is : %.2lfR", Rankine);
                }
                else if (temperature==5 && temperature2==5)
                {
                    Reaumur == Reaumur;
                    printf("Your selected temperature are equal...!!!");
                }
                else
                    printf("Invalid Temperature...!!!");
            }printf(Red "\n_______________________________________________________________\n", DEFAULT);
            printf(RED "\nPress any key and hit Enter to exit...", DEFAULT);
            scanf("%d", &exit);
            break;
        }
    }
}