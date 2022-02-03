#include<iostream>
#include<fstream>
using namespace std;
int main()
{
// for writing in a file we have to out
string name = "Nimesh Pareek";
string temp;
ifstream reading("writing.txt");
// reading >> temp; this will cout first word only
getline(reading, temp); //  this will cout the whole line ... if we wanted to cout 2,3 lines then we have to write getline again for 2nd line
cout << temp;
return 0;
}