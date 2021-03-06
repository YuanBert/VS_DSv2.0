/**
******************************************************************************
* File Name          : DS_DataTransmissionLayer.h
* Description        : DS_DataTransmissionLayer
*
******************************************************************************
** This notice applies to any and all portions of this file
* that are not between comment pairs USER CODE BEGIN and
* USER CODE END. Other portions of this file, whether 
* inserted by the user or by software development tools
* are owned by their respective copyright owners.
*
* COPYRIGHT(c) 2017 STMicroelectronics
*
* Redistribution and use in source and binary forms, with or without modification,
* are permitted provided that the following conditions are met:
*   1. Redistributions of source code must retain the above copyright notice,
*      this list of conditions and the following disclaimer.
*   2. Redistributions in binary form must reproduce the above copyright notice,
*      this list of conditions and the following disclaimer in the documentation
*      and/or other materials provided with the distribution.
*   3. Neither the name of STMicroelectronics nor the names of its contributors
*      may be used to endorse or promote products derived from this software
*      without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************
*/
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DS_DTL_H
#define __DS_DTL_H
#ifdef __cplusplus
extern "C" {
#endif
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f1xx_hal.h"
#include "Common.h"
#define DS_RX_LEN                     512      //Accept the buffer size
  
  /*******************************************************************************
  ** struct: sUsartReciveType
  **
  ** DESCRIPTION:
  **  --
  **
  ** CREATED: 2017/12/7, by Bert
  **
  ** FILE: DS_Protocol.h
  **
  ** AUTHOR: Bert.Zhang
  ********************************************************************************
  */
  struct sUsartReciveType
  {
    uint8_t     RX_Flag:1;
    uint16_t    RX_Size;
    uint8_t     RX_pData[DS_RX_LEN];
  }; 
 
typedef struct sUsartReciveType   USARTRECIVETYPE,    *pUSARTRECIVETYPE;

DS_StatusTypeDef DS_CoreBoardProtocolInit(void);
DS_StatusTypeDef DS_LeftDoorBoardProtocolInit(void);
DS_StatusTypeDef DS_RightDoorBoardProtocolInit(void);


DS_StatusTypeDef DS_SendDataToCoreBoard(uint8_t* pData, uint16_t size, uint32_t Timeout);
DS_StatusTypeDef DS_SendDataToLeftDoorBoard(uint8_t* pData, uint16_t size, uint32_t Timeout);
DS_StatusTypeDef DS_SendDataToRightDoorBoard(uint8_t* pData, uint16_t size, uint32_t Timeout);


  
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */
/* USER CODE BEGIN Private defines */
/* USER CODE END Private defines */
/* USER CODE BEGIN Prototypes */
/* USER CODE END Prototypes */
#ifdef __cplusplus
}
#endif
#endif /*__DS_DTL_H */