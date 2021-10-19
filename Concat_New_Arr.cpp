/*This code combines any number of arrays into a single array. The code is run by
typing g++ Concat_New_Array.cpp in the command line to compile the code then typing
./a.out in the command line. Also note the command line must be in the same 
diresctory as the header file and .cpp file*/
#include "Concat_ARRAY.h" 

int main(){
    int a[] = {1,2,3,45} ;
    int b[] = {9,0,3} ;
    int k[] = {5,7,8} ;
    int d[] = {1,2,3,45,6,7,12} ;

    Concat_Arrays Value_Stored ;
    
    Value_Stored.logs(a,b,k,d) ;

    vector<int> y = Value_Stored.get_value() ;

    cout << "[ " ; 

    //Prints out the output of the array
    for(int i = 0; i < y.size(); i++){
        if(i == (y.size() - 1)){
            cout << y[i] ;
        }else{
            cout << y[i] << ", " ;
        }
    }

    cout << " ]" << endl ;


}