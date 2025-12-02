#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open())
	{
    	std::cerr << "Error: cannot open file" << std::endl;
    	return 1;
	}
	std::string line;
	std::string content;
	while (std::getline(inputFile, line)) // Cree content qui correspond au contenu du fichier
    	content += line + "\n";

	std::string s1 = av[2];
	std::string s2 = av[3];
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) // Cherche et remplace
	{
    	content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
   		pos += s2.length();
	}

	inputFile.close();

	std::string outputFileName = av[1];
    outputFileName += ".replace";
    std::ofstream outputFile(outputFileName); // Creation du fichier avec nom correct
    if (!outputFile.is_open())
    {
        std::cerr << "Error: cannot create output file" << std::endl;
        return 1;
    }
    outputFile << content;
    outputFile.close();
    
    return 0;
}