#include<iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    double marks;

public:
    void initStudent()
    {
        int rollno=84085;
        string name="Adarsh";
        double marks=20;
    }

    void acceptStudentFromConsole()
    {
        cout<<"Enter roll no"<<endl;
        cin>>rollno;
        cout<<"Enter student name"<<endl;
        cin>>name;
        cout<<"Enter marks"<<endl;
        cin>>marks;
    }

    void printStudentOnConsole()
    {
        cout<<"Roll no :"<<rollno<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Marks :"<<marks<<endl;
    }

};

int main()
{
    int choice;
    student s;

    do
    {
        cout<<"0. EXIT"<<endl;
        cout<<"1. initStudent"<<endl;
        cout<<"2. Accept Student"<<endl;
        cout<<"3. Display student"<<endl;
        cout<<"4. Enter your choice"<<endl;
        cin>> choice;

        switch(choice)
        {
            case 0:
            cout<<"Thank you for using our app"<<endl;
            break;
            
            case 1:
            s.initStudent();
            break;

            case 2:
            s.acceptStudentFromConsole();
            break;

            case 3:
            s.printStudentOnConsole();
            break;

            default:
            cout<<"Wrong Choice..."<<endl;
            break;
        } 
    } while (choice!=0);
    return 0;
}