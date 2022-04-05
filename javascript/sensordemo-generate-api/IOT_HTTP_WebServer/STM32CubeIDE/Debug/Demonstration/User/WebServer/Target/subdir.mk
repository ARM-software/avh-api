################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/opt/build/IOT_HTTP_WebServer/WebServer/Target/net_conf_mxchip_spi.c \
/opt/build/IOT_HTTP_WebServer/WebServer/Target/net_interface.c 

OBJS += \
./Demonstration/User/WebServer/Target/net_conf_mxchip_spi.o \
./Demonstration/User/WebServer/Target/net_interface.o 

C_DEPS += \
./Demonstration/User/WebServer/Target/net_conf_mxchip_spi.d \
./Demonstration/User/WebServer/Target/net_interface.d 


# Each subdirectory must supply rules for building sources it contributes
Demonstration/User/WebServer/Target/net_conf_mxchip_spi.o: /opt/build/IOT_HTTP_WebServer/WebServer/Target/net_conf_mxchip_spi.c Demonstration/User/WebServer/Target/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/Target/net_interface.o: /opt/build/IOT_HTTP_WebServer/WebServer/Target/net_interface.c Demonstration/User/WebServer/Target/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Demonstration-2f-User-2f-WebServer-2f-Target

clean-Demonstration-2f-User-2f-WebServer-2f-Target:
	-$(RM) ./Demonstration/User/WebServer/Target/net_conf_mxchip_spi.d ./Demonstration/User/WebServer/Target/net_conf_mxchip_spi.o ./Demonstration/User/WebServer/Target/net_conf_mxchip_spi.su ./Demonstration/User/WebServer/Target/net_interface.d ./Demonstration/User/WebServer/Target/net_interface.o ./Demonstration/User/WebServer/Target/net_interface.su

.PHONY: clean-Demonstration-2f-User-2f-WebServer-2f-Target

