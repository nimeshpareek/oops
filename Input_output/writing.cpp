#include<iostream>
#include<fstream>
using namespace std;
int main()
{
// for writing in a file we have to out
string name = "Nimesh Pareek";
ofstream writing("writing.txt");
writing << name;
return 0;
}