//
// Created by support on 20-Dec-20.
//

#ifndef SOURCE_CODES_SHA_H
#define SOURCE_CODES_SHA_H
#include <string>
#include <vector>
using namespace std;
vector <unsigned long> convert_to_binary(string );
vector<unsigned long> resize_block(vector<unsigned long> input);
vector<unsigned long> padding (vector <unsigned long> block);
void hashing(vector <unsigned long>);


#endif //SOURCE_CODES_SHA_H
