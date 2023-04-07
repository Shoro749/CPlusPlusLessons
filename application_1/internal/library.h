#include <iostream>
#include <windows.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define ukr_lang {SetConsoleCP(1251); SetConsoleOutputCP(1251);}

#define print(value) cout << value
#define println(value) cout << value << endl
#define read(value) cin >> value;
#define next_line cout << endl