#define PWMA 11    //motor driver pins
#define AIN2 13
#define AIN1 12
#define STBY 9
#define BIN1 8
#define BIN2 7
#define PWMB 6

#define leftOut1 2   //interrupt pins of motors 
#define leftOut2 3          
#define rightOut1 4
#define rightOut2 5

#define GPIO1 A5         
#define GPIO2 A4          
#define GPIO3 A3
#define GPIO4 A2
#define GPIO5 A1

#define tofAddress1 43
#define tofAddress2 44
#define tofAddress3 45
#define tofAddress4 46
#define tofAddress5 47

void motorDiver()
{
    pinMode(PWMA, OUTPUT);
    pinMode(AIN2, OUTPUT);
    pinMode(AIN1, OUTPUT);
    pinMode(STBY, OUTPUT);
    pinMode(BIN1, OUTPUT);
    pinMode(BIN2, OUTPUT);
    pinMode(PWMB, OUTPUT);
}

void motorInterrupt()
{
    pinMode(leftOut1, INPUT);
    pinMode(leftOut2, INPUT);
    pinMode(rightOut1, INPUT);
    pinMode(rightOut2, INPUT);
}