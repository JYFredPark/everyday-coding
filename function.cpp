//
//  function.cpp
//  practice
//
//  Created by Jae Yong Park on 8/12/18.
//  Copyright © 2018 Jae Yong Park. All rights reserved.
//

#include "function.hpp"

vector<uint16_t>selection_sort(vector<uint16_t> seq, string status){
    uint16_t sort_num = seq.size();
    cout << "In " << status << "ing order\n";
    // find the minimum/maximum value of each subsequence and put it in the ith smallest/biggest position
    for(uint16_t i = 0; i < sort_num - 1; ++i){
        uint16_t index = i;
        uint16_t temp = 0;
        
        // sort sequence in increasing order
        if(status == "ascend"){
            for(uint16_t j = i; j < sort_num; ++j)
                if(seq.at(j) < seq.at(index))
                    index = j;
        }
        // sort sequence in decreasing order
        else if(status == "descend"){
            for(uint16_t j = i; j < sort_num; ++j)
                if(seq.at(j) > seq.at(index))
                    index = j;
            
        }
    
        // switch ith position and min/max index position
        temp = seq.at(i);
        seq.at(i) = seq.at(index);
        seq.at(index) = temp;
        
        cout <<"Step " << (int)i+1 << "\n";
        for(uint16_t i = 0; i < sort_num; ++i){
            cout << seq.at(i) << " ";
        }
        cout << "\n\n";
    }
    return seq;
}

vector<uint16_t>quick_sort(vector<uint16_t> seq){
    uint16_t sort_num = seq.size();
    vector<uint16_t> sorted_seq(sort_num,0);
    
    
    return sorted_seq;
}
