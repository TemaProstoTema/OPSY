
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{

}

void _CYCLIC ProgramCyclic(void)
{
	LED1=LED[0];
	LED2=LED[1];
	LED3=LED[2];
	LED4=LED[3];
}

void _EXIT ProgramExit(void)
{

}

