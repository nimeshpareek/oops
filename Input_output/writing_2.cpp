#include<iostream>
#include<fstream>
using namespace std;
int main()
{       
    ofstream file("file_1");
    cout << "Enter your Name: " << endl;
    string name;
    getline(cin, name);
    cout << "Enter number" << endl;
    int number;
    cin >> number;
    file << name;
     file << number;
    file.close();

return 0;
}