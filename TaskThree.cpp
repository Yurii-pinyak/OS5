#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
void Starttest(){
    for (int i = 0; i < 30; i++) {
        cout <<"ID = \t" << this_thread::get_id() << " " << i << " f" << endl;
        this_thread::sleep_for(chrono::seconds(3));
    }
}
int main(int argc, const char * argv[]) {
    thread newthread(Starttest);
    for (int i = 0; i < 30; i++) {
        cout <<"ID = \t" << this_thread::get_id() << " " << i << " main" << endl;
        this_thread::sleep_for(chrono::seconds(2));
    }
    newthread.join();
    
}
