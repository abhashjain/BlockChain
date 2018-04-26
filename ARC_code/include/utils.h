//File to contain all utility function
#ifndef SW_UTILS_H
#define SW_UTILS_H

#include "tx.h"
#include "block.h"
#include "blockchain.h"
#include <string>
#include <vector>
#include <set>
#include<iostream>
#include<sstream>
#include<fstream>
#include<time.h>

#include "picosha2.h"
//#include "omp.h"
//#include "openacc.h"

#define MICROSECONDS_IN_A_SECOND 1000000
#define NANOSECONDS_IN_A_SECOND 1000000000
#define MICROSECONDS_IN_A_NANOSECOND 1000
#define MATCHING_ZEROS 5
#define MINER_SLEEP 50	//sleep miner for this time

//function to calculate Sha256
std::string sha256(std::string s);


#endif

