#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan()final{
            cout << "hallo saya function dari base class";
        }
};

class deriveClass : public baseClass {
    public : 
    void perkenalan(){
        cout << "hallo saya function dari derived Class";
    }
};