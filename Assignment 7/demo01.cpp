#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    int choice=0;
    int choice1=0;
    int index=0;
    Employee *arr[10];
    int mcount = 0;
    int scount = 0;
    int smcount = 0;

    do{
        cout<<"0. Exit"<<endl;
        cout<<"1. Accept Employee: "<<endl;
        cout<<"2. Display the count of all employees with respect to designation: "<<endl;
        cout<<"3. Display all Managers: "<<endl;
        cout<<"4. Display all Salesman: "<<endl;
        cout<<"5. Display all Salesmanagers: "<<endl;
        cout<<"Enter your Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0:
            cout<<"Thank you"<<endl;
            break;

            case 1:
            cout<<"Choose type of Employee"<<endl;
            cout<<"1. Manager"<<endl;
            cout<<"2. Salesman"<<endl;
            cout<<"3. Salesmanager"<<endl;
            cout<<"Enter your choice";
            cin>>choice1;

            switch(choice1){
                case 1:
                if(index<10){
                    arr[index]=new Manager();
                    arr[index]->accept();
                    index++;
                    mcount++;
                }
            else{
                cout<<"Array is full"<<endl;
            }
            break;

            case 2:
            if(index<10){
                    arr[index]=new Salesman();
                    arr[index]->accept();
                    index++;
                    scount++;  
            }
            else{
                cout<<"Array is full"<<endl;            
            }
            break;

            case 3:
            if(index<10){
                    arr[index]=new SalesManager();
                    arr[index]->accept();
                    index++;
                    smcount++; 
            }
            else{
                cout<<"Array is full"<<endl;
            }
            break;

            default:
            cout<<"Invalid choice"<<endl;
            break;
        }

        case 2:
        cout<<"Count of Managers: "<<mcount<<endl;
        cout<<"Count of Salesman: "<<scount<<endl;
        cout<<"Count of SalesManager: "<<smcount<<endl;
        break;

        case 3:
        for(int i=0;i<index;i++){
            if(typeid(*arr[i])==typeid(Manager)){
                arr[i]->display();
            }
        }
        break;

        case 4:
        for(int i=0;i<index;i++){
            if(typeid(*arr[i])==typeid(Salesman)){
                arr[i]->display();
            }
        }
        break;

        case 5:
        for(int i=0;i<index;i++){
            if(typeid(*arr[i])==typeid(SalesManager)){
                arr[i]->display();
            }
        }
        break;

        default:
        cout<<"Invalid choice"<<endl;
        break;       
        }
            
        }while(choice!=0);

        for(int i=0;i<index;i++){
            delete arr[i];
            return 0;
        }

    }
    
