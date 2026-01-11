#ifndef resistor_h
#define resistor_h
struct Resistor_first_band{
    int black=0;
    int brown=1;
    int red=2;
    int orange=3;
    int yellow=4;
    int green=5;
    int blue=6; 
    int violet=7;
    int grey=8;
}R1;
struct Resistor_second_band{
    int black=0;
    int brown=1;
    int red=2;
    int orange=3;
    int yellow=4;
    int green=5;
    int blue=6; 
    int violet=0;
    int grey=0;
    int gold=0;
    int silver=0;
}R2;    
struct Resistor_third_band{
    int black=1;
    int brown=10;
    int red=100;
    int orange=1000;
    int yellow=10000;
    int green=100000;
    int blue=1000000; 
    int violet=10000000;
    int grey=100000000;
    int gold=0.1;
    int silver=0.01;
}R3;
#endif