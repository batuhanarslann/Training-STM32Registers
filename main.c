
//Where is the led connected?
//Port: A
//Pin: 5

#define PERIPH_BASE                 (0x40000000UL)
#define AHB1PERIPH_OFFSET           (0x00020000UL)
#define AHB1PERIPH_BASE             (PERIPH_BASE + AHB1PERIPH_OFFSET)
#define GPIOA_OFFSET                (0x0000U)       //0x20000
#define GPIOA_BASE                  (AHB1PERIPH_BASE + GPIOA_OFFSET)

#define RCC_OFFSET                  (0x3800UL)
#define RCC_BASE                    (AHB1PERIPH_BASE + RCC_OFFSET)

#define AHB1EN_R_OFFSEET            (0x30UL)
#define RCC_AHB1EN_R                (*(volatile unsigned int *)(RCC_BASE + AHB1EN_R_OFFSEET))


#define OD_R_OFFSET                 (0x14UL)
#define GPIOA_OD_R                  (*(volatile unsigned int*)(GPIOA_BASE + OD_R_OFFSET))

#define GPIOAEN                     (1U<<0) //0b 0000 0000 0000 0000 0000 0000 0000 0001


#define PIN5                        (1U << 5)
#define LED_PIN                     (PIN5)
int main() {
    while(1){
        // Write something
    }
}