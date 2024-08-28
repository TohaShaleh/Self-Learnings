#include <iostream>
using namespace std;




class shape{

    private:

    double height,radius,base;
    int length,width;



    public:

    shape()
    {
        cout<<"\n Default Constructor \n"<<endl;
    }

    shape(string ss)
    {
        cout<<endl<<ss<<endl<<endl;
    }

    double area(double radius)
    {
        this->radius=radius;
        return 2*3.1416*radius;
    }

    double area(double height,double base)
    {
        this->height=height;
        this->base=base;
        return height*base*0.5;
    }

    friend int area(shape &frnd, int length,int width);

};


// We can not use this keyword in friend function..
// we use friend function to access the private data members outside of the class..

int area(shape &frnd,int length,int width)
{
    frnd.length=length;
    frnd.width=width;
    return length*width;
}



int main(){

    shape obj;

    string s="Parameterized Constructor!!";
    shape ob(s);
    
    double r;
    cout<<"Enter the radius of any circle : ";
    cin>>r;

    double h,b;
    cout<<"Enter the height and base of a tringle : ";
    cin>>h>>b;

    int l,w;
    cout<<"Enter the length and width of of a rectangle : "; 
    cin>>l>>w;

    // shape obj;

    cout<<"Area of the Circle : "<<ob.area(r)<<endl;   // Calling through object 'ob'

    cout<<"Area of the Triangle : "<<obj.area(h,b)<<endl;

    cout<<"Area of the Rectangle : "<<area(obj,l,w)<<endl;

    
    
}