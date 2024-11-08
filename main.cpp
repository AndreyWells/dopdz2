#include <iostream>
#include <map>
#include <windows.h>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    map<int, string> dict;
    vector<int>keys;
    ifstream in("test.txt");
    if (in.is_open()) {
            string line;
      while(getline(in, line)) {
            int key = line[0] - '0';
            keys.push_back(key);
            dict[line[0] - '0'] = line.substr(2);

      }
      in.close();
      }
    return 0;
}
