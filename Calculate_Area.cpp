/* Program to display area of rectangle, triangle and circle area using Pure Virtual Fuction  in C++ */

//Calculate Area Using Pure Virtual function
#include<iostream>
using namespace std ;
class shape
                {
                public:
                double a,b,r;
                void getdata()
                {
                cout << "Enter value of a and b: " << endl;
                cin >> a>>b;
                }
                void virtual display_area()=0;
                };
class rectangle:public shape                
               {
               public:
                    void display_area ()
                    {
                    cout <<"The area of Rectangle: " <<a*b<<endl;
                    }
               };      
class triangle:public shape
                { 
                public:
                  void display_area()
                {
                  cout <<"The area of triangle: "<<0.5*a*b<< endl;
                }
                };       
class circle: public shape
                {
                protected:
                double r;
                public:
                void getdata()
                {
                cout << "Enter value of  r: " << endl;
                cin >> r;
                }
                void display_area ()   
                 {
                 cout <<"The area of circle: " <<3.14*r*r<< endl;
                 }            
                };
         
int main()
{
        rectangle R;
        R.getdata();
        R.display_area();
        triangle T;
        T.getdata();
        T.display_area();
        circle C;
        C.getdata();
        C.display_area();
        return  0;
}
