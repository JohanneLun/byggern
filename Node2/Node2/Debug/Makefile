################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../CAN_driver.c \
../ADC_driver.c \
../DAC_driver.c \
../game.c \
../IR_driver.c \
../MOTOR_driver.c \
../SERVO_driver.c \
../SOLENOID_driver.c \
../UART_driver.c \
../MCP2515_driver.c \
../main.c \
../SPI_driver.c \
../PWM_driver.c \
../TWI_Master.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
CAN_driver.o \
ADC_driver.o \
DAC_driver.o \
game.o \
IR_driver.o \
MOTOR_driver.o \
SERVO_driver.o \
SOLENOID_driver.o \
UART_driver.o \
MCP2515_driver.o \
main.o \
SPI_driver.o \
PWM_driver.o \
TWI_Master.o

OBJS_AS_ARGS +=  \
CAN_driver.o \
ADC_driver.o \
DAC_driver.o \
game.o \
IR_driver.o \
MOTOR_driver.o \
SERVO_driver.o \
SOLENOID_driver.o \
UART_driver.o \
MCP2515_driver.o \
main.o \
SPI_driver.o \
PWM_driver.o \
TWI_Master.o

C_DEPS +=  \
CAN_driver.d \
ADC_driver.d \
DAC_driver.d \
game.d \
IR_driver.d \
MOTOR_driver.d \
SERVO_driver.d \
SOLENOID_driver.d \
UART_driver.d \
MCP2515_driver.d \
main.d \
SPI_driver.d \
PWM_driver.d \
TWI_Master.d

C_DEPS_AS_ARGS +=  \
CAN_driver.d \
ADC_driver.d \
DAC_driver.d \
game.d \
IR_driver.d \
MOTOR_driver.d \
SERVO_driver.d \
SOLENOID_driver.d \
UART_driver.d \
MCP2515_driver.d \
main.d \
SPI_driver.d \
PWM_driver.d \
TWI_Master.d

OUTPUT_FILE_PATH +=Node2.elf

OUTPUT_FILE_PATH_AS_ARGS +=Node2.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler





























./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g2 -Wall -mmcu=atmega2560 -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="Node2.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mrelax -mmcu=atmega2560  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "Node2.elf" "Node2.hex"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "Node2.elf" "Node2.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "Node2.elf" > "Node2.lss"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "Node2.elf" "Node2.srec"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-size.exe" "Node2.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "Node2.elf" "Node2.a" "Node2.hex" "Node2.lss" "Node2.eep" "Node2.map" "Node2.srec" "Node2.usersignatures"
	