/* 
Goal: formating the code 
"/n" --> new line
"/t" --> new tab

library: iomanip

*/

# include<iostream>
# include<iomanip> // the iomanip belong the same space of iostream

using namespace std;

int main()
{

    cout << "\n\nThe without any formating" << "\n";
    cout << "Ints" 
         << "Floats" 
         << "Double" 
         << "\n";
    cout << "\nThe text with setw(15)" << "\n";
    cout << "Ints" 
         << setw(15) 
         << "Float" 
         << setw(15) 
         << "Doubles" 
         << setw(15) 
         <<"\n";
    cout <<  "\n\n The text with tabs"  << "\n";
    cout << "Ints \t"
         << "Floats \t"
         << " Double \t"
         << "\n";

    return 0; 
}