// the example for using  cin from the video
// there is an error in the video. the correct 
// program is shown below.

# include <iostream>
# include <string>

int main()
{
    std::string userName;
    std:: cout << "Tell me your nickname?"; 
    std::getline(std::cin, userName);
    std::cout <<"Hello " <<userName << "\n";
    
    return 0;
}