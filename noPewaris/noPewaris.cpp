#include <iostream>
using namespace std;

class baseClass final{
    public:
        virtual void perkenalan(){
            cout << "hallo saya function dari base class";
        }
};

class deriveClass : public baseClass {
    public : 
    void perkenalan(){
        cout << "hallo saya function dari derived Class";
    }
};

int main() {
    deriveClass a;
    a.perkenalan();

    return 0;
}