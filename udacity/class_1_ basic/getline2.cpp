/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

# include<iostream>
# include<string>

int main()
{
    std::string names1, names2, address1, address2, phoneNumber1, phoneNumber2;

    //get user1 information
    std::cout <<"User1 what is your name? \n";
    std::getline(std::cin, names1 );
    std::cout << "User1 what is your address? \n";
    std::getline(std::cin, address1);
    std::cout << "User1 what is your phone number? \n";
    std::getline(std::cin, phoneNumber1);

    std::cout << "User2 what is your name? \n";
    std::getline(std::cin, names2);
    std::cout << "User2 what is your address? \n";
    std::getline(std::cin, address2);
    std::cout << "User2 what is your phone number? \n";
    std::getline(std::cin, phoneNumber2);

    // print information
    std::cout << names1 << "\n" ;
    std::cout << "\t\t" << address1 <<"\n";
    std::cout << "\t\t" << phoneNumber1 << "\n";
    
    std::cout << names2 << "\n"
              << "\t\t" << address2 << "\n"
              << "\t\t" << phoneNumber2 << "\n";

    return 0;
}