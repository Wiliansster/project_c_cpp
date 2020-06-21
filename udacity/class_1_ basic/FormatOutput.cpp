# include<iostream>
# include<iomanip>

using namespace std; 

int main() 
{
    int      a = 45 ;
    float    b = 45.323;
    double   c = 45.5468;
    int     aa = a + 9; 
    float   bb = b + 9;
    double  cc = c + 9;
    int    aaa = aa + 9;
    float  bbb = bb + 9;
    double ccc = cc + 9; 

    cout << "Ints" << setw(10) << "Floats" << setw(10) << "Doubles" <<endl; 
    cout << a      << setw(12) <<  b       << setw(10) <<  c        <<endl;
    cout << aa     << setw(12) <<  bb      << setw(10) <<  cc       <<endl;
    cout << aaa    << setw(12) <<  bbb     << setw(10) <<  ccc      <<endl;

    cout << "\n\n\n" << "Prin with tabs \n";
    cout << "Int" << "\tFloat" << "\tDouble \n";
    cout << aaa << "\t" << bbb << "\t" << ccc << "\n";

    return 0;

}