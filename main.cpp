#include "function.hpp"

int main(){
    // random seed
    srand(time_t(NULL));
    vector<uint16_t> input(SEQ_LEN);
    vector<uint16_t> output(SEQ_LEN);
    
    // random input sequence
    cout << "random input sequence(1~" << SEQ_LEN <<")\n";
    for (uint16_t i = 0; i < SEQ_LEN; ++i){
        input.at(i) = rand() % SEQ_LEN + 1;
        cout << input.at(i) << " ";
    }
    cout << "\n\n";
    
    
    
    // start counting time
    auto start = chrono::system_clock::now();
    
    // sort sequence (select between two choices: ascend/descend)
    output = selection_sort(input, "descend");
    
    // end counting time & measure time elapsed
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
    
    
    
    // sorted sequence
    cout << "\nsorted output sequence \n";
    for (uint16_t i = 0; i < SEQ_LEN; ++i){
        cout << output.at(i) << " ";
    }
    cout << "\n";
    return 0;
}

