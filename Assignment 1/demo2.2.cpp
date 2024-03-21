#include<iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        day = 19;
        month = 3;
        year = 2024;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day, month, and year (dd mm yyyy): ";
        cin >> day >> month >> year; 
    }

    void printDateOnConsole()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    int choice;
    Date d;

    do
    {
        cout<<"0. EXIT"<<endl;
        cout<<"1. Initialize Date"<<endl;
        cout<<"2. Accept Date"<<endl;
        cout<<"3. Display Date"<<endl;
        cout<<"4. Check leap year"<<endl;
        cout<<"Enter your choice"<<endl; 
        cin>>choice;

        switch(choice)
        {
        case 0:
            cout<<"Thank you for using our app..."<<endl;
            break;

        case 1:
            d.initDate();
            cout<< "Date initialized."<< endl;
            break;

        case 2:
            d.acceptDateFromConsole();
            break;

        case 3:
            d.printDateOnConsole();
            break;

        case 4:
            if (d.isLeapYear())
                cout<<"Yes, it's a leap year!\n";
            else
                cout<<"No, it's not a leap year!\n";
            break;

        default:
            cout<<"Wrong choice...."<<endl;
        }
    } while(choice!=0);
    return 0;

}

    