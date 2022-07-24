#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string str1;
	std::string str2;
	std::string buffer;
	// std::ofstream outfile;

	// ifstream fin("input.txt");
    // ofstream fout("output.txt");
    // int a, b;
    // fin >> a >> b;
    // fout << a + b << endl;
    // fin.close();
    // fout.close();
	if(argc == 4)
	{
		str1 = argv[2];
		str2 = argv[3];
		std::ofstream outfile((std::string)argv[1] + ".replace");
		read();
		replace();
		outfile << buffer;
	}
	else
		std::cout << "Error! Incorrect input!" << std::endl;
	return (0);
}

void read()
{

}
void replace()
{

}