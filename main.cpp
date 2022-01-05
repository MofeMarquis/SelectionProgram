#include <iostream>
#include <cctype>
#include <string>
#include "Conversions.h" //for temperature conversion
#include "Lenghths.h"   //for length conversion
#include "Calculations.h" //for calculations
#include "RandomNum.h"//for random numbers
#include <ctime> //for random time
using namespace std;

 
char again; //input for doing tasks again
int choice{0}; //input for making switch choices


int main()
{
    

    
    srand(time(0));
    Calculations calc; //object to access variables and functions of this class
    Conversions conv; //object to access variables and functions of this class
    Lenghths leng; //object to access variables and functions of this class
    RandomNum random; //object to access variables and functions of this class


    cout << "\t\t\t\t\t**************************************" << endl;
    cout << "\t\t\t\t\t**************************************" << endl;
    cout << "\t\t\t\t\t*****    THE SELECTION PROGRAM   *****" << endl;
    cout << "\t\t\t\t\t**************************************" << endl;
    cout << "\t\t\t\t\t**************************************" << endl;
    cout << "\n" << endl;


    /*MAIN PROGRAM STARTS HERE*/
    cout <<"\n\t\t\t\t\t*****PlEASE MAKE A SELECTION!*****" << endl;
    do
    {

        cout <<"\n1.    Basic Calculations" << endl;
        cout <<"\n2.    Temperature Conversion" << endl;
        cout <<"\n3.    Length Conversion" << endl;
        cout <<"\n4.    The Guessing Game" << endl;
        cout << endl;
        
        cout << "\nPlease enter a selection: ";
        cin >> choice;
        switch(choice)
        {

        //BASIC CALCULATIONS
        case 1:
        {
            do
            {
                cout << "\nPlease make a selection: " << endl;
                cout << "\n1. Addition of two numbers" << endl;
                cout << "\n2. Subtraction of two numbers" << endl;
                cout << "\n3. Multiplication of two numbers" << endl;
                cout << endl;


                cin >> choice; //input for first case is choice
                switch(choice)
                {
                case 1: //for addition

                    do
                    {
                        cout <<"\nEnter first number: ";
                        cin >> calc.a;
                        cout <<"\nEnter second number: ";
                        cin >> calc.b;

                        cout << "\nThe sum of " << calc.a << " and " << calc.b
                             << " is " << calc.add(calc.a, calc.b);


                        cout << "\nDp you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                    break;


                case 2: //for subtraction

                    do
                    {
                        cout <<"\nEnter first number: ";
                        cin >> calc.a;
                        cout <<"\nEnter second number: ";
                        cin >> calc.b;

                        cout << "\nThe difference of " << calc.a << " and " << calc.b
                             << " is " << calc.subs(calc.a, calc.b);

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;
                    }
                    while((again == 'Y') || (again == 'y'));
                    break;

                case 3: //for product
                    do
                    {
                        cout <<"\nEnter first number: ";
                        cin >> calc.a;
                        cout <<"\nEnter second number: ";
                        cin >> calc.b;

                        cout << "\nThe product of " << calc.a << " and " << calc.b
                             << " is " << calc.prod(calc.a, calc.b);


                        cout<<"\nDo you want to do again? (Y/N): ";

                        cin >> again;

                    }
                    while (again == 'y' || again == 'Y');
                    break;

                default:
                    cout << "\nInvalid selection!" << endl;
                    break;
                }//end of inner case for case 1
                cout <<"\nDo you want to make another selection? (Y/N): ";
                cin >> again;
            }
            while((again == 'Y') || (again == 'y'));

            break;
        }//end of major case 1




        //TEMPERATURE CONVERSION
        case 2:
        {
            do
            {
                cout << "\nPlease make a selection: ";
                cout << "\n1.    Convert Celsius to Fahrenheit" << endl;
                cout << "\n2.    Convert Celsius to Kelvin" << endl;
                cout << "\n3.    Convert Fahrenheit to Celsius" << endl;
                cout << "\n4.    Convert Fahrenheit to Kelvin" << endl;
                cout << "\n5.    Convert Kelvin to Fahrenheit" << endl;
                cout << "\n6.    Convert Kelvin to Celsius" << endl;
                cout << endl;

                //selection input
                cin >> choice;
                switch(choice)
                {
                case 1:
                {

                    do
                    {
                        cout << "\nEnter temperature in Celsius: ";
                        double temperature = 0;
                        cin >> temperature;

                        cout << "\n" << temperature << " Celsius in Fahrenheit is "
                             << conv.cel_to_fah(temperature) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;
                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 1 for case 2
                break;

                case 2:
                {
                    do
                    {
                        cout <<"\nEnter temperature in Celsius: ";
                        double temperature2 = 0;
                        cin >> temperature2;

                        //print out result
                        cout << "\n" << temperature2 << " Celsius in Kelvin is "
                             << conv.cel_to_kel(temperature2) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));

                }//end of case 2 for case 2
                break;

                case 3: //fahrenheit to celsius
                {
                    do
                    {
                        cout << "\nEnter temperature in Fahrenheit: ";
                        double temperature3 = 0;
                        cin >> temperature3;

                        //print out result
                        cout << "\n" << temperature3 << " Fahrenheit in Celsius is "
                             << conv.fah_to_cel(temperature3) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 3 for case 2
                break;


                case 4: //fahrenheit to kelvin
                {
                    do
                    {
                        cout << "\nEnter temperature in Fahrenheit: ";
                        double temperature4 = 0;
                        cin >> temperature4;

                        //print put result
                        cout << "\n" << temperature4 << " Fahrenheit in Kelvin is "
                             << conv.fah_to_kel(temperature4) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;


                case 5: //kelvin to fahrenheit
                {
                    do
                    {
                        cout <<"\nEnter temperature in Kelvin: ";
                        double temperature5 = 0;
                        cin >> temperature5;

                        //print out result
                        cout << "\n" << temperature5 << " Kelvin in Fahrenheit is "
                             << conv.kel_to_fah(temperature5) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;
                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;



                case 6: //kelvin to celsius
                {
                    do
                    {
                        cout <<"\nEnter temperature in Kelvin: ";
                        double temperature6 = 0;
                        cin >> temperature6;


                        //print out result
                        cout << "\n" << temperature6 << " Kelvin in Celsius is "
                             << conv.kel_to_cel(temperature6) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;

                default:
                    cout <<"\nInvalid selection!!" << endl;

                }//end of switch for case 2

                cout << "\nDo you want to make another conversion? (Y/N): ";
                cin >> again;

            }
            while((again == 'Y') || (again == 'y'));
        }
        break; //end of major case 2


        //LENGTH CONVERSION
        case 3:
        {
            do
            {
                cout << "\nPlease make a selection: ";
                cout << "\n1.   Meter to Centimeters" << endl;
                cout << "\n2.   Meter to Inches" << endl;
                cout << "\n3.   Meter to Feet" << endl;
                cout << "\n4.   Meter to Miles" << endl;
                cout << "\n5.   Meter to Kilometers" << endl;
                cout << "\n6.   Centimeters to  Meter" << endl;
                cout << "\n7.   Centimeters to Inches" << endl;
                cout << "\n8.   Centimeters to Feet" << endl;
                cout << "\n9.   Centimeters to Miles" << endl;
                cout << "\n10.  Centimeters to Kilometers" << endl;
                cout << "\n11.  Kilometers to Meters" << endl;
                cout << "\n12.  Kilometers to Centimeters" << endl;
                cout << "\n13.  Kilometers to Inches" << endl;
                cout << "\n14.  Kilometers to Miles" << endl;
                cout << "\n15.  Kilometers to Feet" << endl;
                cout << "\n16.  Miles to Meters" << endl;
                cout << "\n17.  Miles to Kilometers" << endl;
                cout << "\n18.  Miles to Centimeters" << endl;
                cout << "\n19.  Miles to Inches" << endl;
                cout << "\n20.  Miles to Feet" << endl;

                cout << "\n";

                cin >> choice;
                switch(choice)
                {
                case 1: //meters to centimeters
                {
                    do
                    {
                        double meter;
                        cout << "\nEnter length in Meters: ";
                        cin >> meter;


                        //print the result
                        cout << "\n" << meter << " meter(s) in centimeters is "
                             << leng.met_to_cen(meter) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));


                }//end of case 1 for case 3
                break;


                case 2: //meters to inches
                {
                    do
                    {
                        cout << "\nEnter length in meters: ";
                        double meter2 = 0;
                        cin >> meter2;

                        //print the result
                        cout << "\n" << meter2 << " meters in Inches is "
                             << leng.met_to_inc(meter2) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 2 for case 3
                break;


                case 3: //meters to feet
                {
                    do
                    {
                        cout << "\nEnter length in meters: ";
                        double meter3 = 0;
                        cin >> meter3;

                        //print out result
                        cout << "\n" << meter3 << " meters in Feet is "
                             << leng.met_to_fet(meter3) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 3 for case 3
                break;


                case 4: //meters to miles
                {
                    do
                    {
                        cout << "\nEnter length in meters: ";
                        double meter4 = 0;
                        cin >> meter4;

                        //print out result
                        cout << "\n" << meter4 << " meters in Miles is "
                             << leng.met_to_mil(meter4) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;


                case 5: //meters to kilometers
                {
                    do
                    {
                        cout << "\nEnter length in meters: ";
                        double meter5 = 0;
                        cin >> meter5;

                        //print out result
                        cout << "\n" << meter5 << " meters in Kilometers is "
                             << leng.met_to_kil(meter5) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;
                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;


                case 6://centimeters to meters
                {
                    do
                    {
                        cout << "\nEnter length in centimeters: ";
                        double cen1 = 0;
                        cin >> cen1;


                        //print out results
                        cout << "\n" << cen1 << " centimetrs in meters is "
                             << leng.cen_to_met(cen1) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;


                case 7://centimeters to inches
                {
                    do
                    {
                        cout << "\nEnter length in centimeters: ";
                        double cen2 = 0;
                        cin >> cen2;

                        //print out the result
                        cout << "\n" << cen2 << " meters in Kilometers is "
                             << leng.cen_to_inc(cen2) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;


                case 8: //centimeters to feet
                {
                    do
                    {
                        cout << "\nEnter length in centimeters: ";
                        double cen3 = 0;
                        cin >> cen3;


                        //print out result
                        cout << "\n" << cen3 << " meters in Feet is "
                             << leng.cen_to_fet(cen3) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;


                case 9:
                {
                    do
                    {
                        cout << "\nEnter length in centimeters: ";
                        double cen4 = 0;
                        cin >> cen4;


                        //print put result
                        cout << "\n" << cen4 << " meters in miles is "
                             << leng.cen_to_mil(cen4) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }
                break;


                case 10: // centimeters to kilometers
                {
                    do
                    {
                        cout << "\nEnter length in centimeters: ";
                        double cen5 = 0;
                        cin >> cen5;

                        //print put results
                        cout << "\n" << cen5 << " meters in Kilometers is "
                             << leng.cen_to_kil(cen5) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                   while((again == 'Y') || (again == 'y'));
                }//end of case 10 for case 3
                break;


                case 11://kilometers to meters
                {
                    do
                    {
                        cout << "\nEnter length in Kilometers: ";
                        double kil1 = 0;
                        cin >> kil1;

                        //print out result
                        cout << "\n" << kil1 << " Kilometers in Meters is "
                             << leng.kil_to_met(kil1) << endl;


                        cout  << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 12 for case 3
                break;


                case 12: //kilometers to centimeters
                {
                    do
                    {
                        cout << "\nEnter length in Kilometers: ";
                        double kil2 = 0;
                        cin >> kil2;


                        //print out result
                        cout << "\n" << kil2 << " Kilometers in Centimeters is "
                             << leng.kil_to_cen(kil2) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 12 for case 3
                break;


                case 13://kilometers to inches
                {
                    do
                    {
                        cout << "\nEnter length in Kilometers: ";
                        double kil3 = 0;
                        cin >> kil3;


                        //print out result
                        cout << "\n" << kil3 << "kilometers in inches is "
                             << leng.kil_to_inc(kil3) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 13 for case 3
                break;


                case 14://kilometers to miles
                {
                    do
                    {
                        cout << "\nEnter length in kilometers: ";
                        double kil4 = 0;
                        cin >> kil4;


                        //print out result
                        cout << "\n" << kil4 << " kilometers in miles is "
                             << leng.kil_to_mil(kil4) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 14 for case 3
                break;


                case 15://kilometers to feet
                {
                    do
                    {
                        cout << "\nEnter length in kilometers: ";
                        double kil5 = 0;
                        cin >> kil5;


                        //print out result
                        cout << "\n" << kil5 << " meters in Kilometers is "
                             << leng.kil_to_fet(kil5) << endl;

                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 15 for case 3
                break;


                case 16://miles to meters
                {
                    do
                    {
                        cout << "\nEnter length in miles: ";
                        double mil1 = 0;
                        cin >> mil1;


                        //print out results
                        cout << "\n" << mil1 << " miles in meter is "
                             << leng.mil_to_met(mil1) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 16 for case 3
                break;


                case 17://miles to kilometers
                {
                    do
                    {
                        cout << "\nEnter length in miles: ";
                        double mil2 = 0;
                        cin >> mil2;


                        //print out reults
                        cout << "\n" << mil2 << " miles in kilometers is "
                             << leng.mil_to_kil(mil2) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again = 'y') || (again == 'Y'));
                }//end of case 17 for case 3
                break;


                case 18://miles to centimeters
                {
                    do
                    {
                        cout << "\nEnter length in miles: ";
                        double mil3;
                        cin >> mil3;


                        //print out results
                        cout << "\n" << mil3 << " miles in centimeters is "
                             << leng.mil_to_cen(mil3) << endl;


                        cout << "\nDo you want to do this again? (Y/N) : ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 18 for case 3
                break;


                case 19://miles to inches
                {
                    do
                    {
                        cout << "\nEnter length in miles: ";
                        double mil4 = 0;
                        cin >> mil4;


                        //print out the results
                        cout << "\n" << mil4 << " miles in inches is "
                             << leng.mil_to_inc(mil4) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;

                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 19 for case 3
                break;


                case 20:
                {
                    do
                    {
                        cout << "\nEnter length in miles: ";
                        double mil5 = 0;
                        cin >> mil5;


                        //print out reults
                        cout << "\n" << mil5 << " miles in feet is "
                             << leng.mil_to_met(mil5) << endl;


                        cout << "\nDo you want to do this again? (Y/N): ";
                        cin >> again;
                    }
                    while((again == 'Y') || (again == 'y'));
                }//end of case 20 for case 3
                break;


                default:
                    cout << "Invalid input!" << endl;

                }//end of switch for third case

                cout << "\nDo you want to make another conversion? (Y/N): ";
                cin >> again;
            }
            while((again == 'Y') || (again == 'y'));
        }
        break;//end of major case 3
        
        
        
                /********************************************//**
                 *                  THE GUESSING GAME
                 this part of the program allows a user to guess a 
                 *a number automatically generated by the computer
                 * if the guess is correct then the user is congratulated
                 * or else the user is asked if they want to make another
                 *guess for the first fail the user is given 2 extra chances
                 
                 ***********************************************/                                                                                                                      
                        
                case 4:
                    {
                         int user_input{0}; int user_guess{0}; int random_number{0};
                        do
                        {
                           
                            cout << "\n1.   Easy";
                            cout << "\n2.   Difficult";
                            cout << "\n3.   Hard" << endl;
                            cout << "\nPlease select difficulty: ";
                            cin >> user_input;
                            
                            /**< create a switch statement for user input */
                            switch(user_input)
                            {
                            /**< USER GUESSES FROM 1 TO 5 IN THIS SECTION */
                            case 1:
                                {
                                    do
                                    {
                                        cout << "\n\t\tGuess between 1-5" << endl;
                                        
                                        cout << "\nEnter your guess: ";
                                        cin >> user_guess;
                                        /********************************************//*
                                          this portion of code tests if the user guess is
                                         *correct and if it is a congratulations message
                                         is printed out else two extra chances are given
                                         ***********************************************/  
                                         /**< set random number to random number generator */
                                         random_number = random.randomNum_1_5();
                                         
                                         /**< set user input to  */
                                         random.set_input(user_guess);
                                         
                                         if((random.ret_input()) == random_number)  
                                         {
                                             cout << "\nCongratulations! You guessed right!!" << endl;
                                         }
                                         else
                                         {
                                                cout << "\nOops! You made a wrong guess!" << endl;
                                                cout << "Do you want to try again? (Y/N): ";
                                                cin >> again;
                                                
                                                /**< this part of code tests if the user wants to try again
                                                under the else statement */
                                                if(again == 'Y' || again == 'y')
                                                {
                                                   /**< set random number to random number generator */
                                                   random_number = random.randomNum_1_5();
                                                  
                                                   cout << "\nEnter your guess: ";
                                                   cin >> user_guess;
                                                
                                                   /**< set user input to  */
                                                   random.set_input(user_guess);
                                                 
                                                   if(random.ret_input() == random_number)
                                                   {
                                                       cout << "\nYes! you did it!!" << endl;
                                                       break;
                                                   }
                                                   else
                                                   {
                                                      cout << "\nSorry, wrong guess." << endl;
                                                      cout << "You have two extra chances!" << endl;
                                                      int do_again{0};
                                                       do
                                                       {
                                                           do_again++;
                                                           /**< set random number to random number generator */
                                                           random_number = random.randomNum_1_5();
                                                           
                                                           
                                                           cout << "\nTry again: ";
                                                           cin >> user_guess;
                                                           
                                                           /**< set user input to  */
                                                           random.set_input(user_guess);
                                                           
                                                           if(random.ret_input() == random_number)
                                                           {
                                                               cout << "\nYou finally guessed right!!";
                                                               break;
                                                           }
                                                           else
                                                           {
                                                               cout << "\nSorry, you failed.";
                                                               cout << "\nCorrect guess was: " << random_number << endl;
                                                           }
                                                       }while(do_again != 2);
                                                       
                                                   }
                                                }//end of inner if for trying again
                                                else
                                                {
                                                    cout << "\nOkay then!" << endl; 
                                                    break;
                                                }
                                                        
                                             
                                         }//end of else statement
                                                                                                                                                                                                                                                                                           
                                         cout << "\nDo you want to make another guess? (Y/N): ";
                                         cin >> again;                                       
                                    }while((again == 'Y') || (again == 'y'));
                                }//end of case 1 for fourth major case GUESSING GAME
                                break;//break for case 1
                                
                            
                            /**< USER GUESSES FROM 1 - 20 IN THIS SECTION */                                                                                                                                                                                                  
                            case 2:
                                {
                                    do
                                    {
                                        cout << "\n\t\tGuess between 1-20" << endl;
                                        
                                        cout << "\nEnter your guess: ";
                                        cin >> user_guess;
                                        /********************************************//*
                                          this portion of code tests if the user guess is
                                         *correct and if it is a congratulations message
                                         is printed out else two extra chances are given
                                         ***********************************************/  
                                         /**< set random number to random number generator */
                                         random_number = random.randomNum_1_20();
                                         
                                         /**< set user input to  */
                                         random.set_input(user_guess);
                                         
                                         if((random.ret_input()) == random_number)  
                                         {
                                             cout << "\nCongratulations! You guessed right!!" << endl;
                                         }
                                         else
                                         {
                                                cout << "\nOops! You made a wrong guess!" << endl;
                                                cout << "Do you want to try again? (Y/N): ";
                                                cin >> again;
                                                
                                                /**< this part of code tests if the user wants to try again
                                                under the else statement */
                                                if(again == 'Y' || again == 'y')
                                                {
                                                   /**< set random number to random number generator */
                                                   random_number = random.randomNum_1_20();
                                                  
                                                   cout << "\nEnter your guess: ";
                                                   cin >> user_guess;
                                                
                                                   /**< set user input to  */
                                                   random.set_input(user_guess);
                                                 
                                                   if(random.ret_input() == random_number)
                                                   {
                                                       cout << "\nYes! you did it!!" << endl;
                                                       break;
                                                   }
                                                   else
                                                   {
                                                      cout << "\nSorry, wrong guess." << endl;
                                                      cout << "You have two extra chances!" << endl;
                                                      int do_again{0};
                                                       do
                                                       {
                                                           do_again++;
                                                           /**< set random number to random number generator */
                                                           random_number = random.randomNum_1_20();
                                                           
                                                           
                                                           cout << "\nTry again: ";
                                                           cin >> user_guess;
                                                           
                                                           /**< set user input to  */
                                                           random.set_input(user_guess);
                                                           
                                                           if(random.ret_input() == random_number)
                                                           {
                                                               cout << "\nYou finally guessed right!!";
                                                               break;
                                                           }
                                                           else
                                                           {
                                                               cout << "\nSorry, you failed.";
                                                               cout << "\nCorrect guess was: " << random_number << endl;
                                                           }
                                                       }while(do_again != 2);
                                                       
                                                   }
                                                }//end of inner if for trying again
                                                else
                                                {
                                                    cout << "\nOkay then!" << endl; 
                                                    break;
                                                }
                                                        
                                             
                                         }//end of else statement
                                                                                                                                                                                                                                                                                           
                                         cout << "\nDo you want to make another guess? (Y/N): ";
                                         cin >> again;                                       
                                    }while((again == 'Y') || (again == 'y'));
                                }//the end of case 2 for the fourth major case; THE GUESSING GAME
                                break;//break for case 2
                                
                                
                           /**< USWRS GUESS FROM 1 - 50 IN THIS SECTION  */     
                            case 3:
                                {
                                    do
                                    {
                                        cout << "\n\t\tGuess between 1-50" << endl;
                                        
                                        cout << "\nEnter your guess: ";
                                        cin >> user_guess;
                                        /********************************************//*
                                          this portion of code tests if the user guess is
                                         *correct and if it is a congratulations message
                                         is printed out else two extra chances are given
                                         ***********************************************/  
                                         /**< set random number to random number generator */
                                         random_number = random.randomNum_1_50();
                                         
                                         /**< set user input to  */
                                         random.set_input(user_guess);
                                         
                                         if((random.ret_input()) == random_number)  
                                         {
                                             cout << "\nCongratulations! You guessed right!!" << endl;
                                         }
                                         else
                                         {
                                                cout << "\nOops! You made a wrong guess!" << endl;
                                                cout << "Do you want to try again? (Y/N): ";
                                                cin >> again;
                                                
                                                /**< this part of code tests if the user wants to try again
                                                under the else statement */
                                                if(again == 'Y' || again == 'y')
                                                {
                                                   /**< set random number to random number generator */
                                                   random_number = random.randomNum_1_50();
                                                  
                                                   cout << "\nEnter your guess: ";
                                                   cin >> user_guess;
                                                
                                                   /**< set user input to  */
                                                   random.set_input(user_guess);
                                                 
                                                   if(random.ret_input() == random_number)
                                                   {
                                                       cout << "\nYes! you did it!!" << endl;
                                                       break;
                                                   }
                                                   else
                                                   {
                                                      cout << "\nSorry, wrong guess." << endl;
                                                      cout << "You have two extra chances!" << endl;
                                                      int do_again{0};
                                                       do
                                                       {
                                                           do_again++;
                                                           /**< set random number to random number generator */
                                                           random_number = random.randomNum_1_50();
                                                           
                                                           
                                                           cout << "\nTry again: ";
                                                           cin >> user_guess;
                                                           
                                                           /**< set user input to  */
                                                           random.set_input(user_guess);
                                                           
                                                           if(random.ret_input() == random_number)
                                                           {
                                                               cout << "\nYou finally guessed right!!";
                                                               break;
                                                           }
                                                           else
                                                           {
                                                               cout << "\nSorry, you failed.";
                                                               cout << "\nCorrect guess was: " << random_number << endl;
                                                           }
                                                       }while(do_again != 2);
                                                       
                                                   }
                                                }//end of inner if for trying again
                                                else
                                                {
                                                    cout << "\nOkay then!" << endl; 
                                                    break;
                                                }
                                                        
                                             
                                         }//end of else statement
                                                                                                                                                                                                                                                                                           
                                         cout << "\nDo you want to make another guess? (Y/N): ";
                                         cin >> again;                                       
                                    }while((again == 'Y') || (again == 'y'));
                                }//end of case 3 for major case four; THE GUESSING GAME 
                                
                            }
                            cout << "\nDo you want to play again (Y/N): ";
                            cin >> again;
                        }while((again == 'Y') || (again == 'y'));
                    }//END OF MAJOR CASE 4 FOR THE GUESSING GAME
                    break;//break for case4

        default:
            cout << "\nInvalid selection!" << endl;

            break;

        }//end of switch

        cout << "\nDo you want to use the program again? (Y/N): ";
        cin >> again;

    }
    while((again == 'Y') || (again == 'y'));

    cout << "\nThanks for using us!" << endl;


}//end of main function




