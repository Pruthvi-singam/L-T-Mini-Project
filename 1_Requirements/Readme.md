# Requirements
## Introduction

Modern scientific calculators generally have many more features than a standard four or five-function calculator, and the feature set differs between manufacturers and models; however, the defining features of a scientific calculator include
- Arithmatic functions
- Scientific functions
- Trigonometric Functions
- Matrix Function
In this miniproject we implenting some of those features using C programming which will operate on both Windows and Linux operating systems.


## Research
[Research paper](https://www.informs.org/Publications/INFORMS-Journals/Mathematics-of-Operations-Research)
The Scientific calculator doesn't involve any complex operations or any operations. It is easy to apply the values in the system to find the required result rather than remembering and applying it in formula. Thus by studying all these facts, the necessary functions has been implemented to get the required results in a better way.

## Cost and Features
Depending upon the project how well it is built and all the requirements will meet the cost and it can be varied according to the market.
- Addition : sum() takes two values as input and returns x+y.
- Subtraction : substraction() takes two values as input and returns x-y.
- Multiplication : multiplication() takes two values as input and returns x*y.
- Division : division() takes two values as input and returns x/y and x%y.
- Power: power() takes two values as input and returns x ^ y.
- Log : logbase10() takes a value and returns log 10(x).
- Power : exponent() takes a value and returns e^ x .
- Squareroot : squareroot() takes a value and returns √x.
- Sin : sine() takes a value which is in radian and return sin(x).
- Cos : cosine() takes a value which is in radian and return cos(x).
- Tan : ttan() takes a value which is in radian and return tan(x).
- Cosec : cosec() takes a value which is in radian and return cosec(x).
- Sec : sec() takes a value which is in radian and return sec(x).
- Cot : cot() takes a value which is in radian and return cot(x).
## Defining Our System
  **Architecture:**
  
   ![Architecture](https://github.com/Pruthvi-singam/L-T-Mini-Project/blob/main/Images/calarc.png)

   
 - Scientific Calculator application is capable of performing following functions:
	 -  Arithmetic Operations
		 1. Addition 
		 2. Subtraction
		 3. Multiplication
	 -  Scientific Operations
		 1. Log base 10
		 2. Power
		 3. Exponent
		 4. Square Root
		 5. Factorial
	 	 4. Division give quotient and remainder
	 - Trigonometric Opretions
		 1. Sin     
		 2. Cos     
		 3. Tan     
		 4. Cosec
		 5. Sec
		 6. Cot	 
    

## SWOT ANALYSIS
![swot analysis](https://github.com/Pruthvi-singam/L-T-Mini-Project/blob/main/Images/scietific%20calculator.png)


# 4W&#39;s and 1&#39;H

## Who:

- The project is used by everyone in day to day life. All the students and employess who requires the calculations will use the program to find their answer. The main objective of this project is the user should be satisfied with freindly interface and fast calculation

## What:

- We can except the results that user can perform mathematical operations like arthimetic , Trigonometric & Scientific operations.
- All the basics functionalities are included in the project. User can use the program efficiently and get the required results.


## When:

- The project can be used when the calculations are required  and get the results for basic and Math related problems and the result will be obtained fastly.

## Where:

- In all the Domains it can be used and the project is portable and user-friendly,  It should overcome all the drawbacks of the Old existing system and most important of all meet the user requirements.

## How:

- The Project is going to be implemented in C language for the Both Windows & Linux OS
- The constraints of the project are to develop using industry standards with a multi-file approach.
- The Timeline of the miniproject is 10 days.

# Detail requirements
## High Level Requirements:
|ID| Description |Category|status|
|--|------------|------|---------|
|H_01 |Arithematic Operations| operations such +, -, *, /, % |Implemented
|H_02 |Trigonomety operations|sin, cos, tan, cot, cosec , sec|Implemented
|H_03|scientific operations like |exponent, power, log, factorial, square root|Implemented
|H_04|opting wrong operation and any time exit and continue again to calculate more | the has to decide where to exit his task and which operation he want to perform |Implemented


##  Low level Requirements:
|ID| Description |HLR ID | status|
|--|------------|------|---------|
|L_01 |When user performs `+ ` it has to add  |H_01|Implemented
|L_02 |When user performs `- ` it has to subtact |H_01|Implemented
|L_03|When user performs `* ` it has to multiply  |H_01 |Implemented
|L_04|When user performs `/ ` it has to dicision resulting in both `quotient` and `remainder` even considering the case when divisor is 0  |H_01 |Implemented
|L_05|To calcualate the value of `sin` given input radian |H_02 |Implemented
|L_06|To calcualate the value of `cos` given input radian |H-02 |Implemented
|L_07|To calcualate the value of `tan` given input radian |H_02 |Implemented
|L_08|To calcualate the value of `cot` given input radian |H_02 |Implemented
|L_09|To calcualate the value of `cosec` given input radian |H_02 |Implemented
|L_10|To calcualate the value of `sec` given input radian |H_02 |Implemented
|L_11|perform `log` with base as 10 along with scenario of o and negative numbers |H_03 |Implemented
|L_12|perform calculations like x^2, x^3 ...... `x^y` |H_03 |Implemented
|L_13|perform exponent calculationns `e ^x` |H_03 |Implemented
|L_14|perform squareroot of a number `√x ` along with scenario of o and negative numbers|H_03 |Implemented
|L_15|perform factorail of number `x! ` along with scenario of o and negative numbers |H_03 |Implemented
|L_16|enter wrong operation other than mentioned program will exit|H_04 |Implemented
|L_17|force exit any time|H_04 |Implemented
|L_18|press 1 to continue to use calculator or any other key to end|H_04 |Implemented
