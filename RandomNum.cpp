#include "RandomNum.h"
#include <cstdlib>
#include <ctime>

//function to generate random number 1-10
int RandomNum::randomNum_1_5()
{
    srand (time(NULL));
    int random_number = (rand() % 5) + 1;
}


//function to generate random number from 1 - 20
int RandomNum::randomNum_1_20()
{
    srand(time(0));
    int random_number = (rand() % 20) + 1;
}



//function to generate random number from 1 -50
int RandomNum::randomNum_1_50()
{
    srand(time(0));
    int random_number = (rand() % 50) + 1;
}

