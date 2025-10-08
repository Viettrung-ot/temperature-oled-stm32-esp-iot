################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
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


BUILD_ARTIFACT_NAME := cam bien nhiet do esp
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
cam\ bien\ nhiet\ do\ esp.elf \

MAP_FILES += \
cam\ bien\ nhiet\ do\ esp.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
cam\ bien\ nhiet\ do\ esp.list \

OBJCOPY_HEX += \
cam\ bien\ nhiet\ do\ esp.hex \

OBJCOPY_BIN += \
cam\ bien\ nhiet\ do\ esp.bin \


# All Target
all: main-build

# Main-build Target
main-build: cam\ bien\ nhiet\ do\ esp.elf secondary-outputs

# Tool invocations
cam\ bien\ nhiet\ do\ esp.elf cam\ bien\ nhiet\ do\ esp.map: $(OBJS) $(USER_OBJS) D:\Project\ embedded\cam\ bien\ nhiet\ do\ esp\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "cam bien nhiet do esp.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\Project embedded\cam bien nhiet do esp\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="cam bien nhiet do esp.map" -Wl,--gc-sections -static -u _printf_float --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

cam\ bien\ nhiet\ do\ esp.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "cam bien nhiet do esp.list"
	@echo 'Finished building: $@'
	@echo ' '

cam\ bien\ nhiet\ do\ esp.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "cam bien nhiet do esp.hex"
	@echo 'Finished building: $@'
	@echo ' '

cam\ bien\ nhiet\ do\ esp.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "cam bien nhiet do esp.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) cam\ bien\ nhiet\ do\ esp.bin cam\ bien\ nhiet\ do\ esp.elf cam\ bien\ nhiet\ do\ esp.hex cam\ bien\ nhiet\ do\ esp.list cam\ bien\ nhiet\ do\ esp.map cam\\ bien\\ nhiet\\ do\\ esp.elf default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
