#include <iostream>

#include <unistd.h>

#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int temp;
    temp = fork();
    if (temp == 0)
    {

        string rezult = "kill -9 " + to_string(getpid());

        system(rezult.c_str());

    }
    else {

    }
}
