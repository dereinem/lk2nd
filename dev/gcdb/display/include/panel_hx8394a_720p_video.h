/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_HX8394A_720P_VIDEO_H_

#define _PANEL_HX8394A_720P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config hx8394a_720p_video_panel_data = {
  "qcom,mdss_dsi_hx8394a_720p_video", "dsi:0:", "qcom,mdss-dsi-panel",
  10, 0, "DISPLAY_1", 0, 424000000, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution hx8394a_720p_video_panel_res = {
  720, 1280, 79, 59, 60, 0, 7, 10, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info hx8394a_720p_video_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char hx8394a_720p_video_on_cmd0[] = {
0x04, 0x00, 0x39, 0xC0,
0xb9, 0xff, 0x83, 0x94,
 };


static char hx8394a_720p_video_on_cmd1[] = {
0x05, 0x00, 0x39, 0xC0,
0xc7, 0x00, 0x10, 0x00,
0x10, 0xFF, 0xFF, 0xFF,  };


static char hx8394a_720p_video_on_cmd2[] = {
0x02, 0x00, 0x39, 0xC0,
0xbc, 0x07, 0xFF, 0xFF,  };


static char hx8394a_720p_video_on_cmd3[] = {
0x02, 0x00, 0x39, 0xC0,
0xba, 0x13, 0xFF, 0xFF,  };


static char hx8394a_720p_video_on_cmd4[] = {
0x10, 0x00, 0x39, 0xC0,
0xb1, 0x01, 0x00, 0x07,
0x83, 0x01, 0x12, 0x0f,
0x32, 0x38, 0x29, 0x29,
0x50, 0x02, 0x00, 0x00,
 };


static char hx8394a_720p_video_on_cmd5[] = {
0x07, 0x00, 0x39, 0xC0,
0xb2, 0x00, 0xc8, 0x09,
0x05, 0x00, 0x71, 0xFF,  };


static char hx8394a_720p_video_on_cmd6[] = {
0x02, 0x00, 0x39, 0xC0,
0xcc, 0x05, 0xFF, 0xFF,  };


static char hx8394a_720p_video_on_cmd7[] = {
0x00, 0x00, 0x05, 0x80 };


static char hx8394a_720p_video_on_cmd8[] = {
0x35, 0x00, 0x39, 0xC0,
0xd5, 0x00, 0x00, 0x00,
0x00, 0x0a, 0x00, 0x01,
0x00, 0x00, 0x00, 0x33,
0x00, 0x23, 0x45, 0x67,
0x01, 0x01, 0x23, 0x88,
0x88, 0x88, 0x88, 0x88,
0x88, 0x88, 0x99, 0x99,
0x99, 0x88, 0x88, 0x99,
0x88, 0x54, 0x32, 0x10,
0x76, 0x32, 0x10, 0x88,
0x88, 0x88, 0x88, 0x88,
0x88, 0x88, 0x99, 0x99,
0x99, 0x88, 0x88, 0x88,
0x99, 0xFF, 0xFF, 0xFF,  };


static char hx8394a_720p_video_on_cmd9[] = {
0x17, 0x00, 0x39, 0xC0,
0xb4, 0x80, 0x08, 0x32,
0x10, 0x00, 0x32, 0x15,
0x08, 0x32, 0x12, 0x20,
0x33, 0x05, 0x4c, 0x05,
0x37, 0x05, 0x3f, 0x1e,
0x5f, 0x5f, 0x06, 0xFF,  };


static char hx8394a_720p_video_on_cmd10[] = {
0x02, 0x00, 0x39, 0xC0,
0xb6, 0x00, 0xFF, 0xFF,  };


static char hx8394a_720p_video_on_cmd11[] = {
0x23, 0x00, 0x39, 0xC0,
0xe0, 0x01, 0x0b, 0x10,
0x25, 0x35, 0x3f, 0x15,
0x36, 0x04, 0x09, 0x0e,
0x10, 0x13, 0x10, 0x14,
0x16, 0x1b, 0x01, 0x0b,
0x10, 0x25, 0x35, 0x3f,
0x15, 0x36, 0x04, 0x09,
0x0e, 0x10, 0x13, 0x10,
0x14, 0x16, 0x1b, 0xFF,  };


static char hx8394a_720p_video_on_cmd12[] = {
0x00, 0x00, 0x05, 0x80 };


static char hx8394a_720p_video_on_cmd13[] = {
0x04, 0x00, 0x39, 0xC0,
0xbf, 0x06, 0x00, 0x10,
 };


static char hx8394a_720p_video_on_cmd14[] = {
0x11, 0x00, 0x05, 0x80 };


static char hx8394a_720p_video_on_cmd15[] = {
0x29, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd hx8394a_720p_video_on_command[] = {
{ 0x8 , hx8394a_720p_video_on_cmd0},
{ 0xc , hx8394a_720p_video_on_cmd1},
{ 0x8 , hx8394a_720p_video_on_cmd2},
{ 0x8 , hx8394a_720p_video_on_cmd3},
{ 0x14 , hx8394a_720p_video_on_cmd4},
{ 0xc , hx8394a_720p_video_on_cmd5},
{ 0x8 , hx8394a_720p_video_on_cmd6},
{ 0x4 , hx8394a_720p_video_on_cmd7},
{ 0x3c , hx8394a_720p_video_on_cmd8},
{ 0x1c , hx8394a_720p_video_on_cmd9},
{ 0x8 , hx8394a_720p_video_on_cmd10},
{ 0x28 , hx8394a_720p_video_on_cmd11},
{ 0x4 , hx8394a_720p_video_on_cmd12},
{ 0x8 , hx8394a_720p_video_on_cmd13},
{ 0x4 , hx8394a_720p_video_on_cmd14},
{ 0x4 , hx8394a_720p_video_on_cmd15}
};
#define HX8394A_720P_VIDEO_ON_COMMAND 16


static char hx8394a_720p_videooff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char hx8394a_720p_videooff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd hx8394a_720p_video_off_command[] = {
{ 0x4 , hx8394a_720p_videooff_cmd0},
{ 0x4 , hx8394a_720p_videooff_cmd1}
};
#define HX8394A_720P_VIDEO_OFF_COMMAND 2


static struct command_state hx8394a_720p_video_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info hx8394a_720p_video_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info hx8394a_720p_video_video_panel = {
  1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration hx8394a_720p_video_lane_config = {
  4, 0, 1, 1, 1, 1
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
const uint32_t hx8394a_720p_video_timings[] = {
  0x8d, 0x24, 0x19, 0x00, 0x34, 0x34, 0x1d, 0x26, 0x2a, 0x03, 0x04, 0x00
};



static struct mipi_dsi_cmd hx8394a_720p_video_rotation[] = {

};
#define HX8394A_720P_VIDEO_ROTATION 0


static struct panel_timing hx8394a_720p_video_timing_info = {
  0, 4, 0x1f, 0x2d
};

static struct panel_reset_sequence hx8394a_720p_video_panel_reset_seq = {
{ 1, 0, 1, }, { 20, 20, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight hx8394a_720p_video_backlight = {
  1, 1, 4095, 100, 1, "bl_ctrl_wled"
};

#define HX8394A_720P_VIDEO_SIGNATURE 0xa0087

#endif /*_HX8394A_720P_VIDEO_H_*/
