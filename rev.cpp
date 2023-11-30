#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char **argv)
{
    string cadena;

    if (argc != 2)
        std::cin >> cadena;
    else
        cadena = std::string(argv[1]);

	cout << strrev(cadena.c_str());
    return 0;
}
