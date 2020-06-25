################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP.c \
../DIO_program.c \
../EXTERNAL_INTERRUPT.c \
../IR_SENSOR.c \
../LCD_program.c \
../TIMER_PROGRAM.c \
../led_program.c \
../main.c 

OBJS += \
./APP.o \
./DIO_program.o \
./EXTERNAL_INTERRUPT.o \
./IR_SENSOR.o \
./LCD_program.o \
./TIMER_PROGRAM.o \
./led_program.o \
./main.o 

C_DEPS += \
./APP.d \
./DIO_program.d \
./EXTERNAL_INTERRUPT.d \
./IR_SENSOR.d \
./LCD_program.d \
./TIMER_PROGRAM.d \
./led_program.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


