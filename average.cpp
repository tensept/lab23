#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[]){
    float sum;

    if(argc != 1){
        cout << "---------------------------------\n";
        for(int i =0; i < argc; i++){
            sum += atof(argv[i]);
        }
        cout << "Average of " << argc-1 << " numbers = " << sum/(argc-1) << "\n";
        cout << "---------------------------------";
    }
    else cout << "Please input numbers to find average.";

    return 0;
}

