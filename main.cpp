#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <algorithm>
#include <windows.h>
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
            dict[(int) line[0] - '0'] = line.substr(2);

      }
      in.close();
      for (int key: keys) {
            cout << key << endl;
      }
      sort(keys.begin(), keys.end());
      cout << " "<< endl;
      for(int key: keys) {
            cout << dict[key] << endl;
      }
    }
    else {
        wcout << L" Файл не открыт " << endl;
    }

    return 0;
}
