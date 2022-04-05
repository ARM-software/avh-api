################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/opt/build/IOT_HTTP_WebServer/Core/Src/bsp.c \
/opt/build/IOT_HTTP_WebServer/Core/Src/console.c \
/opt/build/IOT_HTTP_WebServer/Core/Src/main.c \
/opt/build/IOT_HTTP_WebServer/Core/Src/stm32u5xx_hal_msp.c \
/opt/build/IOT_HTTP_WebServer/Core/Src/stm32u5xx_it.c \
../Demonstration/User/Core/syscalls.c \
../Demonstration/User/Core/sysmem.c \
/opt/build/IOT_HTTP_WebServer/Core/Src/system_config.c 

OBJS += \
./Demonstration/User/Core/bsp.o \
./Demonstration/User/Core/console.o \
./Demonstration/User/Core/main.o \
./Demonstration/User/Core/stm32u5xx_hal_msp.o \
./Demonstration/User/Core/stm32u5xx_it.o \
./Demonstration/User/Core/syscalls.o \
./Demonstration/User/Core/sysmem.o \
./Demonstration/User/Core/system_config.o 

C_DEPS += \
./Demonstration/User/Core/bsp.d \
./Demonstration/User/Core/console.d \
./Demonstration/User/Core/main.d \
./Demonstration/User/Core/stm32u5xx_hal_msp.d \
./Demonstration/User/Core/stm32u5xx_it.d \
./Demonstration/User/Core/syscalls.d \
./Demonstration/User/Core/sysmem.d \
./Demonstration/User/Core/system_config.d 


# Each subdirectory must supply rules for building sources it contributes
Demonstration/User/Core/bsp.o: /opt/build/IOT_HTTP_WebServer/Core/Src/bsp.c Demonstration/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/Core/console.o: /opt/build/IOT_HTTP_WebServer/Core/Src/console.c Demonstration/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/Core/main.o: /opt/build/IOT_HTTP_WebServer/Core/Src/main.c Demonstration/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/Core/stm32u5xx_hal_msp.o: /opt/build/IOT_HTTP_WebServer/Core/Src/stm32u5xx_hal_msp.c Demonstration/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/Core/stm32u5xx_it.o: /opt/build/IOT_HTTP_WebServer/Core/Src/stm32u5xx_it.c Demonstration/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/Core/%.o Demonstration/User/Core/%.su: ../Demonstration/User/Core/%.c Demonstration/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/Core/system_config.o: /opt/build/IOT_HTTP_WebServer/Core/Src/system_config.c Demonstration/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Demonstration-2f-User-2f-Core

clean-Demonstration-2f-User-2f-Core:
	-$(RM) ./Demonstration/User/Core/bsp.d ./Demonstration/User/Core/bsp.o ./Demonstration/User/Core/bsp.su ./Demonstration/User/Core/console.d ./Demonstration/User/Core/console.o ./Demonstration/User/Core/console.su ./Demonstration/User/Core/main.d ./Demonstration/User/Core/main.o ./Demonstration/User/Core/main.su ./Demonstration/User/Core/stm32u5xx_hal_msp.d ./Demonstration/User/Core/stm32u5xx_hal_msp.o ./Demonstration/User/Core/stm32u5xx_hal_msp.su ./Demonstration/User/Core/stm32u5xx_it.d ./Demonstration/User/Core/stm32u5xx_it.o ./Demonstration/User/Core/stm32u5xx_it.su ./Demonstration/User/Core/syscalls.d ./Demonstration/User/Core/syscalls.o ./Demonstration/User/Core/syscalls.su ./Demonstration/User/Core/sysmem.d ./Demonstration/User/Core/sysmem.o ./Demonstration/User/Core/sysmem.su ./Demonstration/User/Core/system_config.d ./Demonstration/User/Core/system_config.o ./Demonstration/User/Core/system_config.su

.PHONY: clean-Demonstration-2f-User-2f-Core

