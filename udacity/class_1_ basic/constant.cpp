// Goal : use constant variable

# include<iostream>

using namespace std;

// include the constant parametre
const int weighGoal = 100; 

int main()
{
    cout << "WeighGoal =" <<weighGoal << "\n";
    int weighGoal = 200; // Now, set outer value of weighGoal
    cout << "WeighGoal = " << weighGoal << "\n";

    return 0;
}