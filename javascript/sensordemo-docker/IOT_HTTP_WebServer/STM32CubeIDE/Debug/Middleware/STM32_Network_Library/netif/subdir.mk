################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/opt/build/IOT_HTTP_WebServer/Middlewares/ST/STM32_Network_Library/netif/wifi_if/mx_wifi/net_mx_wifi.c 

OBJS += \
./Middleware/STM32_Network_Library/netif/net_mx_wifi.o 

C_DEPS += \
./Middleware/STM32_Network_Library/netif/net_mx_wifi.d 


# Each subdirectory must supply rules for building sources it contributes
Middleware/STM32_Network_Library/netif/net_mx_wifi.o: /opt/build/IOT_HTTP_WebServer/Middlewares/ST/STM32_Network_Library/netif/wifi_if/mx_wifi/net_mx_wifi.c Middleware/STM32_Network_Library/netif/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middleware-2f-STM32_Network_Library-2f-netif

clean-Middleware-2f-STM32_Network_Library-2f-netif:
	-$(RM) ./Middleware/STM32_Network_Library/netif/net_mx_wifi.d ./Middleware/STM32_Network_Library/netif/net_mx_wifi.o ./Middleware/STM32_Network_Library/netif/net_mx_wifi.su

.PHONY: clean-Middleware-2f-STM32_Network_Library-2f-netif

