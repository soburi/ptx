/*
 * Sharp VA4M6JC2103 - Earthsoft PT3 ISDB-T tuner MaxLinear CMOS Hybrid TV MxL301RF
 *
 * Copyright (C) 2014 Budi Rachmanto, AreMa Inc. <info@are.ma>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MXL301RF_H__
#define __MXL301RF_H__

#ifndef pr_fmt
 #define pr_fmt(fmt) KBUILD_MODNAME " " fmt
#endif
#include "dvb_frontend.h"

#if IS_ENABLED(CONFIG_MEDIA_TUNER_MXL301RF)
extern int mxl301rf_attach(struct dvb_frontend *fe, u8 idx, u8 addr_tuner);
#else
static inline int mxl301rf_attach(struct dvb_frontend *fe, u8 idx, u8 addr_tuner)
{
	pr_warn("%s: driver disabled by Kconfig\n", __func__);
	return 0;
}
#endif

#endif

