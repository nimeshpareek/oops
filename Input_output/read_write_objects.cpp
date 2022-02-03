#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream write_file;
write_file.open("final_file");
write_file << "This is nimesh\n";
write_file << "nintya is bad boy\n";
write_file << "naresh is harami\n";
write_file << "YOO this is N^3";
write_file.close();

ifstream read_file;
read_file.open("final_file");
string read;
// read_file >> read;
// cout << read; this will cout read only
while (read_file.eof() == 0)
{
    getline(read_file, read);
    cout << read;
}

return 0;
}