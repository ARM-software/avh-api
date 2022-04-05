################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/css_main_res.c \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/css_shunk_res.c \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/favicon_res.c \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/font_res.c \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/html_res.c \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/image_res.c \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/js_main_res.c \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/js_shunk_res.c \
/opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/json_res.c 

OBJS += \
./Demonstration/User/WebServer/App/web/css_main_res.o \
./Demonstration/User/WebServer/App/web/css_shunk_res.o \
./Demonstration/User/WebServer/App/web/favicon_res.o \
./Demonstration/User/WebServer/App/web/font_res.o \
./Demonstration/User/WebServer/App/web/html_res.o \
./Demonstration/User/WebServer/App/web/image_res.o \
./Demonstration/User/WebServer/App/web/js_main_res.o \
./Demonstration/User/WebServer/App/web/js_shunk_res.o \
./Demonstration/User/WebServer/App/web/json_res.o 

C_DEPS += \
./Demonstration/User/WebServer/App/web/css_main_res.d \
./Demonstration/User/WebServer/App/web/css_shunk_res.d \
./Demonstration/User/WebServer/App/web/favicon_res.d \
./Demonstration/User/WebServer/App/web/font_res.d \
./Demonstration/User/WebServer/App/web/html_res.d \
./Demonstration/User/WebServer/App/web/image_res.d \
./Demonstration/User/WebServer/App/web/js_main_res.d \
./Demonstration/User/WebServer/App/web/js_shunk_res.d \
./Demonstration/User/WebServer/App/web/json_res.d 


# Each subdirectory must supply rules for building sources it contributes
Demonstration/User/WebServer/App/web/css_main_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/css_main_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/App/web/css_shunk_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/css_shunk_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/App/web/favicon_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/favicon_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/App/web/font_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/font_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/App/web/html_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/html_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/App/web/image_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/image_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/App/web/js_main_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/js_main_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/App/web/js_shunk_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/js_shunk_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Demonstration/User/WebServer/App/web/json_res.o: /opt/build/IOT_HTTP_WebServer/WebServer/App/web_addons/json_res.c Demonstration/User/WebServer/App/web/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DSTM32U585xx -DUSE_HAL_DRIVER -c -I../../Drivers/CMSIS/Include -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/BSP/B-U585I-IOT02A -I../../Drivers/BSP/Components/mx_wifi -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Core/Inc -I../../WebServer/App -I../../WebServer/App/wifi -I../../WebServer/App/web_addons -I../../WebServer/App/sensors -I../../WebServer/App/http -I../../WebServer/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Demonstration-2f-User-2f-WebServer-2f-App-2f-web

clean-Demonstration-2f-User-2f-WebServer-2f-App-2f-web:
	-$(RM) ./Demonstration/User/WebServer/App/web/css_main_res.d ./Demonstration/User/WebServer/App/web/css_main_res.o ./Demonstration/User/WebServer/App/web/css_main_res.su ./Demonstration/User/WebServer/App/web/css_shunk_res.d ./Demonstration/User/WebServer/App/web/css_shunk_res.o ./Demonstration/User/WebServer/App/web/css_shunk_res.su ./Demonstration/User/WebServer/App/web/favicon_res.d ./Demonstration/User/WebServer/App/web/favicon_res.o ./Demonstration/User/WebServer/App/web/favicon_res.su ./Demonstration/User/WebServer/App/web/font_res.d ./Demonstration/User/WebServer/App/web/font_res.o ./Demonstration/User/WebServer/App/web/font_res.su ./Demonstration/User/WebServer/App/web/html_res.d ./Demonstration/User/WebServer/App/web/html_res.o ./Demonstration/User/WebServer/App/web/html_res.su ./Demonstration/User/WebServer/App/web/image_res.d ./Demonstration/User/WebServer/App/web/image_res.o ./Demonstration/User/WebServer/App/web/image_res.su ./Demonstration/User/WebServer/App/web/js_main_res.d ./Demonstration/User/WebServer/App/web/js_main_res.o ./Demonstration/User/WebServer/App/web/js_main_res.su ./Demonstration/User/WebServer/App/web/js_shunk_res.d ./Demonstration/User/WebServer/App/web/js_shunk_res.o ./Demonstration/User/WebServer/App/web/js_shunk_res.su ./Demonstration/User/WebServer/App/web/json_res.d ./Demonstration/User/WebServer/App/web/json_res.o ./Demonstration/User/WebServer/App/web/json_res.su

.PHONY: clean-Demonstration-2f-User-2f-WebServer-2f-App-2f-web

