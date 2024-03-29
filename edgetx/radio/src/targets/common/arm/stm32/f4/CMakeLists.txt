set(CPU_FAMILY STM32)
set(MCU cortex-m4)
set(FPU_FLAGS "-mfloat-abi=hard -mfpu=fpv4-sp-d16")
set(STM32LIB_DIR ${THIRDPARTY_DIR}/STM32F4xx_DSP_StdPeriph_Lib_V1.8.0/Libraries)

include_directories(${STM32LIB_DIR}/STM32F4xx_StdPeriph_Driver/inc)
include_directories(${STM32LIB_DIR}/CMSIS/Device/ST/STM32F4xx/Include)
include_directories(${STM32LIB_DIR}/CMSIS/Include)

add_definitions(-DSTM32F4)

set(STM32LIB_SRC
  ${STM32LIB_SRC}
  STM32F4xx_StdPeriph_Driver/src/misc.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_gpio.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_exti.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dbgmcu.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rcc.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_syscfg.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_spi.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_i2c.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dma.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rtc.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_pwr.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_usart.c
  STM32F4xx_StdPeriph_Driver/src/stm32f4xx_adc.c
  )

#
# FreeRTOS port specific include
#
include_directories(${RTOS_DIR}/portable/GCC/ARM_CM4F)

#
# System and FreeRTOS port files
#
set(FIRMWARE_TARGET_SRC ${FIRMWARE_TARGET_SRC}
  ../common/arm/stm32/f4/system_stm32f4xx.c
  ../../${RTOS_DIR}/portable/GCC/ARM_CM4F/port.c
  )

