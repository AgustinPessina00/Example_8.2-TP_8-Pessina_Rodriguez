//=====[Libraries]=============================================================

#include "arm_book_lib.h"

#include "smart_home_system.h"
#include "light_level_control.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

AnalogIn potentiometerR(A0);
AnalogIn potentiometerG(A1);
AnalogIn potentiometerB(A2);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void lightLevelControlInit() { }

void lightLevelControlUpdate() { }

float lightLevelControlReadR()
{
    return potentiometerR.read();
}

float lightLevelControlReadG()
{
    return potentiometerG.read();
}


float lightLevelControlReadB()
{
    return potentiometerB.read();
}


//=====[Implementations of private functions]==================================