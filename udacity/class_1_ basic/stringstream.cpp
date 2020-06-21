/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

#include<iostream>
#include<string>
#include<sstream>

int main()
{
    std::string roomLenght, roomWidth;
    float area, lenght, width;

    std::cout<<"Enter the length of the romm: ";
    //get the length as a string
    std::getline(std::cin,roomLenght) ;
    //convert to a float
    std::stringstream(roomLenght) >> lenght;

    //get the width as a string
    std::cout<<"Enter width: ";
    std::getline(std::cin, roomWidth);
    //convert to a float
    std::stringstream(roomWidth) >> width;

    area = lenght * width;

    std::cout<<"\nThe area of room is: " <<area <<std::endl;

    return 0;
}
