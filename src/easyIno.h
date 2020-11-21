//Welcome to easyIno, a library made to make arduino programers life easier by simplifying the language and reuniting multiple libraries

//Dependencies always first!

#include<Arduino.h>

//Declarations

void mode();
void write();
void check();

//Functions

void mode(int pin, string set) {
    if(set == "in") {
        pinMode(pin, INPUT);
    } 
    if(set == "out"){
        pinMode(pin, OUTPUT);
    }
}