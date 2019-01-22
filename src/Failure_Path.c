#include "Failure_Path.h" 


int Failure_Path(TBOOL X1,TBOOL X2,TBOOL X3,TBOOL X4,TBOOL X5,TBOOL X6, TBOOL X7, TBOOL X8)
{
	int retval = -1;
if (X1) 
{
	retval = 9;
	
} else 
{
	
	if (X2 && X8)
	{
		retval = 3;
	}else
	{
		if (!(X8) && X2)
			{
				retval = 4;
			}	
			else
			{
				if (X3 && X8)
				{
					retval = 1;
				}
				else
				{
						if (!X8 && X3)
						{
							retval =7;
						}
						else
						{
							if (X4 && X5)
							{
									retval=2;
							}
							else
							{
								if ( X6 && X7 && X8)
								{
									retval = 5;
								}
								else
								{
									if ( !X7 && X6)
									{
										retval = 6;
									}
									else
									{
										if (!X8 &&  X7 && X6 )
										{
												retval = 8;
										}
										else
										{
											retval = 0;
										}
									}
								}
							}
						}
				}
			}		
	}
	}
return retval;
}

//int main ()
//{
//	TBOOL X1_param , X2_param, X3_param,X4_param,X5_param ,X6_param,X7_param,X8_param;
//	int ret;
//	ret=Failure_Path(X1_param , X2_param, X3_param,X4_param,X5_param ,X6_param,X7_param,X8_param);
	
//}
