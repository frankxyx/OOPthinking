#include <iostream>
#include "system.h"

System::System(int particleNumber,double sideLength, double timeStep,double noiseStrength) {
    
    std::cout<<"I am constructing the System!"<<std::endl;

    this->particleNumber = particleNumber;
    this->noiseStrength = noiseStrength;
    this->timeStep = timeStep;
    this->sideLength = sideLength;

    this->simulationBox = Box(sideLength,sideLength,0,0);

    this->particles.resize(this->particleNumber);
}

void System::updateRule() {
    // Implement the logic for updating rules
    std::cout<<"Updating the system..."<<std::endl;
}