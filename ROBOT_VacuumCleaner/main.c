/*
 * main.c
 *
 *  Created on: Apr 21, 2024
 *      Author: ahmed yousif
 */


#define F_CPU 8000000UL
#include <util/delay.h>

#include "LIB/LSTD_types.h"
#include "LIB/LBIT_math.h"

#include "MCAL/MDIO_interface.h"
#include "MCAL/MGIE_interface.h"
#include "MCAL/MUART_interface.h"

#include "HAL/HMOTOR_interface.h"
#include "HAL/HBLTH_interface.h"

int main(void)
{
	//Initializing Drivers
	HBLTH_voidInit();
	HMOTOR_voidInit();

	// For controlling fan motor using bjt
	MDIO_voidSetPinDirection(MDIO_PORTA,4,MDIO_OUTPUT);
	MDIO_voidSetPinValue(MDIO_PORTA,4,MDIO_OUTPUT);


	MGIE_voidEnableGIE();

	while(1)
	{

		u8 L_u8RemoteControl = HBLTH_charReceiveChar();

		//FOR CONTROLLING FAN MOTOR
		 if( L_u8RemoteControl == '1')
		 {
			 MDIO_voidSetPinValue(MDIO_PORTA,4,MDIO_HIGH);
		 }
		 else if( L_u8RemoteControl == '0')
		 {
			 MDIO_voidSetPinValue(MDIO_PORTA,4,MDIO_LOW);
		 }

		 //FOR CONTROLLING MOVEMENT MOTORS
		 else if( L_u8RemoteControl == 'F')
		 {
			 HMOTOR_voidStartMovement(HMOTOR_DIRECTION_FORWARD);
			 _delay_ms(1000);
			 HMOTOR_voidStopMovement();

		 }
		 else if( L_u8RemoteControl == 'B')
		 {
			 HMOTOR_voidStartMovement(HMOTOR_DIRECTION_BACKWARD);
			 _delay_ms(1000);
			 HMOTOR_voidStopMovement();
		 }
		 else if( L_u8RemoteControl == 'L')
		 {
			 HMOTOR_voidStartMovement(HMOTOR_DIRECTION_LEFT);
			 _delay_ms(200);
			 HMOTOR_voidStopMovement();
		 }
		 else if( L_u8RemoteControl == 'R')
		 {
			 HMOTOR_voidStartMovement(HMOTOR_DIRECTION_RIGHT);
			 _delay_ms(200);
			 HMOTOR_voidStopMovement();
		 }
		 else if( L_u8RemoteControl == 'S')
		 {
			 HMOTOR_voidStopMovement();
		 }
	}

	return 0;
}
