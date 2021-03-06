/*
 *----------------------------------------------------------------------
 *    micro T-Kernel 3.00.01
 *
 *    Copyright (C) 2006-2020 by Ken Sakamura.
 *    This software is distributed under the T-License 2.2.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2020/05/29.
 *
 *----------------------------------------------------------------------
 */

#include <sys/machine.h>
#ifdef CPU_CORE_RXV2

/*
 *	exc_hdr.c (RXv2)
 *	Exception handler
 */

#include <tk/tkernel.h>
#include <tm/tmonitor.h>
#include <kernel.h>

#if USE_EXCEPTION_DBG_MSG
	#define EXCEPTION_DBG_MSG(a)	tm_printf(a)
#else
	#define EXCEPTION_DBG_MSG(a)
#endif

/*
 * NMI handler
 */
WEAK_FUNC EXPORT void NMI_Handler(void)
{
	EXCEPTION_DBG_MSG("NMI\n");
	while(1);
}


/*
 * Supervisor Instruction Exception Handler
 */
WEAK_FUNC EXPORT void SuperVisorInst_Handler(void)
{
	EXCEPTION_DBG_MSG("Supervisor Instruction Exception\n");
	while(1);
}

/* 
 * Access Instruction Exception Handler
 */
WEAK_FUNC EXPORT void AccessInst_Handler(void)
{
	EXCEPTION_DBG_MSG("Access Instruction Exception\n");
	while(1);
}

/*
 * Undefined Instruction Exception Handler
 */
WEAK_FUNC EXPORT void UndefinedInst_Handler(void)
{
	EXCEPTION_DBG_MSG("Undefined Instruction Exception\n");
	while(1);
}

/*
 * Floating Point Exception Handler
 */
WEAK_FUNC EXPORT void FloatingPoint_Handler(void)
{
	EXCEPTION_DBG_MSG("Floating Point Exception\n");
	while(1);
}

/*
 * Default HLL Interrupt Handler
 */
WEAK_FUNC EXPORT void Default_Handler(UW intno)
{

#if USE_EXCEPTION_DBG_MSG
	tm_printf("Un-defined Interrupt %d\n",intno);
#endif

	while(1);
}

#endif /* CPU_CORE_RXV2 */
