#include <iostream>
using namespace std;

/// Encapsulation is achieved through Access Specifiers


class a{
    public:
    
    void aa()
    {
        cout<<"This is parent class"<<endl;
    }
    void aa2()
    {
        cout<<"This is parent 2"<<endl;
    }
};

class b:protected a{
    public:
    void bb()
    {
        cout<<"this is child1"<<endl;
    }
    void call_aa()
    {
        aa();        // call the aa method 
    }
    
    
};
int main(){
    b obj;
    obj.call_aa();  

    // calling aa method through call_aa method
    // aa method is protected in call b
    //  so we cant call the method aa directly outside the b class
    // It is only accessible through class b or throght the derived call of b
    
}