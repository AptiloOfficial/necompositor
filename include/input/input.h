/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef NECO_INPUT_H
#define NECO_INPUT_H

struct seat;

void input_handlers_init(struct seat *seat);
void input_handlers_finish(struct seat *seat);

#endif /* NECO_INPUT_H */
