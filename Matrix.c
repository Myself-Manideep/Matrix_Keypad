
#include "System_Handler.h"
#include "..\Delay\Delay.h"

unsigned char Keypad_Scan()
{
				unsigned char MatrixKp_Port_Value;
				unsigned char Matrix_LUT [4][4] = { {'0','1','2','3'},
																						{'4','5','6','7'},
																						{'8','9','A','B'},
																						{'C','D','E','F'}
																					};
	
																		
				unsigned char row = 0,col = 0;
				Port = 0X0F;
				MatrixKp_Port_Value = Port;
				MatrixKp_Port_Value = MatrixKp_Port_Value & 0X0F;
																					
				if(MatrixKp_Port_Value != 0X0F)
				{
					Delay_1ms(5);
					MatrixKp_Port_Value = Port;
				  MatrixKp_Port_Value = MatrixKp_Port_Value & 0X0F;
					
					if(MatrixKp_Port_Value != 0X0F)
   				{
						
						if(MatrixKp_Port_Value == 0X0E)
				    {
							row = 0;
						}
						
						else if(MatrixKp_Port_Value == 0X0D)
				    {
							row = 1;
						}
						
						else if(MatrixKp_Port_Value == 0X0B)
				    {
							row = 2;
						}
						
						else if(MatrixKp_Port_Value == 0X07)
				    {
							row = 3;
						}
					
				
				
						Port = 0XF0;
						MatrixKp_Port_Value = Port;
						MatrixKp_Port_Value = MatrixKp_Port_Value & 0XF0;
						if(MatrixKp_Port_Value != 0XF0)
						{
								
								if(MatrixKp_Port_Value == 0XE0)
								{
									 col = 0;
								}
								
								else if(MatrixKp_Port_Value == 0XD0)
								{
									col = 1;
								}
								
								else if(MatrixKp_Port_Value == 0XB0)
								{
									col = 2;
								}
								
								else if(MatrixKp_Port_Value == 0X70)
								{
									col = 3;
								}
						}
						
				}
					return (Matrix_LUT[row][col]);
								
}
				return -1;
								
}				