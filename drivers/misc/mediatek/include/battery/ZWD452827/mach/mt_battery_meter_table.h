/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mt-plat/battery_meter.h>

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R	16900
#define RBAT_PULL_DOWN_R	27000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R	61900
#define RBAT_PULL_DOWN_R	100000
#endif
#define RBAT_PULL_UP_VOLT	1800



/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 68237},
		{-15, 53650},
		{-10, 42506},
		{ -5, 33892},
		{  0, 27219},
		{  5, 22021},
		{ 10, 17926},
		{ 15, 14674},
		{ 20, 12081},
		{ 25, 10000},
		{ 30, 8315},
		{ 35, 6948},
		{ 40, 5834},
		{ 45, 4917},
		{ 50, 4161},
		{ 55, 3535},
		{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	};
#endif

/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] = 
{
	{	0	,	4329	},
	{	1	,	4309	},
	{	2	,	4292	},
	{	3	,	4277	},
	{	4	,	4263	},
	{	5	,	4251	},
	{	6	,	4239	},
	{	7	,	4227	},
	{	8	,	4216	},
	{	9	,	4205	},
	{	10	,	4194	},
	{	11	,	4183	},
	{	12	,	4173	},
	{	13	,	4162	},
	{	14	,	4151	},
	{	15	,	4140	},
	{	16	,	4129	},
	{	17	,	4118	},
	{	18	,	4108	},
	{	19	,	4098	},
	{	20	,	4090	},
	{	21	,	4082	},
	{	22	,	4074	},
	{	23	,	4065	},
	{	24	,	4052	},
	{	25	,	4036	},
	{	26	,	4016	},
	{	27	,	3997	},
	{	28	,	3981	},
	{	29	,	3968	},
	{	30	,	3957	},
	{	31	,	3947	},
	{	32	,	3939	},
	{	33	,	3931	},
	{	34	,	3925	},
	{	35	,	3919	},
	{	36	,	3914	},
	{	37	,	3909	},
	{	38	,	3904	},
	{	39	,	3898	},
	{	40	,	3893	},
	{	41	,	3887	},
	{	42	,	3881	},
	{	43	,	3875	},
	{	44	,	3869	},
	{	45	,	3864	},
	{	46	,	3858	},
	{	47	,	3853	},
	{	48	,	3848	},
	{	49	,	3843	},
	{	50	,	3838	},
	{	51	,	3833	},
	{	52	,	3829	},
	{	53	,	3824	},
	{	54	,	3820	},
	{	55	,	3816	},
	{	56	,	3812	},
	{	57	,	3804	},
	{	58	,	3801	},
	{	59	,	3797	},
	{	60	,	3794	},
	{	61	,	3792	},
	{	62	,	3789	},
	{	63	,	3786	},
	{	64	,	3784	},
	{	65	,	3782	},
	{	66	,	3780	},
	{	67	,	3778	},
	{	68	,	3775	},
	{	69	,	3773	},
	{	70	,	3771	},
	{	71	,	3769	},
	{	72	,	3766	},
	{	73	,	3764	},
	{	74	,	3761	},
	{	75	,	3758	},
	{	76	,	3756	},
	{	77	,	3752	},
	{	78	,	3749	},
	{	79	,	3745	},
	{	80	,	3741	},
	{	81	,	3737	},
	{	82	,	3733	},
	{	83	,	3729	},
	{	84	,	3725	},
	{	85	,	3721	},
	{	86	,	3717	},
	{	87	,	3713	},
	{	88	,	3710	},
	{	89	,	3706	},
	{	90	,	3702	},
	{	91	,	3696	},
	{	92	,	3689	},
	{	93	,	3678	},
	{	94	,	3664	},
	{	95	,	3646	},
	{	96	,	3619	},
	{	97	,	3585	},
	{	98	,	3539	},
	{	99	,	3477	},
	{	100 ,	3390	}

};      

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = 
{
	{	0	,	4325	},
	{	1	,	4305	},
	{	2	,	4288	},
	{	3	,	4272	},
	{	4	,	4258	},
	{	5	,	4244	},
	{	6	,	4231	},
	{	7	,	4219	},
	{	8	,	4207	},
	{	9	,	4196	},
	{	10	,	4185	},
	{	11	,	4174	},
	{	12	,	4164	},
	{	13	,	4154	},
	{	14	,	4143	},
	{	15	,	4133	},
	{	16	,	4124	},
	{	17	,	4114	},
	{	18	,	4104	},
	{	19	,	4096	},
	{	20	,	4091	},
	{	21	,	4086	},
	{	22	,	4082	},
	{	23	,	4072	},
	{	24	,	4058	},
	{	25	,	4038	},
	{	26	,	4018	},
	{	27	,	4002	},
	{	28	,	3990	},
	{	29	,	3979	},
	{	30	,	3971	},
	{	31	,	3964	},
	{	32	,	3957	},
	{	33	,	3952	},
	{	34	,	3946	},
	{	35	,	3941	},
	{	36	,	3936	},
	{	37	,	3930	},
	{	38	,	3923	},
	{	39	,	3909	},
	{	40	,	3902	},
	{	41	,	3894	},
	{	42	,	3887	},
	{	43	,	3881	},
	{	44	,	3874	},
	{	45	,	3867	},
	{	46	,	3862	},
	{	47	,	3856	},
	{	48	,	3850	},
	{	49	,	3845	},
	{	50	,	3840	},
	{	51	,	3836	},
	{	52	,	3832	},
	{	53	,	3827	},
	{	54	,	3823	},
	{	55	,	3819	},
	{	56	,	3815	},
	{	57	,	3812	},
	{	58	,	3809	},
	{	59	,	3805	},
	{	60	,	3802	},
	{	61	,	3799	},
	{	62	,	3796	},
	{	63	,	3793	},
	{	64	,	3791	},
	{	65	,	3788	},
	{	66	,	3786	},
	{	67	,	3783	},
	{	68	,	3782	},
	{	69	,	3780	},
	{	70	,	3779	},
	{	71	,	3777	},
	{	72	,	3776	},
	{	73	,	3774	},
	{	74	,	3772	},
	{	75	,	3770	},
	{	76	,	3769	},
	{	77	,	3766	},
	{	78	,	3763	},
	{	79	,	3761	},
	{	80	,	3757	},
	{	81	,	3754	},
	{	82	,	3750	},
	{	83	,	3745	},
	{	84	,	3740	},
	{	85	,	3735	},
	{	86	,	3730	},
	{	87	,	3723	},
	{	88	,	3716	},
	{	89	,	3711	},
	{	90	,	3707	},
	{	91	,	3704	},
	{	92	,	3702	},
	{	93	,	3698	},
	{	94	,	3694	},
	{	95	,	3684	},
	{	96	,	3664	},
	{	97	,	3630	},
	{	98	,	3583	},
	{	99	,	3520	},
	{	100 ,	3436	}

};           

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = 
{
	{	0	,	4336 	},
{	1	,	4322 	},
{	2	,	4309 	},
{	3	,	4297 	},
{	4	,	4286 	},
{	5	,	4275 	},
{	6	,	4264 	},
{	7	,	4253 	},
{	8	,	4242 	},
{	9	,	4231 	},
{	10	,	4221 	},
{	11	,	4210 	},
{	12	,	4200 	},
{	13	,	4189 	},
{	14	,	4179 	},
{	15	,	4168 	},
{	16	,	4158 	},
{	17	,	4147 	},
{	18	,	4137 	},
{	19	,	4127 	},
{	20	,	4117 	},
{	21	,	4107 	},
{	22	,	4096 	},
{	23	,	4086 	},
{	24	,	4078 	},
{	25	,	4071 	},
{	26	,	4067 	},
{	27	,	4060 	},
{	28	,	4049 	},
{	29	,	4031 	},
{	30	,	4024 	},
{	31	,	4014 	},
{	32	,	3999 	},
{	33	,	3987 	},
{	34	,	3978 	},
{	35	,	3969 	},
{	36	,	3962 	},
{	37	,	3955 	},
{	38	,	3946 	},
{	39	,	3934 	},
{	40	,	3923 	},
{	41	,	3913 	},
{	42	,	3905 	},
{	43	,	3898 	},
{	44	,	3890 	},
{	45	,	3884 	},
{	46	,	3878 	},
{	47	,	3872 	},
{	48	,	3866 	},
{	49	,	3860 	},
{	50	,	3855 	},
{	51	,	3850 	},
{	52	,	3845 	},
{	53	,	3840 	},
{	54	,	3836 	},
{	55	,	3831 	},
{	56	,	3827 	},
{	57	,	3823 	},
{	58	,	3819 	},
{	59	,	3815 	},
{	60	,	3811 	},
{	61	,	3807 	},
{	62	,	3804 	},
{	63	,	3801 	},
{	64	,	3797 	},
{	65	,	3793 	},
{	66	,	3790 	},
{	67	,	3787 	},
{	68	,	3782 	},
{	69	,	3778 	},
{	70	,	3774 	},
{	71	,	3770 	},
{	72	,	3765 	},
{	73	,	3761 	},
{	74	,	3757 	},
{	75	,	3752 	},
{	76	,	3748 	},
{	77	,	3745 	},
{	78	,	3742 	},
{	79	,	3738 	},
{	80	,	3734 	},
{	81	,	3730 	},
{	82	,	3724 	},
{	83	,	3719 	},
{	84	,	3715 	},
{	85	,	3709 	},
{	86	,	3703 	},
{	87	,	3695 	},
{	88	,	3692 	},
{	89	,	3690 	},
{	90	,	3689 	},
{	91	,	3688 	},
{	92	,	3687 	},
{	93	,	3686 	},
{	94	,	3683 	},
{	95	,	3676 	},
{	96	,	3655 	},
{	97	,	3619 	},
{	98	,	3573 	},
{	99	,	3516 	},
{	100	,	3438 	}

};     

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = 
{
	{	0	,	4325	},
	{	1	,	4314	},
	{	2	,	4302	},
	{	3	,	4291	},
	{	4	,	4280	},
	{	5	,	4269	},
	{	6	,	4258	},
	{	7	,	4248	},
	{	8	,	4237	},
	{	9	,	4226	},
	{	10	,	4215	},
	{	11	,	4205	},
	{	12	,	4195	},
	{	13	,	4184	},
	{	14	,	4174	},
	{	15	,	4164	},
	{	16	,	4153	},
	{	17	,	4143	},
	{	18	,	4133	},
	{	19	,	4124	},
	{	20	,	4114	},
	{	21	,	4104	},
	{	22	,	4094	},
	{	23	,	4085	},
	{	24	,	4075	},
	{	25	,	4066	},
	{	26	,	4057	},
	{	27	,	4048	},
	{	28	,	4040	},
	{	29	,	4029	},
	{	30	,	4017	},
	{	31	,	4006	},
	{	32	,	3999	},
	{	33	,	3991	},
	{	34	,	3982	},
	{	35	,	3973	},
	{	36	,	3964	},
	{	37	,	3955	},
	{	38	,	3945	},
	{	39	,	3936	},
	{	40	,	3925	},
	{	41	,	3916	},
	{	42	,	3907	},
	{	43	,	3898	},
	{	44	,	3891	},
	{	45	,	3884	},
	{	46	,	3878	},
	{	47	,	3872	},
	{	48	,	3866	},
	{	49	,	3860	},
	{	50	,	3855	},
	{	51	,	3850	},
	{	52	,	3845	},
	{	53	,	3840	},
	{	54	,	3836	},
	{	55	,	3831	},
	{	56	,	3827	},
	{	57	,	3823	},
	{	58	,	3819	},
	{	59	,	3814	},
	{	60	,	3811	},
	{	61	,	3807	},
	{	62	,	3803	},
	{	63	,	3799	},
	{	64	,	3796	},
	{	65	,	3792	},
	{	66	,	3788	},
	{	67	,	3784	},
	{	68	,	3779	},
	{	69	,	3774	},
	{	70	,	3767	},
	{	71	,	3761	},
	{	72	,	3756	},
	{	73	,	3751	},
	{	74	,	3747	},
	{	75	,	3742	},
	{	76	,	3738	},
	{	77	,	3734	},
	{	78	,	3730	},
	{	79	,	3726	},
	{	80	,	3722	},
	{	81	,	3718	},
	{	82	,	3712	},
	{	83	,	3707	},
	{	84	,	3701	},
	{	85	,	3696	},
	{	86	,	3690	},
	{	87	,	3682	},
	{	88	,	3679	},
	{	89	,	3678	},
	{	90	,	3677	},
	{	91	,	3676	},
	{	92	,	3674	},
	{	93	,	3672	},
	{	94	,	3665	},
	{	95	,	3646	},
	{	96	,	3613	},
	{	97	,	3572	},
	{	98	,	3521	},
	{	99	,	3455	},
	{	100 ,	3364	}

};           

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = 
{
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	}

};    

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = 
{
	{	268 ,	4329	},
	{	11130	,	4309	},
	{	10254	,	4292	},
	{	10045	,	4277	},
	{	9878	,	4263	},
	{	9699	,	4251	},
	{	9548	,	4239	},
	{	9363	,	4227	},
	{	9231	,	4216	},
	{	9086	,	4205	},
	{	8956	,	4194	},
	{	8854	,	4183	},
	{	8758	,	4173	},
	{	8615	,	4162	},
	{	8541	,	4151	},
	{	8433	,	4140	},
	{	8351	,	4129	},
	{	8259	,	4118	},
	{	8184	,	4108	},
	{	8119	,	4098	},
	{	8095	,	4090	},
	{	8034	,	4082	},
	{	8006	,	4074	},
	{	7971	,	4065	},
	{	7898	,	4052	},
	{	7790	,	4036	},
	{	7666	,	4016	},
	{	7541	,	3997	},
	{	7495	,	3981	},
	{	7491	,	3968	},
	{	7455	,	3957	},
	{	7433	,	3947	},
	{	7425	,	3939	},
	{	7398	,	3931	},
	{	7383	,	3925	},
	{	7371	,	3919	},
	{	7416	,	3914	},
	{	7410	,	3909	},
	{	7413	,	3904	},
	{	7413	,	3898	},
	{	7406	,	3893	},
	{	7390	,	3887	},
	{	7383	,	3881	},
	{	7394	,	3875	},
	{	7386	,	3869	},
	{	7401	,	3864	},
	{	7378	,	3858	},
	{	7421	,	3853	},
	{	7375	,	3848	},
	{	7378	,	3843	},
	{	7390	,	3838	},
	{	7398	,	3833	},
	{	7414	,	3829	},
	{	7416	,	3824	},
	{	7433	,	3820	},
	{	7441	,	3816	},
	{	7456	,	3812	},
	{	7479	,	3804	},
	{	7506	,	3801	},
	{	7514	,	3797	},
	{	7541	,	3794	},
	{	7569	,	3792	},
	{	7588	,	3789	},
	{	7588	,	3786	},
	{	7608	,	3784	},
	{	7650	,	3782	},
	{	7684	,	3780	},
	{	7704	,	3778	},
	{	7739	,	3775	},
	{	7793	,	3773	},
	{	7804	,	3771	},
	{	7829	,	3769	},
	{	7871	,	3766	},
	{	7918	,	3764	},
	{	7956	,	3761	},
	{	8010	,	3758	},
	{	8064	,	3756	},
	{	8123	,	3752	},
	{	8193	,	3749	},
	{	8250	,	3745	},
	{	8313	,	3741	},
	{	8390	,	3737	},
	{	8479	,	3733	},
	{	8561	,	3729	},
	{	8684	,	3725	},
	{	8793	,	3721	},
	{	8918	,	3717	},
	{	9038	,	3713	},
	{	9208	,	3710	},
	{	9394	,	3706	},
	{	9549	,	3702	},
	{	9743	,	3696	},
	{	10014	,	3689	},
	{	10250	,	3678	},
	{	10494	,	3664	},
	{	10743	,	3646	},
	{	11071	,	3619	},
	{	11440	,	3585	},
	{	11865	,	3539	},
	{	12505	,	3477	},
	{	13688	,	3390	}

};      

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = 
{
	{	268 ,	4325	},
	{	2349	,	4305	},
	{	2344	,	4288	},
	{	2388	,	4272	},
	{	2399	,	4258	},
	{	2410	,	4244	},
	{	2426	,	4231	},
	{	2426	,	4219	},
	{	2456	,	4207	},
	{	2461	,	4196	},
	{	2484	,	4185	},
	{	2493	,	4174	},
	{	2491	,	4164	},
	{	2500	,	4154	},
	{	2507	,	4143	},
	{	2503	,	4133	},
	{	2499	,	4124	},
	{	2508	,	4114	},
	{	2500	,	4104	},
	{	2503	,	4096	},
	{	2520	,	4091	},
	{	2561	,	4086	},
	{	2605	,	4082	},
	{	2609	,	4072	},
	{	2600	,	4058	},
	{	2563	,	4038	},
	{	2523	,	4018	},
	{	2495	,	4002	},
	{	2476	,	3990	},
	{	2465	,	3979	},
	{	2469	,	3971	},
	{	2461	,	3964	},
	{	2464	,	3957	},
	{	2454	,	3952	},
	{	2458	,	3946	},
	{	2460	,	3941	},
	{	2454	,	3936	},
	{	2446	,	3930	},
	{	2426	,	3923	},
	{	2399	,	3909	},
	{	2386	,	3902	},
	{	2375	,	3894	},
	{	2356	,	3887	},
	{	2353	,	3881	},
	{	2338	,	3874	},
	{	2333	,	3867	},
	{	2338	,	3862	},
	{	2334	,	3856	},
	{	2341	,	3850	},
	{	2356	,	3845	},
	{	2356	,	3840	},
	{	2368	,	3836	},
	{	2371	,	3832	},
	{	2379	,	3827	},
	{	2384	,	3823	},
	{	2403	,	3819	},
	{	2408	,	3815	},
	{	2423	,	3812	},
	{	2445	,	3809	},
	{	2441	,	3805	},
	{	2468	,	3802	},
	{	2476	,	3799	},
	{	2484	,	3796	},
	{	2524	,	3793	},
	{	2528	,	3791	},
	{	2546	,	3788	},
	{	2561	,	3786	},
	{	2554	,	3783	},
	{	2581	,	3782	},
	{	2604	,	3780	},
	{	2596	,	3779	},
	{	2620	,	3777	},
	{	2648	,	3776	},
	{	2643	,	3774	},
	{	2694	,	3772	},
	{	2701	,	3770	},
	{	2721	,	3769	},
	{	2748	,	3766	},
	{	2775	,	3763	},
	{	2806	,	3761	},
	{	2821	,	3757	},
	{	2864	,	3754	},
	{	2890	,	3750	},
	{	2930	,	3745	},
	{	2964	,	3740	},
	{	3023	,	3735	},
	{	3065	,	3730	},
	{	3116	,	3723	},
	{	3163	,	3716	},
	{	3240	,	3711	},
	{	3325	,	3707	},
	{	3473	,	3704	},
	{	3608	,	3702	},
	{	3814	,	3698	},
	{	4073	,	3694	},
	{	4383	,	3684	},
	{	4763	,	3664	},
	{	5240	,	3630	},
	{	5820	,	3583	},
	{	6724	,	3520	},
	{	7999	,	3436	}

};     

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = 
{
	{	783	,	4336 	},
{	783	,	4322 	},
{	782	,	4309 	},
{	805	,	4297 	},
{	810	,	4286 	},
{	810	,	4275 	},
{	830	,	4264 	},
{	845	,	4253 	},
{	795	,	4242 	},
{	779	,	4231 	},
{	838	,	4221 	},
{	794	,	4210 	},
{	779	,	4200 	},
{	821	,	4189 	},
{	799	,	4179 	},
{	795	,	4168 	},
{	832	,	4158 	},
{	825	,	4147 	},
{	814	,	4137 	},
{	814	,	4127 	},
{	856	,	4117 	},
{	838	,	4107 	},
{	910	,	4096 	},
{	856	,	4086 	},
{	856	,	4078 	},
{	918	,	4071 	},
{	926	,	4067 	},
{	996	,	4060 	},
{	919	,	4049 	},
{	930	,	4031 	},
{	920	,	4024 	},
{	908	,	4014 	},
{	915	,	3999 	},
{	926	,	3987 	},
{	945	,	3978 	},
{	926	,	3969 	},
{	930	,	3962 	},
{	950	,	3955 	},
{	902	,	3946 	},
{	821	,	3934 	},
{	790	,	3923 	},
{	786	,	3913 	},
{	752	,	3905 	},
{	768	,	3898 	},
{	779	,	3890 	},
{	740	,	3884 	},
{	725	,	3878 	},
{	782	,	3872 	},
{	760	,	3866 	},
{	744	,	3860 	},
{	782	,	3855 	},
{	760	,	3850 	},
{	751	,	3845 	},
{	745	,	3840 	},
{	759	,	3836 	},
{	760	,	3831 	},
{	736	,	3827 	},
{	751	,	3823 	},
{	749	,	3819 	},
{	766	,	3815 	},
{	786	,	3811 	},
{	764	,	3807 	},
{	760	,	3804 	},
{	799	,	3801 	},
{	775	,	3797 	},
{	834	,	3793 	},
{	779	,	3790 	},
{	794	,	3787 	},
{	817	,	3782 	},
{	788	,	3778 	},
{	775	,	3774 	},
{	799	,	3770 	},
{	821	,	3765 	},
{	760	,	3761 	},
{	764	,	3757 	},
{	829	,	3752 	},
{	795	,	3748 	},
{	775	,	3745 	},
{	771	,	3742 	},
{	771	,	3738 	},
{	782	,	3734 	},
{	779	,	3730 	},
{	775	,	3724 	},
{	779	,	3719 	},
{	786	,	3715 	},
{	786	,	3709 	},
{	790	,	3703 	},
{	784	,	3695 	},
{	786	,	3692 	},
{	790	,	3690 	},
{	795	,	3689 	},
{	790	,	3688 	},
{	818	,	3687 	},
{	838	,	3686 	},
{	856	,	3683 	},
{	891	,	3676 	},
{	888	,	3655 	},
{	926	,	3619 	},
{	991	,	3573 	},
{	1109	,	3516 	},
{	1256	,	3438 	}


}; 

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = 
{
	{	110 ,	4325	},
	{	323 ,	4314	},
	{	325 ,	4302	},
	{	325 ,	4291	},
	{	326 ,	4280	},
	{	329 ,	4269	},
	{	330 ,	4258	},
	{	329 ,	4248	},
	{	334 ,	4237	},
	{	333 ,	4226	},
	{	326 ,	4215	},
	{	334 ,	4205	},
	{	336 ,	4195	},
	{	334 ,	4184	},
	{	338 ,	4174	},
	{	338 ,	4164	},
	{	334 ,	4153	},
	{	341 ,	4143	},
	{	344 ,	4133	},
	{	345 ,	4124	},
	{	349 ,	4114	},
	{	349 ,	4104	},
	{	352 ,	4094	},
	{	357 ,	4085	},
	{	361 ,	4075	},
	{	365 ,	4066	},
	{	372 ,	4057	},
	{	384 ,	4048	},
	{	402 ,	4040	},
	{	388 ,	4029	},
	{	388 ,	4017	},
	{	395 ,	4006	},
	{	411 ,	3999	},
	{	406 ,	3991	},
	{	404 ,	3982	},
	{	400 ,	3973	},
	{	395 ,	3964	},
	{	395 ,	3955	},
	{	380 ,	3945	},
	{	372 ,	3936	},
	{	360 ,	3925	},
	{	341 ,	3916	},
	{	333 ,	3907	},
	{	321 ,	3898	},
	{	318 ,	3891	},
	{	310 ,	3884	},
	{	314 ,	3878	},
	{	310 ,	3872	},
	{	306 ,	3866	},
	{	314 ,	3860	},
	{	310 ,	3855	},
	{	314 ,	3850	},
	{	314 ,	3845	},
	{	315 ,	3840	},
	{	318 ,	3836	},
	{	322 ,	3831	},
	{	325 ,	3827	},
	{	325 ,	3823	},
	{	330 ,	3819	},
	{	332 ,	3814	},
	{	338 ,	3811	},
	{	334 ,	3807	},
	{	341 ,	3803	},
	{	340 ,	3799	},
	{	345 ,	3796	},
	{	345 ,	3792	},
	{	349 ,	3788	},
	{	345 ,	3784	},
	{	345 ,	3779	},
	{	325 ,	3774	},
	{	317 ,	3767	},
	{	314 ,	3761	},
	{	318 ,	3756	},
	{	317 ,	3751	},
	{	318 ,	3747	},
	{	314 ,	3742	},
	{	319 ,	3738	},
	{	321 ,	3734	},
	{	318 ,	3730	},
	{	318 ,	3726	},
	{	326 ,	3722	},
	{	325 ,	3718	},
	{	321 ,	3712	},
	{	321 ,	3707	},
	{	323 ,	3701	},
	{	321 ,	3696	},
	{	325 ,	3690	},
	{	319 ,	3682	},
	{	314 ,	3679	},
	{	325 ,	3678	},
	{	330 ,	3677	},
	{	336 ,	3676	},
	{	349 ,	3674	},
	{	360 ,	3672	},
	{	368 ,	3665	},
	{	364 ,	3646	},
	{	384 ,	3613	},
	{	426 ,	3572	},
	{	476 ,	3521	},
	{	561 ,	3455	},
	{	732 ,	3364	}

}; 

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = 
{
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	}

};    

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif

