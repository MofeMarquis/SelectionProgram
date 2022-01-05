#ifndef CONVERSIONS_H
#define CONVERSIONS_H


class Conversions
{
    public:
        //function to convert Celsius to Fahrenheit
        //get value for temperature
         double cel_to_fah(double cel);

         //function to convert Celsius to Kelvin
         double cel_to_kel(double cel);


         //function to convert Fahrenheit to Celsius
         double fah_to_cel(double fah);


         //function to convert Fahrenheit to Kelvin
         double fah_to_kel(double fah);


         //function to convert Kelvin to Fahrenheit
         double kel_to_fah(double kel);


         //function to convertKelvin to Celsius
         double kel_to_cel(double kel);


         void setf(int ff)
         {
             g = ff;
         }

         int getf()
         {
             return g;
         }

    private:
        int g;


};

#endif // CONVERSIONS_H
