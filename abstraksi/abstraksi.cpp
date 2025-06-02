#include <iostream>

using namespace std;

class AbstrakiKlas {
    private: string x, y;

    public:

    void setXY(string a, string b,){
        x = a;
        y = b;
    }
    void display() {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
};

int main(){
    Abstraksiklas ak;
    ak.setXY ("yogyakarta", "kampus");
    Ak.display();

    return 0;

}