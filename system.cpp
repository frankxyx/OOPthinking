#include <iostream>
#include "system.h"

System::System(int particleNumber,double sideLength, double timeStep,double noiseStrength) {

    this->particleNumber = particleNumber;
    this->noiseStrength = noiseStrength;
    std::cout<<"I am constructing the System!"<<std::endl;
}

void System::updateRule() {
    // Implement the logic for updating rules
    std::cout<<"Updating the system..."<<std::endl;
}