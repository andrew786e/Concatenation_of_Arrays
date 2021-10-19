#include <iostream>
#include <cstdarg>
#include <algorithm>
#include <vector> 
using namespace std ;

#ifndef ARRAY_COMB
#define ARRAY_COMB

/*Note: this header file was written using namespace std which is not good practice 
*/

class Concat_Arrays {
    public:
    void logs() ;

    //This function takes in any number of elements of an array
    //and finds the size.
    //Arguments: Arrays
    template<typename T, typename ... Args>
    void logs(T& first, Args& ... args) ;

    //Gets the value of the combined vector
    vector<int> get_value() ;

    private:

    //This function adds all the arrays in a vector list
    //Arguments: Arrays and Array sizes
    void combine_value(int* first_val, int array_size) ;

    int size_of ;
    int size_keeper = 0 ;
    int starting_val = 0 ;
    int previous_val = 0 ;
    vector<int> array;
} ;


void Concat_Arrays::logs(){
} ;

template<typename T, typename ... Args>
void Concat_Arrays::logs(T& first, Args& ... args){
    size_of = sizeof(first)/sizeof(first[0]) ;
    combine_value(first,size_of) ;
    logs(args ...) ;
}

void Concat_Arrays::combine_value(int* first_val, int array_size){
    for(int i = 0 ; i < array_size; i++){
        array.push_back(first_val[i]) ;
    }
}

vector<int> Concat_Arrays::get_value(){
    return array ;
}

#endif

