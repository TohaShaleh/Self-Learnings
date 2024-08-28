#include <iostream>
using namespace std;



class a{
    public:
    
    virtual void aa()
    {
        cout<<"Thsi is parent class"<<endl;
    }
};

class b:public a{
    public:
    
    void aa() override
    {
        cout<<"This is child class"<<endl;
    }
};

int main(){


    a *obj1=new a();  // Pointer obj1  class a type.which points to the instance of 'a' Class
    obj1->aa();       // called the method through the poiter of a class 

    a *obj2=new b();
    obj2->aa();



    //The delete operators are used to free the dynamically allocated memory for obj1 and obj2.
    // This ensures that there is no memory leak.
    delete obj1;
    delete obj2;

}