// Mechaduino parameter declarations

#ifndef __PARAMETERS_H__
#define __PARAMETERS_H__
#define firmware_version "0.1.4"
#define identifier "x" // Change this to help keep track of multiple mechaduinos (printed on startup)

/* Current Parameters */
extern volatile float Ts;
extern volatile float Fs;
extern volatile float pKp;
extern volatile float pKi;
extern volatile float pKd;
extern volatile float pLPF;
extern volatile float vKp;
extern volatile float vKi;
extern volatile float vKd;
extern volatile float vLPF;
extern const float lookup[];
extern volatile float pLPFa;
extern volatile float pLPFb;
extern volatile float vLPFa;
extern volatile float vLPFb;
extern const int spr; // 200 steps per revolution
extern const float aps; // Angle per step
extern int cpr; // Counts per rev
extern const float stepangle;
extern volatile float PA;
extern const float iMAX;
extern const float rSense;
extern volatile int uMAX;
extern const int sin_1[];

/* Pins */
#define IN_4  6
#define IN_3  5
#define VREF_2 4
#define VREF_1 9
#define IN_2  7
#define IN_1  8
#define ledPin  13
#define chipSelectPin A2 // Output to chip select
#define step_pin 1
#define dir_pin 0
#define enable_pin 2
#define sda_pin 20
#define scl_pin 21

// a
//#define I2C_ID 0x0a
// b
//#define I2C_ID 0x0b
// c
#define I2C_ID 0x0c
// d
//#define I2C_ID 0x0d
/* For faster digitalWrite: */
#define IN_1_HIGH() (REG_PORT_OUTSET0 = PORT_PA06)
#define IN_1_LOW() (REG_PORT_OUTCLR0 = PORT_PA06)
#define IN_2_HIGH() (REG_PORT_OUTSET0 = PORT_PA21)
#define IN_2_LOW() (REG_PORT_OUTCLR0 = PORT_PA21)
#define IN_3_HIGH() (REG_PORT_OUTSET0 = PORT_PA15)
#define IN_3_LOW() (REG_PORT_OUTCLR0 = PORT_PA15)
#define IN_4_HIGH() (REG_PORT_OUTSET0 = PORT_PA20)
#define IN_4_LOW() (REG_PORT_OUTCLR0 = PORT_PA20)
#define ledPin_HIGH() (REG_PORT_OUTSET0 = PORT_PA17)
#define ledPin_LOW() (REG_PORT_OUTCLR0 = PORT_PA17)
#define CHIPSELECT_HIGH() (REG_PORT_OUTSET1 = PORT_PB09)
#define CHIPSELECT_LOW() (REG_PORT_OUTCLR1 = PORT_PB09)

//#define ENABLE_PROFILE_IO    // Define to enable profiling I/O pins
#ifdef ENABLE_PROFILE_IO
#define TEST1   3
#define TEST1_HIGH() (REG_PORT_OUTSET0 = PORT_PA09)
#define TEST1_LOW() (REG_PORT_OUTCLR0 = PORT_PA09)
#else
#define TEST1_HIGH()
#define TEST1_LOW()
#endif
#endif
