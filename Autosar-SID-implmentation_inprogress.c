/*Autosar SID implmentation based on ISO 14229
10, 11, 22

NRC 
*/

#include<stdio.h>

/*future implementation file Security acces call file, read data by id need to add */
#define SID_DIG_SESSION_CTRL                10
#define SID_ECU_REST                        11
#define SID_READ_DATA_BY_ID                 22

#define SUB_DEFAULT                         01
#define SUB_PROG                            02
#define SUB_EXTD                            03

#define NRC_SID_NOT_SUPPORTED               10
#define NRC_SUB_FUN_NOT_SUPPORTED           11
#define NRC_INCORRECT_MSG_LGTH              13

void default_ses()
{
    printf("Default session\n");
}

int nrc_10()
{
    return NRC_SID_NOT_SUPPORTED;
}

int nrc_11()
{
    return NRC_SUB_FUN_NOT_SUPPORTED;
}

void main()
{
    int user, sub;
    printf("Kindly enter SID\n");
    scanf("%d", &user);
    
    if(user == SID_DIG_SESSION_CTRL)
    {
       printf("Please enter Sub_function id\n");
       scanf("%d", &sub);
       
       if(sub == SUB_DEFAULT)
       {
          default_ses();
       }
       else if(sub == SUB_PROG)
       {
           /*      Boot_loader    */
           printf("not allowed only authrosied\n");
       }
       else if(sub == SUB_EXTD)
       {
           //security access() function need to connect here in future
           printf("you are in security access SIDs first step\n");
       }
       else
       {
           nrc_11();
       }
    }
    else
    {
        //NRC need to implement
        nrc_10();
    }
    
}


