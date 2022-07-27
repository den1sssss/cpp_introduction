#include <iostream>
#include <string>
#include <fstream>

void readFile(char **argv, std::string &buffer)
{
	std::fstream to_replace;
	std::string tmp = "";

	to_replace.open(argv[1], std::ios_base::in);
	while (1)
	{
		std::getline(to_replace, tmp);
		buffer.append((std::string)tmp);
		if (to_replace.eof())
			break;
		buffer.append("\n");
		tmp = "";
	}
}

void replace(std::string &buffer, std::string str1, std::string str2)
{
	int pos = 0;
	
	while(pos != -1)
	{
		pos=buffer.find(str1, pos);
		if(pos != -1)
		{
			buffer.insert(pos, str2);
			buffer.erase(str2.length() + pos, str1.length());
		}
	}
}

int main(int argc, char **argv)
{
	std::string str1;
	std::string str2;
	std::string buffer;

	if(argc == 4)
	{
		str1 = argv[2];
		str2 = argv[3];
		std::ofstream outfile((std::string)argv[1] + ".replace");
		readFile(argv, buffer);
		replace(buffer, str1, str2);
		outfile << buffer;
	}
	else
		std::cout << "Error! Incorrect input!" << std::endl;
	return (0);
}