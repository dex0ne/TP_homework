#include <iostream>

int SimplesomeFunction(int i) {
    if(i > -1 && i < 5){
        return i;
    } else {
        return -1;
    }
}

int someFunction(int i) {
    if(i == 1) {
        return 1;
    } else if(i > 1) {
        if(i == 3) {
            return 3;
        } else if(i > 3) {
            if(i == 4) {
                return 4;
            } else {
                return -1;
            }
        } else {
            if(i == 2) {
                return 2;
            } else {
                return -1;
            }
        }
    } else if(i == 0) {
        return 0;
    } else {
        return -1;
    }
}


int main() {

    return 0;
}