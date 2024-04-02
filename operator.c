//arithmetic operator return value:+,_,*,| and modulas %
//relational operator return true or false:<,>,==,!=,<=,>=
//logical operator duita ralational operator er moddhyekhane bose condition er upor bose true false return kore
#include <stdio.h>
    int main()
    { 
        //Practice Day 1: Problem 2
        long long int num1, num2;
        scanf("%lld %lld",&num1,&num2);
        //adding
        long long int add=(num1+num2);
        printf("%lld + %lld = %lld \n",num1, num2, add);
        //substraction 
        long long int sub=num1-num2;
        printf("%lld - %lld = %lld \n",num1,num2,sub);
        //multiplication
        long long int multi=num1*num2;
        printf("%lld * %lld = %lld \n",num1,num2,multi);
        //divide
         float divide=num2/(num1*1.0);
        printf("%lld / %lld = %0.1llf",num1,num2,divide);
    }