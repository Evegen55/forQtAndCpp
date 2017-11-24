#ifndef MY_MATH_H
#define MY_MATH_H

#pragma once

//When we declare a class as static, it is an indicator that we do not have to instantiate the class to use it in our program.
//For example, if Math were not static, before we could use it in our program, we would need to create an instance of it
class my_math {
public:

    //we declare our function for generating the power of a base raised to an exponent.
    //Note that this method is also using the static designation.
    //In order to call the function from a static class, the function must also be static.
    static int pow(int base, int exp);
};

//The last key piece to note about this declaration of the Math class is that we end it with a semicolon after the closing curly brace.
//Most new programmers have a tendency to forget this.

#endif // MY_MATH_H
