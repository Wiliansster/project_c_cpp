/* convert string on numeric variable*/

# include<iostream>
# include<sstream>
# include<string>

int main() 
{
    std::string stringLength;
    float inches = 0;
    float yardage = 0;

    std::cout << "Enter number of inches: ";
    std::getline (std::cin, stringLength);
    std::stringstream(stringLength) >> inches;
    std::cout<<"You entered " <<inches<< "\n";
    yardage = inches/36;
    std::cout << "Yardage is " << yardage << "\n";

    return 0;
}