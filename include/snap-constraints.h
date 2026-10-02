/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef NECO_SNAP_CONSTRAINTS_H
#define NECO_SNAP_CONSTRAINTS_H

#include "common/border.h"
#include "view.h"

struct wlr_box;

void snap_constraints_set(struct view *view,
	enum view_edge direction, struct wlr_box geom);

void snap_constraints_invalidate(struct view *view);

void snap_constraints_update(struct view *view);

struct wlr_box snap_constraints_effective(struct view *view,
	enum view_edge direction);

#endif /* NECO_SNAP_CONSTRAINTS_H */
