#include<iostream>      // using structures 
using namespace std;

struct Date {
    int day;
    int month;
    int year;

    void initDate() {
        day = 19;
        month = 3;
        year = 2024;
    }

    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day, month, and year (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            return true;
        else
            return false;
    }
};

int main() {
    Date date;
    int choice;

    date.initDate();

    do {
        cout << "\nMenu:\n";
        cout << "1. Initialize Date\n";
        cout << "2. Print Date\n";
        cout << "3. Accept Date\n";
        cout << "4. Check Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                date.initDate();
                cout << "Date initialized." << endl;
                break;
            case 2:
                date.printDateOnConsole();
                break;
            case 3:
                date.acceptDateFromConsole();
                break;
            case 4:
                if (date.isLeapYear())
                    cout << date.year << " is a leap year." << endl;
                else
                    cout << date.year << " is not a leap year." << endl;
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}