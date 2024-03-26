#include<iostream>
using namespace std;

class Product{
private:
    int id;
    string title;
    double price;

public:
virtual void accept(){
    cout<<"Enter id"<<id;
    cin>>id;
    cout<<"Enter title"<<title;
    cin>>title;
    cout<<"Enter price"<<price;
    cin>>price;
}

void setPrice(float Price)
{
    this->price=price;
}

float getPrice()
{
    return this->price;
}
virtual void display(){
    cout<<"Id: "<<id;
    cout<<"Title: "<<title;
    cout<<"Price: "<<price;
}

};

class Book: public Product{
private:
    string author;

public:
    void accept(){
        Product::accept();
        cout<<"Enter author: "<<endl;
        cin>>author;

        setPrice(getPrice()-getPrice()*0.10);
    } 

    virtual void display(){
        cout<<"Author: "<<author;
        Product::display();
    }



};

class Tape: public Product{
private:
    string artist;

public:
    void accept(){
        Product::accept();
        cout<<"Enter artist:"<<endl;
        cin>>artist;
    }

    virtual void display(){
        cout<<"Artist: "<<artist<<endl;
        Product::display();
    }
};

int main(){
    Product *arr[3];
    int choice;
    int index=0;

    do{
        cout<<"0. exit"<<endl;
        cout<<"1. Book price"<<endl;
        cout<<"2. Tape price"<<endl;
        cout<<"3. Total products price"<<endl;

        cout<<"Enter the choice";
        cin>>choice;
        
        switch(choice)
        {
        case 0:
        cout<<"Thank you";
        break;

        case 1:
        if(index<3)
        {
            arr[index]=new Book();
            arr[index]->accept();
            index++;
        }
        else{
            cout<<"Array is full"<<endl;
        }
        break;

        case 2:
        if(index<3)
        {
            arr[index]=new Tape();
            arr[index]->accept();
            index++;
        }
        else
        {
            cout<<"Array is full"<<endl;
        }
        break;

        case 3:
        int total=0;
        {

        for(int i=0;i<3;i++)
        {
        total+=arr[i]->getPrice();
      
        }
          cout<<"total is "<<total;
        break;
        }
        }

    }while(choice!=0);

    for(int i=0;i<3;i++)
    {
        delete arr[i];
        arr[i]=NULL;
    }
}