#include "Lenghths.h"

//function to convert meters to centimeters
double Lenghths::met_to_cen(double met)
{
    double len = (met * 100);
    return len;
}

//function to convert meters to inches
double Lenghths::met_to_inc(double met)
{
    double len = (met * 39.37);
    return len;
}


//function to convert meters to feet
double Lenghths::met_to_fet(double met)
{
    double len = (met * 3.281);
    return len;
}


//function to v=convert meter to miles
double Lenghths::met_to_mil(double met)
{
    double len = (met / 1609.0);
    return len;
}


//function to convert meters to kilometers
double Lenghths::met_to_kil(double met)
{
    double len = (met / 1000.0);
    return len;
}


//function to convert centimeters to meters
double Lenghths::cen_to_met(double cen)
{
    double len (cen / 100);
    return len;
}



//function to convert centimeter to inches
double Lenghths::cen_to_inc(double cen)
{
    double len = (cen / 2.54);
    return len;
}



//function to convert centimeters to feet
double Lenghths::cen_to_fet(double cen)
{
    double len = (cen / 30.48);
    return len;
}



//function to convert centimeters to miles
double Lenghths::cen_to_mil(double cen)
{
    double len = (cen / 160934.0);
    return len;
}



//function to convert centimeters to kilometers
double Lenghths::cen_to_kil(double cen)
{
    double len = (cen / 100000);
    return len;
}


//function to convert kilometers to meters
double Lenghths::kil_to_met(double kil)
{
    double len = (kil * 1000);
    return len;
}


//function to convert kilometer to centimeters
double Lenghths::kil_to_cen(double kil)
{

    double len = (kil * 100000);
    return len;
}


//function to convert kilometers to inches
double Lenghths::kil_to_inc(double kil)
{
    double len = (kil * 39370);
    return len;
}


//function to convert kilometers to miles
double Lenghths::kil_to_mil(double kil)
{
    double len = (kil / 1.609);
    return len;
}


//function to convert kilometers to feet
double Lenghths::kil_to_fet(double kil)
{
    double len = (kil * 3280.84);
    return len;
}


//function to convert miles to meters
double Lenghths::mil_to_met(double mil)
{
    double len = (mil * 1609.34);
    return len;
}

//function to convert miles to kilometers
double Lenghths::mil_to_kil(double mil)
{
    double len = (mil * 1.609);
    return len;
}


//function to convert miles to centimeters
double Lenghths::mil_to_cen(double mil)
{
    double len = (mil * 160933.9);
    return len;
}


//function to convert miles to inche
double Lenghths::mil_to_inc(double mil)
{
    double len = (mil * 63359.8);
    return len;
}


//function to convert miles to feet
double Lenghths::mil_to_fet(double mil)
{
    double len = (mil * 5279.9);
    return len;
}
