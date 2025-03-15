/*Autosar Applcation development using developer tool
swc_1   |<--   requider port
swc_2   -->\   Provider port
Client   --(   function_call ()
Sever    0--   function_defination()
*/

#include<stdio.h>

int p_port()
{
    int led = 0;
    int status = led;
    return status;
}

int r_port()
{
    
    return 0;
}

void main()
{
    int u_input;
    printf("enter which port do you need\n");
    scanf("%d", &u_input);
    if(u_input == pro)
    {
        
        
    }
    else if()
    {
        
    }
    else
    {
        //do nothing;
    }
}