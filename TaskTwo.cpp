#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <sys/types.h>
#include <unistd.h>
#include <cstring>
using namespace std;
void start_prog(const char * arg[]){
    int index = 0;
    string teststr = "cd ~ && ./";
    while(arg[++index] != NULL){
        teststr +=arg[index];
        teststr +=" ";
    }
    system(teststr.c_str());
}
int main(int argc, const char ** argv) {
    if(argc == 1 || (argc == 2 && strcmp(argv[1], "--help") == 0)){

        cout << "syntax:\n\t" << argv[0] <<" --help or\n\tprojectname argv[]\n\t\n Your program should be ~/home/user dir\n";
    }
    else {
        cout << "Error";
    }
    if(argc >= 2){

        start_prog(argv);

    }
    else {
        cout << "Error";
    }
}