/*
	I2C_File.c - encloses the functions necessary to implement the I2C
		interrupt
*/

#include "main.h"

__IO uint32_t uwTransferRequested;

void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c1)
{
	uwTransferRequested = 0;
}
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c3)
{
	uwTransferRequested = 0;
}
void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c3)
{
}
void HAL_I2C_ErrorCalback(I2C_HandleTypeDef *hi2c3)
{
	if(HAL_I2C_GetError(hi2c3) != HAL_I2C_ERROR_AF){
		Error_Handler();
	}
	
}
void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c3, uint8_t TransferDirection, uint16_t AddrMatchCode)
{
	uwTransferRequested = 1;
}