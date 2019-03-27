#ifndef I2C_FILE_H
#define I2C_FILE_H

#include "main.h" 

__IO uint32_t uwTransferRequested;

void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c1);
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c3);
void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c3);
void HAL_I2C_ErrorCalback(I2C_HandleTypeDef *hi2c3);
void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c3, uint8_t TransferDirection, uint16_t AddrMatchCode);
	
#endif