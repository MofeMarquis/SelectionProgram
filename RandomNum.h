#include <iostream>
#ifndef RANDOMNUM_H
#define RANDOMNUM_H
#include <ctime>



using namespace std;

class RandomNum
{
    public:
        //function to generate random number from 1-10
        int randomNum_1_5();
        
       
        //function to generrate random number form 20-50
        int randomNum_1_20();
        
        //function to generate random number from 1 - 50
        int randomNum_1_50();
        
        
        //function to set user input
        void set_input(int inputs)
        {
           puser_input = &inputs;
        }
        
        //function to return user input
        int ret_input()
       {
          return* puser_input;
       }
        
        
        //function to input difficulty
        void set_difficulty(int diff)
        {
           pdifficulty = &diff;
        }
        
        //function to return difficulty input
        int ret_difficulty()
        {
            return* pdifficulty;
        }
        
     
        
        
    private:
        int user_input;
        int* puser_input; //pointer to the user input
        int difficulty;//for making difficulty decision
        int* pdifficulty;
        
};

#endif // RANDOMNUM_H
