/*
This is a student playground.
You can use this programming quiz to write and compile C++ code.
You will have access to:

main.cpp - the main program
main.hpp - the header file
mainFunctions.cpp - a file for any functions
*/

#include "studentPlaygroundHeader.hpp"
#include "studentPlaygroundFunction.cpp"

int main()
{

    std::string weightLength, heightLength;
    float weight1 = 0;
    float height1 = 0;
    float imb = 0;

    // get the information about weight
    std::cout << "Enter number of weight : ";
    std::getline(std::cin, weightLength);    
    std::stringstream(weightLength) >> weight1;

    //get the information about heigth
    std::cout << "Enter your height in meters: ";
    std::getline(std::cin, heightLength);
    std::stringstream(heightLength) >> height1;

    // calculate the BMI
    // call the funtion
    imb = myFunction(weight1,height1);

    std::cout<<"\nYour IMB is " << imb << "\n";

    return 0;
}
/* TODO: melhorar esta função ( formatacao da saida, 
apresentar uma escala fina de classificação do peso)
*/