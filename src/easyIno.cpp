//Welcome to easyIno, a library made to make arduino programers life easier by simplifying the language and reuniting multiple libraries

//Inclusions
#include<easyIno.h>

//Mode
void mode(int pin, string set) {
    if(set == "in") {
        pinMode(pin, INPUT);
    } 
    if(set == "out"){
        pinMode(pin, OUTPUT);
    }
}
