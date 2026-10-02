/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef NECO_TABLET_TOOL_CONFIG_H
#define NECO_TABLET_TOOL_CONFIG_H

#include <stdint.h>

enum motion {
	LAB_TABLET_MOTION_ABSOLUTE = 0,
	LAB_TABLET_MOTION_RELATIVE,
};

enum motion tablet_parse_motion(const char *name);

#endif /* NECO_TABLET_TOOL_CONFIG_H */
