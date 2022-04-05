################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Demonstration/User/Startup/startup_stm32u585aiix.s 

OBJS += \
./Demonstration/User/Startup/startup_stm32u585aiix.o 

S_DEPS += \
./Demonstration/User/Startup/startup_stm32u585aiix.d 


# Each subdirectory must supply rules for building sources it contributes
Demonstration/User/Startup/%.o: ../Demonstration/User/Startup/%.s Demonstration/User/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m33 -g3 -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Demonstration-2f-User-2f-Startup

clean-Demonstration-2f-User-2f-Startup:
	-$(RM) ./Demonstration/User/Startup/startup_stm32u585aiix.d ./Demonstration/User/Startup/startup_stm32u585aiix.o

.PHONY: clean-Demonstration-2f-User-2f-Startup

