// Goal: enumerated constants 

# include<iostream>

using namespace std;

// define MONTHS  as having 12 possible values
enum MONTHS
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main()
{
    // define the MONTHS variable called by bestMoth
    MONTHS bestMonth;
    //define bestMonth one of the values of MONTHS
    bestMonth  = Jan;

    //now we can check the value of bestMonths just 
    // like any other variabel
    if(bestMonth == Jan)
    {
        cout << "I'm not so sure January is the best month \n";
    }

    return 0;
}
// TODO: checking why this code does not running. It's ok now.