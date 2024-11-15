#include <iostream>
using namespace std;

class A {
    public :
        int k1;
        A(int k){
            k1 = k;
            cout << "Hi from class A" << &k1 << endl;
    }
};

int main(){
    int a = 5;
    int * b = new int(10);
    cout << &a << "\t" << a << endl;
    cout << &b << "\t" << b << "\t" << *b << "\n---------------------------" <<endl;
    
    A c(5);
    cout << &c << endl;
    
    A * d  = new A(5);
    cout << &d << "\t" << d << endl;
    return 0;
}