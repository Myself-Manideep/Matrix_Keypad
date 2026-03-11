#include "..\..\Lib\Delay\Delay.h"
#include "..\..\Lib\LCD_Interface\Interface.h"
#include "System_Handler.h"

void main()
{
	unsigned char Key_Value;
	unsigned char count = 0;
	LCD_Init();
	while(1)
	{
		if( count <=9)
		{
				
				while((Key_Value = Keypad_Scan()) != -1);
				
				while((Key_Value = Keypad_Scan()) == -1);
			
				LCD_Data_Write(Key_Value);
				count++;
		}
		
			while((Key_Value = Keypad_Scan()) != -1);
			while((Key_Value = Keypad_Scan()) == -1);
			if(Key_Value == 'A')
		{
			LCD_Command_Write(0X10);
			LCD_Data_Write(' ');
			Delay_1ms(10);
			LCD_Command_Write(0X10);
		}
	}
}
