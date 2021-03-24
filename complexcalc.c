#include "calc.h"
#include<math.h>

error_t sum(complex a,complex b,complex* csum)
{
    if(NULL==a || NULL == b)
        return ERROR_NULL_PTR;
    else
    {
    csum->real=a->real+b->real;
    csum->img=a->img+b->img;
    return SUCCESS;
    }
}
error_t diff(complex a,complex b,complex* cdiff)
{
    if(NULL==a || NULL == b)
        return ERROR_NULL_PTR;
    else
    {
    cdiff->real=a->real-b->real;
    cdiff->img=a->img-b->img;
    return SUCCESS;
    }
}
error_t mul(complex a,complex b,complex* cmul)
{
    if(NULL==a || NULL == b)
        return ERROR_NULL_PTR;
    else
    {
    cmul->real=a->real*b->real-a->img*b->img;
    cmul->img=a->img*b->real+a->real*b->img;
    return SUCCESS;
    }
}
error_t div(complex a,complex b,complex* cdiv)
{
    if(b->real==0 || b->img==0)
        return ERROR_DIV_BY_ZERO;
    else if(NULL==a || NULL==b)
        return ERROR_NULL_PTR;
    else
    {
    cdiv->real=((a->real*b->real)+(a->img*b->img))/(pow(b->real,2)+pow(b->img,2));
    cdiv->img=(a->img*b->real_-(a->real*b->img))/(pow(b->real,2)+pow(b->img,2));
    return SUCCESS;
    }
}