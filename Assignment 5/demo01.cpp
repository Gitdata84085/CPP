#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void display() const {
        cout << day << "/" << month << "/" << year;
    }
};

class Person {
private:
    string name;
    string address;
    Date birthdate;

public:
    Person(const string& n, const string& addr, const Date& bd) : name(n), address(addr), birthdate(bd) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Birthdate: ";
        birthdate.display();
        cout << endl;
    }
};

class Employee {
private:
    int id;
    double salary;
    string department;
    Date joining_date;

public:
    Employee(int empId, double sal, const string& dept, const Date& joinDate)
        : id(empId), salary(sal), department(dept), joining_date(joinDate) {}

    void display() const {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
        cout << "Joining Date: ";
        joining_date.display();
        cout << endl;
    }
};

int main() {
    
    Date birth_date(10, 5, 1990);
    Date joining_date(15, 9, 2015);

    
    Person person("Adarsh", "Mangalwar Peth", birth_date);
    cout << "Person Details:" << endl;
    person.display();
    cout << endl;

    
    Employee employee(101, 50000, "IT", joining_date);
    cout << "Employee Details:" << endl;
    employee.display();

    return 0;
}
