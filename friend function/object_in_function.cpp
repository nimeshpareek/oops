#include<bits/stdc++.h>
using namespace std;

class xyz{
    int a, b;

    public:
    void setdata(int a, int b){
        this -> a = a;
        this -> b = b;
    }

    void getdata(){
        cout << "a is: " << a << "|| b is: " << b << endl;
    }
    
    void add_classes(xyz ob1, xyz ob2){
        a = ob1.a + ob2.a;
        b = ob1.b + ob2.b;    
    }
};

int main()
{
xyz x1, x2, add;
x1.setdata(1,1);
x2.setdata(2,2);
add.add_classes(x1, x2);
add.getdata();
return 0;
}