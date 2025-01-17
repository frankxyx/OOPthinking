#include <iostream>
#include "system.h"
int main(){
    int N = 100;
    double L = 20.0;
    double dt = 0.5;
    double noise = 0.1;
    System model(N, L, dt, noise);
    std::cout<<"The system contains "<<model.particleNumber<<" particles."<<std::endl;
    std::cout<<"The system has noise "<<model.noiseStrength<<std::endl;

    model.updateRule();
    return 0;
}