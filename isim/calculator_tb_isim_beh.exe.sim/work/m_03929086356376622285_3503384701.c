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
static const char *ng0 = "/home/saurabh/XilinxProjects/Calculator/calculator.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};



static void Always_28_0(char *t0)
{
    char t4[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 12);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 12);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 2);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 8);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 4);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB6:    t6 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 1608);
    t14 = (t7 + 56U);
    t16 = *((char **)t14);
    t17 = (t0 + 1768);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t16, 4, t19, 4);
    t20 = (t0 + 1448);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1608);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t14 = (t0 + 1768);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 4, t7, 4, t17, 4);
    t18 = (t0 + 1448);
    xsi_vlogvar_assign_value(t18, t4, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1608);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t14 = (t0 + 1768);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t8 = *((unsigned int *)t7);
    t9 = *((unsigned int *)t17);
    t10 = (t8 | t9);
    *((unsigned int *)t4) = t10;
    t18 = (t7 + 4);
    t19 = (t17 + 4);
    t20 = (t4 + 4);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t19);
    t13 = (t11 | t12);
    *((unsigned int *)t20) = t13;
    t21 = *((unsigned int *)t20);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB16;

LAB17:
LAB18:    t39 = (t0 + 1448);
    xsi_vlogvar_assign_value(t39, t4, 0, 0, 4);
    goto LAB15;

LAB13:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1608);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t14 = (t4 + 4);
    t16 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    *((unsigned int *)t4) = t9;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB20;

LAB19:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 4294967295U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 4294967295U);
    t17 = ((char*)((ng5)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t4, 32, t17, 32);
    t18 = (t0 + 1448);
    xsi_vlogvar_assign_value(t18, t40, 0, 0, 4);
    goto LAB15;

LAB16:    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t20);
    *((unsigned int *)t4) = (t23 | t24);
    t25 = (t7 + 4);
    t26 = (t17 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = *((unsigned int *)t17);
    t34 = (t33 & t32);
    t35 = (~(t30));
    t36 = (~(t34));
    t37 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t37 & t35);
    t38 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t38 & t36);
    goto LAB18;

LAB20:    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t10 | t11);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t14) = (t12 | t13);
    goto LAB19;

}


extern void work_m_03929086356376622285_3503384701_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_03929086356376622285_3503384701", "isim/calculator_tb_isim_beh.exe.sim/work/m_03929086356376622285_3503384701.didat");
	xsi_register_executes(pe);
}
