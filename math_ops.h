/*
 * Author : Stephen Aranda
 * Date   : 9/14/2022
 * File   : math_ops.h
 * Description : prototypes and definitions of mathematical operations for physics class
*/


#include <iostream>
#include <math.h>
#include <vector>


// * Consts for the math operations of the functions.
const int PERCENT = 100;

// * ---------------------------------------------------------------------

// * Function    -- calculateMean
// * Description -- calculate the mean of a set of values
double calculateMean(){

}

// * Function    -- calculateStandardDev
// * Description -- calculate the standard deviation of a data set
// * lower-case sigma = Square root [Sigma((m-i)-(m-ave))^2 / (n-1)]
// * m-i is the individual measurement in a trial and m-ave is the average of all measurements
// * from all trials that were conducted in the experiment.
double calculateStandardDev(){

}


// * Function    -- calculateBestFitLineSlope
// * Description -- calculate the slope of the best fit line
// * m = sigma ([x-i]-[x-ave])([y-i]-[y-ave]) / sigma ([x-i]-[x-ave]) ^ 2
// * m represents the slope of the best fit line.
double calculateBestFitLineSlope(){

}


// * Function    -- calculateB
// * Description -- calculate the coefficient of b in regression analysis
// * b = (y-ave) - (m * [x-ave])
double calculateB(){

}


// * Function    -- calculateSigmaResSquares
// * Description -- calculate the residual sum of squares.
// * SS-res = sigma([y-i]-(m*x-i)-b)^2
double calculateSigmaResSquares(){

}


// * Function    -- calculateSigmaTotalSquares
// * Description -- calculate the total sum of squares with respect
// * to the average value of y or SS-tot.
// * SS-tot = sigma([y-i]-[y-ave])^2
double calcualteSigmaTotalSquares(){

}


// * Function    -- calculateCoeffOfDet
// * Description -- Calculate the coefficient of determination
// * R ^ 2 = 1 - (SS-res/SS-tot)
double calculateCoeffOfDet(){

}


// * Function    -- calculateSEOM
// * Description -- calculate the standard error of the mean
// * lower-case sigma-sub-m-ave = standard deviation(lower-case-sigma) / (square-root(n))
// * n represents the number of measurements.
double calculateSEOM(){
    
}


