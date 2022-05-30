#include "Truckloads.h"
#include "Reverse.h"
#include "EfficientTruckloads.h"
#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main (int argc,char* argv[]){

    shared_ptr<Reverse> reverse = make_shared<Reverse>();
    shared_ptr<Truckloads> truckloads = make_shared<Truckloads>();
    shared_ptr<EfficientTruckloads>();

    if (agrc != 5){
        cout <<"ERROR" <<endl;
        exit(1);
    }

    if (isdigit(*argv[1])){
        int i = stoi(agrv[1]);
        if(i<0){
            cout << "ERROR";
        }else{
            count << reverse->reverseString(a) <<"";
        }
    }

    string a =agrv[2];
    cout << reverse->reverseString(a)<<"";
    
    if(isdigit(*argv[3]) && isdigit(*argv[4])){
        int numCrates = stoi (argv[3]);
        int loadSize = stoi(argv[4]);
        if (numCrates < 0 || loadSize < 0){
            cout << "ERROR ERROR" << endl;
        }else{
            cout << truckloads->numTrucks(numCrates,loadSize) << ""
                 << efficientTruckloads->numTrucks(numCrates,loadSize) << endl;
        }
    }else{
        count<< "ERROR ERROR" << endl;
    }

}