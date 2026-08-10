#include <iostream>
#include "Owned.hpp"

int fight(bool flee){
    Enemy* e = Owned().e();
    if (flee) {return -1;}      // BUG: leaks e
    int result = e->hp;
    return result;
}

int main(){
    std::cout << fight(false) << ' ' << fight(true) << '\n';
}