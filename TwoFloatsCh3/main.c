//
//  main.c
//  Chapter 3 TwoFloats
//
//  Created by Crayton McIntosh on 7/18/16.
//  Copyright © 2016 Crayton McIntosh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float variableOne, variableTwo;
    
    variableOne=3.14;
    variableTwo=42.0;
    
    double doubleChallenge;
    
    doubleChallenge=variableOne+variableTwo;
    
    printf("%f \n", doubleChallenge);
    
    //Chapter 4 Challenge
    //testing to see if my answer of "The first expression is true
    
    //Consider the following code snippet
    
    int i = 20;
    int j = 25;
    int k = (i > j) ? 10 : 5;
    
    if(5 < j - k) {
        printf("The first expression is true");
    } else if (j > i){
        printf("The second expression is true.");
    } else {
        printf("Neither expresion is true");
    }
    
    //What will be printed to the console?
    //My answer is the first expression being true
    
    //My answer was correct!
    
    return 0;
}
