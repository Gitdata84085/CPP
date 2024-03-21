#include<iostream>
using namespace  std;

class Box{

    private:
    int length;
    int width;
    int height;

    public:
      Box()
      {
        length=1;
        width=1;
        height=1;
      }
      Box(int l,int w,int h)

      {
        length=l;
        width=w;
        height=h;

      }

      Box(int value)
      {
          length=value;
          width=value;
          height=value;
      }

     void toCalculateVolume()
      {
        int volume;
        volume=(length*width*height);

        cout<<"volume of the box  :"<<volume<<"\n";
      }
};

int main()
{
    int l;
    int w;
    int h;
    int value;
    int choice;

    do{
        cout<<"0.exit"<<endl;
        cout<<"1.b1calculatevolume"<<endl;
        cout<<"2.b2calculatevolume"<<endl;
        cout<<"3.b3claculatevolume"<<endl;

        cout<<"enter the choice";

        cin>>choice;

        switch(choice)
        {
            case 0:
                cout<<"thank you";
            break;

            case 1:
            {
                Box b1;
                b1.toCalculateVolume();
            }
            break;

            case 2:
            {
                cout<<"enter the values";
                cin>>value;
            Box b2(value);
            b2.toCalculateVolume();
            }
            break;

            case 3:
            {
            cout <<"enter the length";
            cin>>l;
            cout<<"enter the width";
            cin>> w;
            cout<<"enter the height";
            cin>> h;

            Box b3(l,w,h);
            b3.toCalculateVolume();
            }
            break;

            default:
            cout<<"wrong choice";
            break;

        }
    }while(choice!=0);
    return 0;
}