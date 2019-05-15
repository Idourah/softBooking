################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Administration.cpp \
../Bus.cpp \
../Connection.cpp \
../Reservation.cpp \
../Transport.cpp \
../features.cpp \
../main.cpp \
../view.cpp 

OBJS += \
./Administration.o \
./Bus.o \
./Connection.o \
./Reservation.o \
./Transport.o \
./features.o \
./main.o \
./view.o 

CPP_DEPS += \
./Administration.d \
./Bus.d \
./Connection.d \
./Reservation.d \
./Transport.d \
./features.d \
./main.d \
./view.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


