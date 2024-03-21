#include<iostream>
using namespace std;

class  Address
{
  private:
    string building;
    string street;
    string  city;
    string  pincode;
  
  public:
  Address()
  {
    cout<<"default constructor called \n";
    building="ds";
    street="sj";
    city="karad";
    pincode="415998";
  }
  
  Address(string b,string s,string c, string p)
  {
    cout<<"parameterized constructor called \n";
    this->building=b;
   this-> street=s;

    this->city=c;
    this->pincode=p;
  }

 void setbuilding(string b)
  {
    this->building=b;
  }
  void setstreet(string s)
  {
    this->street=s;

  }
  
void setcity(string c)
{
  this->city=c;
}
void setpincode(string p)
{
  this->pincode=p;
}

string getbuilding()
{
  return this->building;
}

string getstreet()
{
  return this->street;
}

string getcity()
{
  return this->city;
}

string getpincode()
{
  return this->pincode;
}

void display()
{
    cout<<"enter the address  :"<<endl;
    cout<<"building  :"<<building<<endl;
    cout<<"street  :"<<street<<endl;
    cout<<"city  :"<<city<<endl;
    cout<<"pincode  :"<<pincode<<endl;
}

};

int main()
{

    string b;
    string s;
    string  c;
    string  p;


    cout<<"enter the building  :";
    cin>>b;
    cout<<"enter the street   :";
    cin>>s;
    cout<< "enter the city  :"  ;
    cin>>c;
    cout<<"enter the pincode  :";
    cin>>p;

    Address a1;
    a1.display();
    Address a2(b,s,c,p);
    a2.display();
}