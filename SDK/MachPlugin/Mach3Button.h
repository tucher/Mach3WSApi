// Mach3Button.h

#define RUN_SCREEN				1
#define MDI_SCREEN				2
#define TOOLPATH_SCREEN			3
#define POSITIONING_SCREEN		4
#define DIAGNOSTICS_SCREEN		5
#define CORRECTIONS_SCREEN		6
#define TABLES_SCREEN			7
#define INC_INC_UP				100
#define INC_INC_DOWN			101
#define RESET_INTERP			102
#define JOG_MODE_TOGGLE			103
#define GOTO_SAFE_Z				104
#define SET_MACHINE_COORDS		105
#define UNITS					106
#define MACH3_COORDS			107
#define FEED_RAISE				108
#define FEED_LOWER				109
#define SPINDLE_CW				110
#define RESET_THC_HEIGHT		110
#define SLOW_JOG_UP				111
#define SLOW_JOG_DOWN			112
#define FLOOD_TOGGLE			113
#define MIST_TOGGLE				114
#define EDIT_GCODE				115
#define ZERO_RADIUS_X_DRO		116
#define ZERO_RADIUS_Y_DRO		117
#define ZERO_RADIUS_Z_DRO		118
#define SOFTWARE_LIMITS			119
#define TOOL_LEN_OFFSET_TOUCH	120
#define TOOL_TAB_SAVE			121
#define FIXTURE_TAB_SAVE		122
#define TORCH_ENABLE_TOGGLE		123
#define TORCH_CAL_ZERO			124
#define ENC_LOAD_X				125
#define ENC_TO_X				126
#define ENC_LOAD_Y				127
#define ENC_TO_Y				128
#define ENC_LOAD_Z				129
#define ENC_TO_Z				130
#define MILL_TURN_MODE_TOGGLE	131
#define TOOL_PATH_TOGGLE		132
#define ZERO_X_ENCODER			133
#define ZERO_Y_ENCODER			134
#define ZERO_Z_ENCODER			135
#define TOOL_OFFSET_TOGGLE		136
#define FIXTURE_OFFSET			137
#define GO_HOME					138
#define PART_X_OFFSET_TOUCH		139
#define PART_Y_OFFSET_TOUCH		140
#define PART_Z_OFFSET_TOUCH		141
#define PART_A_OFFSET_TOUCH		142
#define PART_B_OFFSET_TOUCH		143
#define PART_C_OFFSET_TOUCH		144
#define TOOL_X_OFFSET_TOUCH		145
#define TOOL_Z_OFFSET_TOUCH		146
#define JOY_THROTTLE_SELECT		147
#define TOUCH_CORR_EN_TOGGLE	148
#define AUTO_LIM_OVER_TOGGLE	149
#define OVERRIDE_LIMITS			150
#define SS_ON_ACT4_TOGGLE		151
		// reserved				152
		// reserved				153
		// reserved				154
#define UNITS_REV_MIN__TOGGLE	155
#define SET_THIS_NEXT_EXECUTE	156
#define JOG_FOLLOW				157
#define JOYSTICK_ON				158 // duplicated by 206
#define JOYSTICK_OFF			159 // duplicated by 207
#define REGEN_TOOLPATH_DISPLAY	160
#define ZERO_X_Z_TURN			161
#define CORRDINATE_MODE_TOGGLE	162
#define RAISE_SPINDLE_SPEED		163
#define LOWER_SPINDLE_SPEED		164
#define LASER_PROBE_TOGGLE		165
#define ZERO_LASER_GRID_CURRENT	166
#define Z_INHIBIT_TOGGLE		167
#define IGNORE_TOOL_CHANGE		168
#define CLOSE_GCODE_FILE		169
#define RELOAD_LAST_GCODE_FILE	170
#define JOG_INCREMENT_CYCLE		171
#define CLEAR_ERROR_DISPLAY		172
#define SPINDLE_CCW_TOGGLE		173
#define PP_ENC3_MPG_JOG_TOGGLE	174
#define CYCLE_MPG1_AXIS			175
#define BLOCK_DEL_SW_TOGGLE		176
#define OPT_STOP_SW_TOGGLE		177
#define OFFLINE_TOGGLE			178
#define DISP_MACHINE_COORDS_ON	179
#define DISP_MACINE_COORDS_OFF	180
#define DISP_WORK_COORDS_ON		181
#define TOGGLE_SPINDLE_ACTUAL	182
		// reserved				183
