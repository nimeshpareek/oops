#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string temp;
    ifstream out("file_1");
    getline(out, temp);
    cout << temp;

    return 0;
}