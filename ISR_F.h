/*
 * ISR.h
 *
 *  Created on: Sep 29, 2018
 *      Author: Engr: M.Hessen
 */

#ifndef ISR_H_
#define ISR_H_
/*-------------------------------------------------------*/
/*-----------------------*/
#define Enable  211
#define Disable 200
/*-----------------------*/
/*___________________________________________________*/
#define VT01_External_Interrupt_Request_0     Disable
/*---------------------------------------------------*/
#define VT02_External_Interrupt_Request_1     Disable
/*---------------------------------------------------*/
#define VT03_External_Interrupt_Request_2     Disable
/*---------------------------------------------------*/
#define VT04_Timer_Counter2_Compare_Match     Disable
/*---------------------------------------------------*/
#define VT05_Timer_Counter2_Overflow          Disable
/*---------------------------------------------------*/
#define VT06_Timer_Counter1_Capture_Event     Disable
/*---------------------------------------------------*/
#define VT07_Timer_Counter1_Compare_Match_A   Disable
/*---------------------------------------------------*/
#define VT08_Timer_Counter1_Compare_Match_B   Disable
/*---------------------------------------------------*/
#define VT09_Timer_Counter1_Overflow          Enable
/*---------------------------------------------------*/
#define VT10_Timer_Counter0_Compare_Match     Disable
/*---------------------------------------------------*/
#define VT11_Timer_Counter0_Overflow          Disable
/*---------------------------------------------------*/
#define VT12_Serial_Transfer_Complete         Disable
/*---------------------------------------------------*/
#define VT13_USART_Rx_Complete                Disable
/*---------------------------------------------------*/
#define VT14_USART_Data_Register_Empty        Disable
/*---------------------------------------------------*/
#define VT15_USART_Tx_Complete                Disable
/*---------------------------------------------------*/
#define VT16_ADC_Conversion_Complete          Disable
/*---------------------------------------------------*/
#define VT17_EEPROM_Ready                     Disable
/*---------------------------------------------------*/
#define VT18_Analog_Comparator                Disable
/*---------------------------------------------------*/
#define VT19_Two_wire_Serial_Interface        Disable
/*---------------------------------------------------*/
#define VT20_Store_Program_Memory_Ready       Disable
/*---------------------------------------------------*/
/*___________________________________________________*/
#endif /* ISR_H_ */
