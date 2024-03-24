/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>



int main(void)
{
    uint32_t *pClkctrreg = (uint32_t*)0x40023830;
    uint32_t *pPortDmodreg = (uint32_t*)0x40020c00;
    uint32_t *pPortDoutreg = (uint32_t*)0x40020c14;

    //1.Enable the clock for GPIOD peripheral in the AHB1ENR.
    *pClkctrreg = *pClkctrreg | 0x08;//enable 3 bit only high others are 0.
    // or *pClkctrreg |= 0x08;

    //2.configure the mode of the IO pin as output.(explore GPIO mode register)
    //a.clear the 24 and 25th bit position(CLEAR).
    *pPortDmodreg = *pPortDmodreg & 0xfcffffff;
    //*pPortDmodreg &= 0xfcffffff;
    //b.Make 24th bit as 1 (SET)
    *pPortDmodreg |= 0x01000000;

    //3.SET 12th bit of the output data reg to make I/O pin-12 as HIGH.
    *pPortDoutreg |= 0x1000;

    while(1);
}