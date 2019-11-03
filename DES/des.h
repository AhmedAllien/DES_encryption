#pragma once
#include <iostream>
#include <string>
#include <sstream> 
#include <vector>
#include <unordered_map>
#include <stdlib.h>
using namespace std;
string bin2hex(string s);
string permute(string k, int* arr, int n);
string hex2bin(string s);
string permutation( int ptable[], int outnum , string hex_input, long long in_bits);
string s_box(string input);
string f_fun(string input,string key);
string xoor(string xor_in,string key);
void key_gen(string keys[],string input_key);
string shift_left(string k, int shifts);
void round(string &left,string &right,string key);
string des_encryprion(string plain,string key);