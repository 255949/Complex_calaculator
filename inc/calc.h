#ifndef __CALC__
#define __CALC__
/**
 * @brief Complex number structure
 * 
 */
typedef struct complex
{
    float real;
    float img;
}complex;
typedef enum error_t
{
    ERROR_DIV_BY_ZERO=-2,
    ERROR_NULL_PTR=-1,
    SUCCESS=0
}error_t;
/**
 * @brief TO ADD TWO COMPLEX NUMBERS
 * 
 * @param a - 1st complex number
 * @param b - 2nd complex number
 * @param sum 
 * @return error_t 
 */
error_t sum(complex* a,complex* b,complex* csum);
/**
 * @brief TO SUBTRACT TWO COMPLEX NUMBERS
 * 
 * @param a 
 * @param b 
 * @param diff 
 * @return error_t 
 */
error_t diff(complex* a,complex* b, complex* cdiff);
/**
 * @brief TO MULTIPLY TWO NUMBERS
 * 
 * @param a 
 * @param b 
 * @param mul 
 * @return error_t 
 */
error_t mul(complex* a,complex* b, complex* cmul);
/**
 * @brief TO DIVIDE TWO NUMBERS
 * 
 * @param a 
 * @param b 
 * @param cdiv 
 * @return error_t 
 */
error_t divtest(complex* a,complex* b, complex* cdiv);

#endif