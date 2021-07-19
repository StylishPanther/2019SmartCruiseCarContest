#ifndef STRUCT_H
#define STRUCT_H
//#include "Configuration.h"
//#include "device.h"

#ifdef __STRUCT__

#undef __STRUCT__
#define __STRUCT_EXT__

#else

#define __STRUCT_EXT__	extern


#endif

#endif


typedef volatile struct bit_flag
{
	unsigned int flag:1;
	unsigned int motor_flag:1;
	unsigned int speed_up_start:1;
	unsigned int speed_up:1;
	unsigned int motor_start:1;
	unsigned int start_flag:1;
	unsigned int position_flag:1;


	unsigned int handle:1;


	unsigned int left_miss_flag:1;
	unsigned int right_miss_flag:1;
	unsigned int no_miss_flag:1;
	unsigned int all_miss_flag:1;


	unsigned int school_flag;


	unsigned int left_distance_flag:1;
	unsigned int center_distance_flag:1;
	unsigned int right_distance_flag:1;



	unsigned int schoolzone_flag;

	unsigned int roadline_flag:1; // TRUE : ���� FALSE : ������

	unsigned int pidtest_flag:1;

	unsigned int led_flag:1;


}bit_field_flag_t;
__STRUCT_EXT__ bit_field_flag_t	g_Flag;

typedef volatile struct motor
{
	int		int32accel;

	int		int32qep_count;
	int		int32decel_flag;
	int		int32qep_val;


volatile float  f32dist_sum,
				f32dist_total,
				f32cur_vel[ 4 ],
				f32cur_vel_avr,
				f32err_vel[ 4 ],
				f32err_vel_sum,
				f32next_vel,
				f32proportional,
				f32derivative,
				f32pid_out,
				f32user_vel,
				f32decel_vel,
				f32total_dist,
				f32school_dist,
				f32decel_dist,
				f32err_dist,
				f32user_dist,
				f32start_dist,
				f32start_dist_total,
				f32pid_result;

	float		f32dist_cur,
				f32tick_dist;

	float		f32kp,
				f32kd;

	boolean enable;
	sint32	period_ms;


}motor_vari_t;
__STRUCT_EXT__ motor_vari_t g_motor;

typedef volatile struct sensor
{
	volatile int int32result;
//	volatile
}sensor_t;
__STRUCT_EXT__  sensor_t g_sen[2][128];
__STRUCT_EXT__  sensor_t g_lsen[100];
__STRUCT_EXT__  sensor_t g_rsen[100];
__STRUCT_EXT__  sensor_t * g_plsen;
__STRUCT_EXT__  sensor_t * g_prsen;


typedef volatile struct sensor_cali
{
	volatile int int32max_value;
	volatile int int32min_value;
	volatile int int32result;
	volatile int int32weight;

	volatile unsigned int u32passive:1;
	volatile unsigned int u32active:1;

	volatile float f32data;

	volatile int int32diff;

//	volatile long long
}sensor_cali_t;
__STRUCT_EXT__  sensor_cali_t g_rcsen[100];
__STRUCT_EXT__  sensor_cali_t g_lcsen[100];
typedef volatile struct line_t
{
	volatile int linedata;
}g_line_info;
typedef volatile struct position
{
	volatile int int32state;
	volatile int int32weight;

	///////////seungil///////////
//	Uint16	u16sum;
//
//	float32	fp32sum_of_sec;
//
//	float32 fp32pos_IIR_puted;
//	float32 fp32pos_IIR_puting;
//	float32 fp32pos_IIR_output;
//
//	float32	fp32kp;
//	float32	fp32ki;
//	float32	fp32kd;
//
//	float32	fp32pid_out;
//	float32	fp32current_pos;
//	float32	fp32temp_pos;
//	float32	fp32pre_pos;
//
//	float32 fp32past_pos[ 4 ];
//
//	float32	fp32proportion_val;
//	float32	fp32differential_val;
//	float32	fp32integral_val;

}position_t;

__STRUCT_EXT__  position_t g_lpos;
__STRUCT_EXT__  position_t g_rpos;

__STRUCT_EXT__ position_t g_pos;



typedef volatile struct us_flag
{
	volatile unsigned int us50_flag:1;
	volatile unsigned int us100_flag:1;
	volatile unsigned int us500_flag:1;
	volatile unsigned int us1000_flag:1;
}ustimer_t;

__STRUCT_EXT__ ustimer_t g_timer;


typedef volatile struct line
{
	unsigned int u32sector_active;
	int			 int32sector_weight;



}lineinfo_t;
__STRUCT_EXT__ lineinfo_t g_rline[20];
__STRUCT_EXT__ lineinfo_t g_lline[20];
typedef volatile struct distance
{
	int int32dsen1_result;
	int int32dsen2_result;
	int int32dsen3_result;


}distance_t;

__STRUCT_EXT__ distance_t g_dsen[10];


//typedef volatile struct kalman
//{
//	float f32state_matrix;
//	float
//
//}kalman_t;
//
//__STRUCT_EXT__ distance_t g_dsen[10];


