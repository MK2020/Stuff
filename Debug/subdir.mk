################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Farthestpoint.cpp \
../classpoint.cpp \
../pointsandlines.cpp \
../triangles.cpp 

OBJS += \
./Farthestpoint.o \
./classpoint.o \
./pointsandlines.o \
./triangles.o 

CPP_DEPS += \
./Farthestpoint.d \
./classpoint.d \
./pointsandlines.d \
./triangles.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


