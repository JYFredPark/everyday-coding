//
//  function.hpp
//  practice
//
//  Created by Jae Yong Park on 8/12/18.
//  Copyright © 2018 Jae Yong Park. All rights reserved.
//

#ifndef function_hpp
#define function_hpp

#include<stdio.h>
#include<stdlib.h>
#include<string> // string class
#include<time.h>
#include<random>
#include<iostream>
#include<vector>
#include<chrono> // checking time

#define SEQ_LEN 20

using namespace std;

vector<uint16_t>selection_sort(vector<uint16_t> seq, string status);
vector<uint16_t>quick_sort(vector<uint16_t> seq);

#endif /* function_hpp */