#define HOME_X_Z_TURN			184	// duplicated by 211
#define SELECT_X_FOR_MPG1		185
#define SELECT_Y_FOR_MPG1		186
#define SELECT_Z_FOR_MPG1		187
#define SELECT_A_FOR_MPG1		188
#define SELECT_B_FOR_MPG1		189
#define SELECT_C_FOR_MPG1		190
#define SELECT_JOG_INC_1		191
#define SELECT_JOG_INC_2		192
#define SELECT_JOG_INC_3		193
#define SELECT_JOG_INC_4		194
#define SELECT_JOG_INC_5		195
#define SELECT_JOG_INC_6		196
#define SELECT_JOG_INC_7		197
#define SELECT_JOG_INC_8		198
#define SELECT_JOG_INC_9		199
#define SELECT_JOG_INC_10		200
#define FEED_OVERRIDE_ON		201
#define FEED_OVERRIDE_OFF		202
#define FEED_OVERRIDE_FEED		203
#define JOG_CONTINUOUS			204		// duplicated by 276
#define JOG_STEP				205		// duplicated by 275
#define SET_JOYSTICK_ON			206		// duplicated by 158
#define SET_JOYSTICK_OFF		207		// duplicated by 159
#define CLEAR_Z_TOOL_OFF_TURN	208
#define CLEAR_X_TOOL_OFF_TURN	209
#define SET_STOCK_CORR_0_TURN	210
#define SET_HOME_X_Z_TURN		211		// duplicated by 184
#define SET_HOME_X_TURN			212
#define SET_HOME_Z_TURN			213
#define SHOW_GCODE_LIST			214
#define	DISPLAY_HISTORY			215
#define LOAD_GCODE				216
#define FRONT_REAR_TOOLPOST		217
#define Z_INHIBIT_ON			218
#define Z_INHIBIT_OFF			219
#define PORT_BIT_TEST_DIAG		220
#define ANTI_DIVE_TOGGLE		221
#define ANTI_DIVE_OFF			222
#define ANTI_DIVE_ON			223
#define FLOOD_ON				224
#define FLOOD_OFF				225
#define MIST_ON					226
#define MIST_OFF				227
#define LOAD_TEACH_FILE			228
#define TOOLPATH_DISP_TOGGLE	229
#define SHOW_WIZARD_SELECTIONS	230
#define LOAD_NORMAL_SCREENS		231
#define SIMPLE_COMPLEX_TOGGLE	232
#define OUTPUT_4_ON				233
#define OUTPUT_4_OFF			234
#define OUTPUT_5_ON				235
#define OUTPUT_5_OFF			236
#define OUTPUT_6_ON				237
#define OUTPUT_6_OFF			238
#define SET_HELP_CONTEXT		239
#define DEF_REF_ALL_AXES		240
#define TANGENTIAL_TOGGLE		241
#define SAVE_XYZ_G59_254		242
#define G0G53_TO_G59_254		243
#define G59_254_MIDPOINT		244
#define TOGGLE_JOG_MPG_RELE		245
#define FORCE_REF_ALL_AXES		246
#define CV_FEED_TOGGLE			247
#define CV_FEED_OFF				248
#define CV_FEED_ON				249
#define DISABLE_MOVEMENT_X		250
#define DISABLE_MOVEMENT_Y		251
#define DISABLE_MOVEMENT_Z		252
#define DISABLE_MOVEMENT_A		253
#define DISABLE_MOVEMENT_B		254
#define DISABLE_MOVEMENT_C		255
#define MACHINE_COORDS_TOGGLE	256
#define ENGINE_OFFLINE			257
#define ENGINE_ONLINE			258
#define SEL_INC_JOG_X			259
#define SEL_INC_JOG_Y			260
#define SEL_INC_JOG_Z			261
#define SEL_INC_JOG_A			262
#define SEL_INC_JOG_B			263
#define SEL_INC_JOG_C			264
#define SEL_STEP_VALUE_1		265
#define SEL_STEP_VALUE_2		266
#define SEL_STEP_VALUE_3		267
#define SEL_STEP_VALUE_4		268
#define SEL_STEP_VALUE_5		269
#define SEL_STEP_VALUE_6		270
#define SEL_STEP_VALUE_7		271
#define SEL_STEP_VALUE_8		272
#define SEL_STEP_VALUE_9		273
#define SEL_STEP_VALUE_10		274
#define SET JOG_STEP			275		// duplicated by 205
#define SET_JOG_CONTINUOUS		276		// duplicated by 204
#define INC_FEEDRATE			277
#define DEC_FEEDRATE			278
#define RUN_REVERSE				279
#define LAST_USED_WIZARD		280
#define CYCLE_MPG2_AXIS			281
#define TOGGLE_MPG2_TAPER		282
#define TOGGLE_DUAL_MPG_FLAG	283
#define TOGGLE_MPG_SHUTTLE		284
#define RETURN_TO_PAUSED_STATE	285
#define REMEMBER_PAUSED_STATE	286
#define TOGGLE_RAPID_OVERRIDES	287
#define CROP_CURRENT_DWELL		288
#define SET_FORMULAS			289
#define INHIBIT_X_JOG			290
#define INHIBIT_Y_JOG			291
#define INHIBIT_Z_JOG			292
#define INHIBIT_A_JOG			293
#define INHIBIT_B_JOG			294
#define INHIBIT_C_JOG			295
#define DO_SCREW_CALIBRATION	296
#define UNCOND_CROP_DWELL		297
		// reserved				298
