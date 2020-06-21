/*
The Goal of this programm is learing about the IO in c++
This program depends of the "input.txt" file
*/

# include <iostream>
# include <fstream>
# include <string>

using namespace std;

int main ( )
{
    string line; 
    // create an output stream to write file
    // append the new lines to the end of the file
    ofstream myfileI("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line. \n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    // I think the next part show in the output the result of the code before
    // create an input stream to read the file
    ifstream myfileO ("input.txt");
    // During the creation of ifstream, the file is opened.
    // So we do not have explicity open the file.
    if (myfileO.is_open())
    {
        while (getline (myfileO,line))
        {
            cout << line <<'\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";


    return 0;
}
