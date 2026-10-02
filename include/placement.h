/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef NECO_PLACEMENT_H
#define NECO_PLACEMENT_H

#include <stdbool.h>
#include <wlr/util/box.h>
#include "view.h"

bool placement_find_best(struct view *view, struct wlr_box *geometry);

#endif /* NECO_PLACEMENT_H */
