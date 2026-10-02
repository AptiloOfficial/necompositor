/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef NECO_GESTURES_H
#define NECO_GESTURES_H

struct seat;

void gestures_init(struct seat *seat);
void gestures_finish(struct seat *seat);

#endif /* NECO_GESTURES_H */
