/**
 * @file calculator.c
 * @author shubham kalihari
 * @brief this program is used to calculate sum, devide, multiply and subtract
 * @version 0.1
 * @date 2021-03-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int sum(int num1, int num2){
    return num1+num2;
}

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int div(int num1, int num2){
    if (num2==0){
        return 0;
    }
    return num1/num2;
}

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int diff(int num1, int num2){
    return num1-num2;
}
