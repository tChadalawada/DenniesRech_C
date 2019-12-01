################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/practice_size/size_test.c 

OBJS += \
./src/practice_size/size_test.o 

C_DEPS += \
./src/practice_size/size_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/practice_size/%.o: ../src/practice_size/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -I"C:\Users\tarak\eclipse-workspace\DenniesRech_C\src\practice_size" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


