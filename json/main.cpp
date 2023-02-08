#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include "json.h"
using namespace std;

int main()
{
    ifstream fin("./json/test.json");
    stringstream ss;
    ss<<fin.rdbuf();
    const string &str=ss.str();
    Json j;
    j.parse(str);
    cout<<j["data"]["mid"].str()<<endl;

    system("pause");
    return 0;
}
