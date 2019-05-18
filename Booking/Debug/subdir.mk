################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Administration.cpp \
../Bus.cpp \
../ClientView.cpp \
../Connection.cpp \
../Reservation.cpp \
../Transport.cpp \
../View.cpp \
../ViewManager.cpp \
../main.cpp 

O_SRCS += \
../main.o 

OBJS += \
./Administration.o \
./Bus.o \
./ClientView.o \
./Connection.o \
./Reservation.o \
./Transport.o \
./View.o \
./ViewManager.o \
./main.o 

CPP_DEPS += \
./Administration.d \
./Bus.d \
./ClientView.d \
./Connection.d \
./Reservation.d \
./Transport.d \
./View.d \
./ViewManager.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


