#include<iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);
    int getDay();
    int getMonth();
    int getYear();
};

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

int main()
{
    int date, month, year;
    
    cout << "Enter date: ";
    cin >> date;
    if(date < 1 || date > 31)
    {
        string exception = "Error!";
        throw exception;
    }
    
    cout << "Enter month: ";
    cin >> month;
    if(month < 1 || month > 12)
    {
        string exception1 = "Error! Invalid month!";
        throw exception1;
    }
    
    cout << "Enter year: ";
    cin >> year;
    
    return 0;
}
