#if !defined(DEVICE_NAME)
#define DEVICE_NAME "Ewing Aero 2400TX"
#endif
#define TARGET_ELRSSX1280TX_PCB
#define USE_SX1280_DCDC
#define BACKPACK_LOGGING_BAUD 420000
// GPIO pin definitions
#define GPIO_PIN_NSS PA4
#define GPIO_PIN_MOSI PA7
#define GPIO_PIN_MISO PA6
#define GPIO_PIN_SCK PA5
#define GPIO_PIN_RST PB4
// #define GPIO_PIN_DIO0 PA13
#define GPIO_PIN_DIO1 PB0
#define GPIO_PIN_BUSY PB1
#define GPIO_PIN_RX_ENABLE PA15
#define GPIO_PIN_TX_ENABLE PA0
#define GPIO_PIN_RCSIGNAL_TX PB6
#define GPIO_PIN_RCSIGNAL_RX PB6
//#define GPIO_PIN_DEBUG_RX PA3
//#define GPIO_PIN_DEBUG_TX PA2
#define GPIO_PIN_LED_RED PB5
#define GPIO_LED_RED_INVERTED 0
#define GPIO_PIN_LED GPIO_PIN_LED_RED
#define RADIO_SX1280
// Output Power
#define MinPower            PWR_10mW
#define MaxPower            PWR_1000mW
#define DefaultPower        PWR_250mW
// SX1280 drive in dBm for each UI step: 10mW, 25mW, 50mW, 100mW, 250mW, 500mW, 1000mW
#define POWER_OUTPUT_VALUES {-18, -14, -10, -6, -2, 2, 6}











