/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PN_RSTPD_M_Pin GPIO_PIN_3
#define PN_RSTPD_M_GPIO_Port GPIOE
#define PN532_IRQ_M_Pin GPIO_PIN_4
#define PN532_IRQ_M_GPIO_Port GPIOE
#define SD_SPI_CS_Pin GPIO_PIN_0
#define SD_SPI_CS_GPIO_Port GPIOC
#define DP_PWR_DOWN_Pin GPIO_PIN_4
#define DP_PWR_DOWN_GPIO_Port GPIOA
#define MP_CHG_Pin GPIO_PIN_2
#define MP_CHG_GPIO_Port GPIOB
#define MP_BOOST_Pin GPIO_PIN_7
#define MP_BOOST_GPIO_Port GPIOE
#define DP_RESET_EN_Pin GPIO_PIN_15
#define DP_RESET_EN_GPIO_Port GPIOE
#define PN_RSTPD_Pin GPIO_PIN_10
#define PN_RSTPD_GPIO_Port GPIOD
#define W25_SPI_CS_Pin GPIO_PIN_6
#define W25_SPI_CS_GPIO_Port GPIOC
#define XPT_INT_Pin GPIO_PIN_15
#define XPT_INT_GPIO_Port GPIOA
#define LCD_SPI_DC_Pin GPIO_PIN_9
#define LCD_SPI_DC_GPIO_Port GPIOB
#define LCD_RESET_Pin GPIO_PIN_0
#define LCD_RESET_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
