#include "Conversions.h"







//function to change Celsius to fahrenheoit
double Conversions::cel_to_fah(double cel)
        {
            double temp = (cel * 1.8) + 32;
            return temp;
        }


//function to change Celsius to Kelvin
double Conversions::cel_to_kel(double cel)
        {
            double temp = (cel + 273.15);
            return temp;
        }


//function to change Fahrenheit to Celsius
double Conversions::fah_to_cel(double fah)
        {
            double temp = ((fah - 32) * 5) / 9;
            return temp;
        }



//function to change Fahrenheit to Kelvin
double Conversions::fah_to_kel(double fah)
        {
            double temp = 273.15 +((fah - 32.0) * (5.0)/(9.0));
            return temp;
        }


//function to change Kelvin to Fahrenheit
double Conversions::kel_to_fah(double kel)
        {
            double temp = (kel - 273.15) * 1.8 + 32;
            return temp;
        }




//function to change Kelvin to Celsius
double Conversions::kel_to_cel(double kel)
        {
            double temp = (kel - 273.15);
            return temp;
        }

