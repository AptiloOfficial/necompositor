/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef NECO_TOUCH_H
#define NECO_TOUCH_H

struct seat;

void touch_init(struct seat *seat);
void touch_finish(struct seat *seat);

#endif /* NECO_TOUCH_H */
