#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector> //to use standard C++ vectors
#include "box.h" 
#include "particle.h" 

class System {
    public:
        System(int particleNumber,double sideLength, double timeStep,double noiseStrength);
        int   particleNumber;
        double noiseStrength;
        double sideLength;
        double timeStep;
        
        Box simulationBox;
        std::vector<Particle> particles;

        void updateRule();
};

#endif