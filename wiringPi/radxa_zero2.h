/*------------------------------------------------------------------------------------------*/
/*																							*/
/*					WiringPi RADXA_ZERO2 Board Headler file									*/
/*																							*/
/*------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------*/
#ifndef __RADXA_ZERO2_H__
#define __RADXA_ZERO2_H__

/*------------------------------------------------------------------------------------------*/
#define ZERO2_GPIO_MASK					(0xFFFFFF00)
#define ZERO2_GPIO_BASE					0xff634000
#define ZERO2_GPIOAO_BASE				0xff800000
#define ZERO2_GPIO_PWM_BASE        0xffd19000

#define ZERO2_GPIO_PIN_BASE				410

#define ZERO2_GPIOA_PIN_START			(ZERO2_GPIO_PIN_BASE + 50) 
#define ZERO2_GPIOA_PIN_END				(ZERO2_GPIO_PIN_BASE + 65)
#define ZERO2_GPIOH_PIN_START			(ZERO2_GPIO_PIN_BASE + 17)
#define ZERO2_GPIOH_PIN_END				(ZERO2_GPIO_PIN_BASE + 25)
#define ZERO2_GPIOZ_PIN_START			(ZERO2_GPIO_PIN_BASE + 1)
#define ZERO2_GPIOZ_PIN_END				(ZERO2_GPIO_PIN_BASE + 16)
#define ZERO2_GPIOAO_PIN_START			(ZERO2_GPIO_PIN_BASE + 86)
#define ZERO2_GPIOAO_PIN_END				(ZERO2_GPIO_PIN_BASE + 101)

#define ZERO2_GPIOA_FSEL_REG_OFFSET		0x120
#define ZERO2_GPIOA_OUTP_REG_OFFSET		0x121
#define ZERO2_GPIOA_INP_REG_OFFSET		0x122
#define ZERO2_GPIOA_PUPD_REG_OFFSET		0x13F
#define ZERO2_GPIOA_PUEN_REG_OFFSET    	0x14D
#define ZERO2_GPIOA_DS_REG_5A_OFFSET   	0x1D6
#define ZERO2_GPIOA_MUX_D_REG_OFFSET   	0x1BD
#define ZERO2_GPIOA_MUX_E_REG_OFFSET   	0x1BE


#define ZERO2_GPIOH_FSEL_REG_OFFSET		0x119		
#define ZERO2_GPIOH_OUTP_REG_OFFSET		0x11A
#define ZERO2_GPIOH_INP_REG_OFFSET       0x11B
#define ZERO2_GPIOH_PUPD_REG_OFFSET		0x13D
#define ZERO2_GPIOH_PUEN_REG_OFFSET      0x14B
#define ZERO2_GPIOH_DS_REG_3A_OFFSET   	0x1D4
#define ZERO2_GPIOH_MUX_B_REG_OFFSET		0x1BB

#define ZERO2_GPIOAO_FSEL_REG_OFFSET     0x009
#define ZERO2_GPIOAO_OUTP_REG_OFFSET     0x00d       
#define ZERO2_GPIOAO_INP_REG_OFFSET      0x00a		//'0' is set to output ,defalut is input
#define ZERO2_GPIOAO_PUPD_REG_OFFSET		0x00b
#define ZERO2_GPIOAO_PUEN_REG_OFFSET		0x00c
#define ZERO2_GPIOAO_DS_REG_A_OFFSET		0x007
#define ZERO2_GPIOAO_MUX_0_REG_OFFSET	0x005
#define ZERO2_GPIOAO_MUX_1_REG_OFFSET	0x006


#define ZERO2_GPIOZ_FSEL_REG_OFFSET		0x11C		
#define ZERO2_GPIOZ_OUTP_REG_OFFSET		0x11D
#define ZERO2_GPIOZ_INP_REG_OFFSET       0x11E
#define ZERO2_GPIOZ_PUPD_REG_OFFSET		0x14C
#define ZERO2_GPIOZ_PUEN_REG_OFFSET      0x13E
#define ZERO2_GPIOZ_DS_REG_4_OFFSET   	0x1D5
#define ZERO2_GPIOZ_MUX_B_REG_OFFSET		0x1B6
#define ZERO2_GPIOZ_MUX_C_REG_OFFSET		0x1B7

#define ZERO2_PWM_EF_OFFSET        0
#define ZERO2_PWM_0_DUTY_CYCLE_OFFSET  0x00
#define ZERO2_PWM_1_DUTY_CYCLE_OFFSET  0x01
#define ZERO2_PWM_MISC_REG_01_OFFSET   0x02

/// PWM_MISC_REG_CD
#define ZERO2_PWM_1_INV_EN         ( 27 )
#define ZERO2_PWM_0_INV_EN         ( 26 )
#define ZERO2_PWM_1_CLK_EN         ( 23 )
#define ZERO2_PWM_1_CLK_DIV0       ( 16 )  /// 22 ~ 16
#define ZERO2_PWM_0_CLK_EN         ( 15 )
#define ZERO2_PWM_0_CLK_DIV0       ( 8 )   /// 14 ~ 8
#define ZERO2_PWM_1_CLK_SEL0       ( 6 )   /// 7 ~ 6
#define ZERO2_PWM_0_CLK_SEL0       ( 4 )   /// 5 ~ 4
#define ZERO2_PWM_1_DS_EN          ( 3 )
#define ZERO2_PWM_0_DS_EN          ( 2 )
#define ZERO2_PWM_1_EN         ( 1 )
#define ZERO2_PWM_0_EN         ( 0 )

#ifdef __cplusplus
extern "C"{
#endif

extern void init_RADXA_ZERO2(struct libkhadas *libwiring);

#ifdef __cplusplus
}
#endif

#endif /* __RADXA_ZERO2_H__ */