#define TOGGLE_BYPASS_FEED		299
#define TOGGLE_FRONT_TOOLPOST	300
#define OEM_SET_TRIGGER_MACRO	301
#define CYCLE_MPG_JOG_MODE		302
#define MPG_JOG_VELOCITY		303
#define MPG_JOG_VELOCITY_STEPS	304
#define MPG_JOG_SINGLE_EXACT	305
#define MPG_JOG_MULTI_EXACT		306
#define JOG_X_PLUS				307
#define JOG_X_MINUS				308
#define JOG_Y_PLUS				309
#define JOG_Y_MINUS				310
#define JOG_Z_PLUS				311
#define JOG_Z_MINUS				312
#define JOG_A_PLUS				313
#define JOG_A_MINUS				314
#define CALIBRATE_MPGS			315
#define SAVE_TOOL_TABLE			316
#define SAVE_WORK_OFFSET_TABLE	317
#define TOOLPATH_DRAG_ZOOM		318
#define TOOLPATH_DRAG_PAN		319
#define DISPLAY_WIZARD_SELECT	320
#define RUN_NEWFANGLED_WIZARD	321
#define EMERG_BAILOUT_TESTER	322
#define TOOGLE_SCRN_50_VISIBLE	323
#define TOUCH_X_TURN			324
#define SPINDLE_TORCH_VOLTS		325
#define TOUCH_Z_TURN			326
#define SELECT_MPG_JOG_MODE		327
		// unknown				328
#define JOG_B_PLUS				329
#define JOG_B_MINUS				330
#define JOG_C_PLUS				331
#define JOG_C_MINUS				332
#define DRO_DIST_TO_GO			333
#define X_JOG_OFF				334
#define Y_JOG_OFF				335
#define Z_JOG_OFF				336
#define A_JOG_OFF				337
#define B_JOG_OFF				338
#define C_JOG_OFF				339
#define TEMP_SOFTLIMIT_MIN		340
#define TEMP_SOFTLIMIT_MAX		341
		// undefined			342
		// reserved				343
		// reserved				344
		// reserved				345
		// reserved				346
		// reserved				347
#define MENU_BAR_OFF			348
#define MENU_BAR_ON				349
#define INC_SPINDLE_BY_VALUE	350
#define DEC_SPINDLE_BY_VALUE	351
#define JOG_X_A_PLUS_FOAM		352
#define JOG_X_A_MINUS_FOAM		353
#define JOG_Y_A_PLUS_FOAM		354
#define JOG_Y_A_MINUS_FOAM		355

#define CYCLE_START				1000
#define CYCLE_PAUSE				1001
#define GCODE_REWIND			1002
#define CYCLE_STOP				1003
#define CYCLE_SINGLE			1004
#define PAUSE					1005
#define EDIT_FILE				1006
#define ZERO_ALL				1007
#define ZERO_X					1008
#define ZERO_Y					1009
#define ZERO_Z					1010
#define ZERO_A					1011
#define ZERO_B					1012
#define ZERO_C					1013
#define FEEDRATE_RESET			1014
#define ESTIMATE_JOB			1015
#define RUN_FROM_HERE			1016
#define GOTO_Z_S				1017
#define COORD_SYSTEM			1018
		// undefined			1019
#define VERIFY_JOB				1020
#define MACH3_RESET				1021
#define REF_X					1022
#define REF_Y					1023
#define REF_Z					1024
#define REF_A					1025
#define REF_B					1026
#define REF_C					1027
#define JOYSTICK_TOGGLE			1028
#define SOFTLIMITS_TOGGLE		1029
#define RADIUS_TRACKING_TOGGLE	1030
#define JOG_TOGGLE				1031
