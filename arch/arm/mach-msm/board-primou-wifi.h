/* include/linux/wlan_plat.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __ARCH_ARM_MACH_MSM_BOARD_PRIMOU_WIFI_H
#define __ARCH_ARM_MACH_MSM_BOARD_PRIMOU_WIFI_H

#define WMPA_NUMBER_OF_SECTIONS	3
#define WMPA_NUMBER_OF_BUFFERS	160
#define WMPA_SECTION_HEADER	24
#define WMPA_SECTION_SIZE_0	(WMPA_NUMBER_OF_BUFFERS * 64)
#define WMPA_SECTION_SIZE_1	(WMPA_NUMBER_OF_BUFFERS * 256)
#define WMPA_SECTION_SIZE_2	(WMPA_NUMBER_OF_BUFFERS * 2048)

struct wifi_platform_data {
	int (*set_power)(int val);
	int (*set_reset)(int val);
	int (*set_carddetect)(int val);
	void *(*mem_prealloc)(int section, unsigned long size);
	int (*get_mac_addr)(unsigned char *buf);
	void *(*get_country_code)(char *ccode);
	int dot11n_enable;
};

#endif
