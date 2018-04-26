//filename: utility.cpp
//project class headers
#include "utils.h"
#include "tx.h"
#include "block.h"
#include "blockchain.h"

//other c++ libraries
#include <fstream>
#include <iostream>

#include <vector>
#include <string>

#include "picosha2.h"
#include "omp.h"
#include "openacc.h"


using namespace std;

/*This function can be used to generate for any string with certain leading zero,
	written for generating first Hash value*/

string createHash(string s1){
    long nounce = 0;
    char temp[MATCHING_ZEROS + 1];
    int i=0;
    for(i=0;i<MATCHING_ZEROS;i++){
        temp[i]='0';
    }
    temp[i]='\0';
    string str(temp);
    string hash;
    string txList_str = s1;
    #pragma acc enter data copyin(txList_str, nounce)
    while(hash.substr(0,MATCHING_ZEROS) != str){
        hash = picosha2::hash256_hex_string(txList_str + to_string(nounce));
        nounce++;
    }
	cout<< "Hash is "<<hash<<endl;
	return hash;
}

