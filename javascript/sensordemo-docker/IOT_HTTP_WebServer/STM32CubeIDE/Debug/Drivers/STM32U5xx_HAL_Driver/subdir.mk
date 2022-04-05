################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_cortex.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma_ex.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_exti.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gpio.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_i2c.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_i2c_ex.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_icache.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_lptim.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr_ex.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc_ex.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_spi.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_uart.c \
/opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_uart_ex.c 

OBJS += \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_cortex.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma_ex.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_exti.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_gpio.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c_ex.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_icache.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_lptim.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr_ex.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc_ex.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_spi.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart.o \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart_ex.o 

C_DEPS += \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_cortex.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma_ex.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_exti.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_gpio.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c_ex.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_icache.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_lptim.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr_ex.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc_ex.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_spi.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart.d \
./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart_ex.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_cortex.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_cortex.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma_ex.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma_ex.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_exti.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_exti.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_gpio.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gpio.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_i2c.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c_ex.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_i2c_ex.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_icache.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_icache.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_lptim.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_lptim.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr_ex.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr_ex.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc_ex.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc_ex.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_spi.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_spi.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_uart.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart_ex.o: /opt/build/IOT_HTTP_WebServer/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_uart_ex.c Drivers/STM32U5xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-STM32U5xx_HAL_Driver

clean-Drivers-2f-STM32U5xx_HAL_Driver:
	-$(RM) ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_cortex.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_cortex.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_cortex.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma_ex.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma_ex.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_dma_ex.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_exti.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_exti.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_exti.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_gpio.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_gpio.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_gpio.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c_ex.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c_ex.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_i2c_ex.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_icache.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_icache.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_icache.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_lptim.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_lptim.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_lptim.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr_ex.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr_ex.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_pwr_ex.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc_ex.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc_ex.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_rcc_ex.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_spi.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_spi.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_spi.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart.su ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart_ex.d ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart_ex.o ./Drivers/STM32U5xx_HAL_Driver/stm32u5xx_hal_uart_ex.su

.PHONY: clean-Drivers-2f-STM32U5xx_HAL_Driver

