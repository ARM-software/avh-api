################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middleware/STM32_Network_Library/services/subdir.mk
-include Middleware/STM32_Network_Library/netif/subdir.mk
-include Middleware/STM32_Network_Library/core/subdir.mk
-include Drivers/STM32U5xx_HAL_Driver/subdir.mk
-include Drivers/CMSIS/subdir.mk
-include Drivers/BSP/Components/mx_wifi/core/subdir.mk
-include Drivers/BSP/Components/mx_wifi/subdir.mk
-include Drivers/BSP/Components/subdir.mk
-include Drivers/BSP/B-U585I-IOT02A/subdir.mk
-include Demonstration/User/WebServer/Target/subdir.mk
-include Demonstration/User/WebServer/App/wifi/subdir.mk
-include Demonstration/User/WebServer/App/web/subdir.mk
-include Demonstration/User/WebServer/App/sensors/subdir.mk
-include Demonstration/User/WebServer/App/http/subdir.mk
-include Demonstration/User/WebServer/App/subdir.mk
-include Demonstration/User/Startup/subdir.mk
-include Demonstration/User/Core/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := IOT_HTTP_WebServer
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
IOT_HTTP_WebServer.elf \

MAP_FILES += \
IOT_HTTP_WebServer.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
IOT_HTTP_WebServer.list \

OBJCOPY_HEX += \
IOT_HTTP_WebServer.hex \


# All Target
all: main-build

# Main-build Target
main-build: IOT_HTTP_WebServer.elf secondary-outputs

# Tool invocations
IOT_HTTP_WebServer.elf IOT_HTTP_WebServer.map: $(OBJS) $(USER_OBJS) /opt/build/IOT_HTTP_WebServer/STM32CubeIDE/STM32U585AIIX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "IOT_HTTP_WebServer.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m33 -T"/opt/build/IOT_HTTP_WebServer/STM32CubeIDE/STM32U585AIIX_FLASH.ld" --specs=nosys.specs -Wl,-Map="IOT_HTTP_WebServer.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -u _printf_float -u _scanf_float -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

IOT_HTTP_WebServer.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "IOT_HTTP_WebServer.list"
	@echo 'Finished building: $@'
	@echo ' '

IOT_HTTP_WebServer.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "IOT_HTTP_WebServer.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) IOT_HTTP_WebServer.elf IOT_HTTP_WebServer.hex IOT_HTTP_WebServer.list IOT_HTTP_WebServer.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
