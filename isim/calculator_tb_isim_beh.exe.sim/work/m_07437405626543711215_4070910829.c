/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/saurabh/XilinxProjects/Calculator/calculator_tb.v";
static const char *ng1 = "/home/saurabh/XilinxProjects/Calculator/input.txt";
static const char *ng2 = "output.txt";
static const char *ng3 = "w";
static const char *ng4 = "%b";
static const char *ng5 = "%d";



static void Initial_34_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1448);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_49_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);

LAB4:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t4 = (t3 + 4);
    *((int *)t4) = 0;
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 1, 0, 0, ng4, 2, t0, (char)118, t7, 4);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 1, 0, 0, ng5, 2, t0, (char)118, t7, 4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB1;

}


extern void work_m_07437405626543711215_4070910829_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Initial_49_1};
	xsi_register_didat("work_m_07437405626543711215_4070910829", "isim/calculator_tb_isim_beh.exe.sim/work/m_07437405626543711215_4070910829.didat");
	xsi_register_executes(pe);
}
