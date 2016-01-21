#include "stepper.h"

void full_step(int* step, int dir, GPIO_TypeDef* GPIOx, uint16_t Pin1, uint16_t Pin2, uint16_t Pin3, uint16_t Pin4)
{
	switch (*step)
	{
		case 1:
		HAL_GPIO_WritePin(GPIOx, Pin1 , dir?1:1);
		HAL_GPIO_WritePin(GPIOx, Pin2 , dir?1:0);
		HAL_GPIO_WritePin(GPIOx, Pin3 , dir?0:1);
		HAL_GPIO_WritePin(GPIOx, Pin4 , dir?0:0);
		break;
		
		case 2:
		HAL_GPIO_WritePin(GPIOx, Pin1 , dir?0:0);
		HAL_GPIO_WritePin(GPIOx, Pin2 , dir?1:1);
		HAL_GPIO_WritePin(GPIOx, Pin3 , dir?1:1);
		HAL_GPIO_WritePin(GPIOx, Pin4 , dir?0:0);
		break;
		
		case 3:
		HAL_GPIO_WritePin(GPIOx, Pin1 , dir?0:0);
		HAL_GPIO_WritePin(GPIOx, Pin2 , dir?0:1);
		HAL_GPIO_WritePin(GPIOx, Pin3 , dir?1:0);
		HAL_GPIO_WritePin(GPIOx, Pin4 , dir?1:1);
		break;
		
		case 4:
		HAL_GPIO_WritePin(GPIOx, Pin1 , dir?1:1);
		HAL_GPIO_WritePin(GPIOx, Pin2 , dir?0:0);
		HAL_GPIO_WritePin(GPIOx, Pin3 , dir?0:0);
		HAL_GPIO_WritePin(GPIOx, Pin4 , dir?1:1);
		break;
		
		case 5:
		HAL_GPIO_WritePin(GPIOx, Pin1 , dir?1:1);
		HAL_GPIO_WritePin(GPIOx, Pin2 , dir?1:0);
		HAL_GPIO_WritePin(GPIOx, Pin3 , dir?0:1);
		HAL_GPIO_WritePin(GPIOx, Pin4 , dir?0:0);
		break;
		
		case 6:
		HAL_GPIO_WritePin(GPIOx, Pin1 , dir?0:0);
		HAL_GPIO_WritePin(GPIOx, Pin2 , dir?1:1);
		HAL_GPIO_WritePin(GPIOx, Pin3 , dir?1:1);
		HAL_GPIO_WritePin(GPIOx, Pin4 , dir?0:0);
		break;
		
		case 7:
		HAL_GPIO_WritePin(GPIOx, Pin1 , dir?0:0);
		HAL_GPIO_WritePin(GPIOx, Pin2 , dir?0:1);
		HAL_GPIO_WritePin(GPIOx, Pin3 , dir?1:0);
		HAL_GPIO_WritePin(GPIOx, Pin4 , dir?1:1);
		break;
		
		case 8:
		HAL_GPIO_WritePin(GPIOx, Pin1 , dir?1:1);
		HAL_GPIO_WritePin(GPIOx, Pin2 , dir?0:0);
		HAL_GPIO_WritePin(GPIOx, Pin3 , dir?0:0);
		HAL_GPIO_WritePin(GPIOx, Pin4 , dir?1:1);
		break;		
	}	
 if (*step==8) 
 {
	 *step=1;
 }
 else
 {
	 *step+=1;
 }	
}

