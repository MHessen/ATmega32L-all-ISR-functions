#include "Types.h"
#include "Registers.h"
#include "DIO.h"
#include "ISR_F.h"



/*General Variables & Definitions for ISRs*/
/*=====================================================*/
#if ( VT06_Timer_Counter1_Capture_Event == Enable )
u8 flag ;
u32 C1 ,C2,C3;
#endif
/*-----------------------------------------------------*/
#if ( VT09_Timer_Counter1_Overflow == Enable )
u32 T1_Counter = 0;
#define Toggle_bit(Register,Pin) Register ^= (1<<Pin)
#endif
/*=====================================================*/

/*=====================================================*/
/*                ISR-Functions                        */
/*=====================================================*/
/*--------------------------------------------*/
#if ( VT01_External_Interrupt_Request_0 == Enable )
/*--------------------------------------------*/
void __vector_1 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_1 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT02_External_Interrupt_Request_1 == Enable )
void __vector_2 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_2 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT03_External_Interrupt_Request_2 == Enable )
void __vector_3 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_3 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT04_Timer_Counter2_Compare_Match == Enable )
void __vector_4 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_4 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT05_Timer_Counter2_Overflow == Enable )
void __vector_5 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_5 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT06_Timer_Counter1_Capture_Event == Enable )
void __vector_6 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_6 (void)
{
	if ( 0== flag)
	{
		C1 = ICR1L ;
		ClrBit(TCCR1B,6);
		T1_Counter = 0 ;
	}
	else if ( 1==flag )
	{
		C2 = ICR1L + (T1_Counter*65535) ;
		SetBit(TCCR1B,6);
	}
	else if ( 2 == flag )
	{
		C3 = ICR1L + ( T1_Counter*65535);
		ClrBit(TIMSK,5);
	}
	flag ++ ;

}
#endif
/*_______________________________________________*/
#if ( VT07_Timer_Counter1_Compare_Match_A == Enable )
void __vector_7 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_7 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT08_Timer_Counter1_Compare_Match_B == Enable )
void __vector_8 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_8 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT09_Timer_Counter1_Overflow == Enable )
void __vector_9 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_9 (void)
{
	T1_Counter++ ;
	if ( 30 == T1_Counter )
	{
		TCNT1L = 0x80 ;
		TCNT1H = 0b01111011 ;
	}
	if ( 31 == T1_Counter )
	{
		T1_Counter = 0 ;
		Toggle_bit(PORTD,pin_0);		/* Toggle the LED Pin */
	}

}
#endif
/*_______________________________________________*/
#if ( VT10Timer_Counter0_Compare_Match == Enable )
void __vector_10 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_10 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT11_Timer_Counter0_Overflow == Enable )
void __vector_11 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_11 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT12_Serial_Transfer_Complete == Enable )
void __vector_12 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_12 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT13_USART_Rx_Complete == Enable )
void __vector_13 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_13 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT14_USART_Data_Register_Empty == Enable )
void __vector_14 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_14 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT15USART_Tx_Complete == Enable )
void __vector_15 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_15 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT16_ADC_Conversion_Complete == Enable )
void __vector_16 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_16 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT17_EEPROM_Ready == Enable )
void __vector_17 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_17 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT18_Analog_Comparator == Enable )
void __vector_18 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_18 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT19_Two_wire_Serial_Interface == Enable )
void __vector_19 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_19 (void)
{
	
}
#endif
/*_______________________________________________*/
#if ( VT20_Store_Program_Memory_Ready == Enable )
void __vector_20 (void) __attribute__((signal,__INTR__ATTRS));		//the second line  __atrrribte__...... tells the Linker that previous fuction is not  normal one and  it's address refers to Vector table Address
void __vector_20 (void)
{
	
}
#endif
/*_______________________________________________*/



