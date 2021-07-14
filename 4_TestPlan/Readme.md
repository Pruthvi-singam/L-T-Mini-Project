# TEST PLAN:

## Table 1: High level test plan 

| **Test ID** | **Description**                                              | **Exp I/P**  | **Exp O/P** | **Actual Out** |**Type Of Test**  |
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |               Addition                                       |  10,5|15 |15 |Requirement based |
|  H_02       |               Subtraction                                    |  10,5|5  |5  |Requirement based |
|  H_03       |               Multiplication                                 |  10,5|50 |50 |Requirement based |
|  H_04       |               Division (Quotient, Remainder)                                      |  10,5|2,0|2,0|Requirement based |
|  H_05       |               power                                          |  10,5|100000 |100000  |Requirement based |
|  H_06       |               log base 10                                    |  4|0.602 |0.602 |Requirement based |
|  H_07       |               exponent                                       |  4|54.598 |54.598  |Requirement based |
|  H_08       |               Factorial                                      |  4|24 |24  |Requirement based |
|  H_09       |               Sin                                      |  4|-0.757 |-0.757 |Requirement based |
|  H_10       |               Cos                                      |  4|-0.654|-0.654 |Requirement based |
|  H_11       |               Tan                                      |  4|1.158 |1.158  |Requirement based |
|  H_12       |               Cot                                      |  4| 0.864|0.864 |Requirement based |
|  H_13       |               Cosec                                      |  4|-1.321 |-1.321  |Requirement based |
|  H_14       |               Sec                                      |  4|-1.530 |-1.530  |Requirement based |
|  H_15       |               squareRoot                                      |  4|2 |2 |Requirement based |


## Table 2: Low level test plan

   ## Note: return -1 is error

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|   L_01      |               Division (Quotient, Remainder) divisor 0                                    |  3,0|return -1|return -1|Scenario based |
|   L_02       |               log base 10 for  0 and -ve numbers                                   |  -5|return -1 |return -1 |Boundary based |
|   L_03       |               Factorial of -ve numbers                                     |  -5|return -1 |return -1  |Bounndary based |
|   L_04       |               Factorial of 0                                  |  0|1 |1  |Bounndary based |
|   L_05       |               Addition  -ve numbers                                      |  -3,-2|-5 |-5|Requirement based |
|   L_06      |               Subtraction   -ve numbers                                  |  -3,-2|-1  |-1  |Requirement based |
|   L_07       |               Multiplication   -ve numbers                               |  -3,-2|6 |6 |Requirement based |
|   L_08       |               Division (Quotient, Remainder)   -ve numbers                                    |  10,5|2,0|2,0|Requirement based |
|   L_09       |               power     -ve numbers                                      |  -3,-2|1,1 |1,1  |Requirement based |
|   L_10       |               exponent   -ve number                                   |  -5|0.007 |0.007  |Requirement based |
|   L_11       |               Sin       -ve number                                |  -5|0.959 |0.959 |Requirement based |
|   L_12       |               Cos       -ve number                                |  -5|0.284|0.284|Requirement based |
|   L_12       |               Tan       -ve number                                |  -5|3.381 |3.381  |Requirement based |
|   L_13      |               Cot       -ve number                                |  -5|0.864 |0.864 |Requirement based |
|   L_14       |               Cosec     -ve number                                  |  -5|3.525 |3.525|Requirement based |
|   L_15       |               Sec       -ve number                                |  -5|0.296 |0.296  |Requirement based |
|   L_16      |               SquareRoot       -ve number                                |  -5|return -1 |return -1  |Scenario based |
