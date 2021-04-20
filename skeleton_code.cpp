#include <iostream>
using namespace std;

// Define state machine states for the dispenser
typedef enum{
    START = 0,
    CONFIGURE = 1,
    PRESSURE = 2,
    DISPENSE = 3,
    IDLE = 4,
    STOP = 5
}DISPENSER_STATE_MACHINE_TYPE;


typedef enum{
   FOOD_MOTOR = 0,
   WATER_PUMP = 1,
   BOTH = 2,
   NONE = 3
}DISPENSER;

DISPENSER_STATE_MACHINE_TYPE system_state = IDLE;
DISPENSER dispenser_state = NONE;

int main() {

    switch(system_state){
        case START:
            // Check to see if the button is pressed and if so move into the
            // configuration state

            if(){
               system_state = START;
            }
            break;

        case CONFIGURE:
            // Read rotary switch to determine time configuration

            // LOOK INTO TIME HOW TIME WORKS IN LINUX
            // USE EITHER SWITCH OR ELSE IF STATEMENTS


            // MOVE ON TO THE PRESSURE STATE
            system_state = PRESSURE;

            break;

        case PRESSURE:
            // Read analog signal from the FSR's to determine whether or not the bowls
            // need to be filled.

            //SET UP APPROPRIATE WEIGHT RANGE BEFOREHAND TO COMPARE TO BEFOREHAND
            if(){
               system_state = DISPENSE;
            }
            else{
                system_state = IDLE;
            }

            break;

        case DISPENSE:
            switch(dispenser_state){
                // MIGHT NEED TO DO SOME MATH HERE TO DETERMINE HOW LONG TO ACTUATE

                case FOOD_MOTOR:
                    // Turn on motor, rotate it for set amount of time

                    // READ FSR
                    break;
                case WATER_PUMP:
                    // Actuate pump and then turn off signal once

                    // READ FSR
                    break;

                case BOTH:

                    break;
                // READ ULTRASONIC SENSOR HERE AND MOVE INTO IDLE STATE IF NECESSARY

                // READ FSR'S AS WELL IN REAL TIME
            }


            break;

        case IDLE:

            // WAIT FOR SOME UNDETERMINED AMOUNT OF TIME BEFORE MOVING BACK TO EITHER
            // FSR OR DISPENSE STATE

            break;

        case STOP:
            // Turn off all components


            break;


        default:
            system_state = IDLE;
    }
    return 0;
}