// Register addresses:
#define PCA9955_MODE1 0x00
#define PCA9955_MODE2 0x01
#define PCA9955_LEDOUT0 0x02
#define PCA9955_LEDOUT1 0x03
#define PCA9955_LEDOUT2 0x04
#define PCA9955_LEDOUT3 0x05
// 0x06 to 0x07  not used
#define PCA9955_GRPPWM 0x08
#define PCA9955_GRPFREQ 0x09
#define PCA9955_PWMX_OFFSET 0x0A  // PWMX from 0x0A to 0x19
// 0x1A to 0x21  not used
#define PCA9955_IREFX_OFFSET 0x22 // IREFX from 0x22 to 0x31
// 0x32 to 0x39  not used
#define PCA9955_OFFSET 0x3A
#define PCA9955_SUBADR1 0x3B
#define PCA9955_SUBADR2 0x3C
#define PCA9955_SUBADR3 0x3D
#define PCA9955_ALLCALLADR 0x3E
// 0x3F to 0x41 reserved registers
#define PCA9955_PWMALL 0x42
#define PCA9955_IREFALL 0x43
#define PCA9955_EFLAG0 0x44
#define PCA9955_EFLAG1 0x45
// 0x46 to 0x7F not used