/*Autosar Applcation development using developer tool
swc_1   |<--   requider port
swc_2   -->\   Provider port
Client   --(   function_call ()
Sever    0--   function_defination()
*/

#include<stdio.h>

int status;
int p_port()
{
    int led = 0;
    status = led;
    return status;
}

int r_port()
{
    float temp = 0;
    status = temp;
    return status;
}

void main()
{
    int u_input, pro, req;
    printf("enter which port do you need\n");
    scanf("%d", &u_input);
    if(u_input == pro)
    {
        printf("set provider port\n");
        p_port();
        
    }
    else if(u_input == req)
    {
        printf("set requider port\n");
        r_port();
    }
    else
    {
        //do nothing;
    }
}