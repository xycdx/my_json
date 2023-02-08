#pragma once

#include<string>
#include"json.h"
using namespace std;

class Parser
{
private:
    string m_str;
    int m_idx;
    Json parse_null();
    Json parse_bool();
    Json parse_number();
    string parse_string();
    Json parse_array();
    Json parse_object();

    void skip_white_space();
    char get_next_token();
    
public:
    Parser();
    void load(const string & str);
    Json parse();
};
