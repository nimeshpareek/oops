#include<bits/stdc++.h>
using namespace std;

class addition{
    private:
    int a,b;

    public:
    void set_number(int a, int b){
        this -> a = a;
        this -> b = b;
    }

    void print( ){
        cout << "A is: " << a << ", B is: " << b << endl;
    }
     friend addition add(addition x, addition y);
};
addition add(addition x, addition y){
     addition ob;
     ob.set_number(x.a + y.a, x.b + y.b);
     return ob;
}

int main()
{
addition f1, f2, sum;
f1.set_number(5,5);
f2.set_number(2,3);

sum = add(f1, f2);
sum.print();




return 0;
}