#include <iostream>
using namespace std;


class a {
public:
    a()
    {
        cout<<"Constructor of class a"<<endl;
    }

    void aa() {
        cout << "hello aa from a" << endl;
    }
};

class b : virtual public a {
public:
    b()
    {
        cout<<"Constructor of class b"<<endl;
    }

   void bb() {
        cout << "hello bb from b" << endl;
    }
};

class c : virtual public a {
public:
    c()
    {
        cout<<"Constructor of class c"<<endl;
    }

    void cc() {
        cout << "hello cc from c" << endl;
    }
};

class d : public b, public c {
public:
    d() {
        cout << "I am from d" << endl;
    }
};

int main() {
    d obj;
    obj.aa();  // Calls aa() from class a
    obj.bb();  // Calls bb() from class b
    obj.cc();  // Calls cc() from class c
    
    return 0;
}