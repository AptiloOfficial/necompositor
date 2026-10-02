/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef NECO_DIR_H
#define NECO_DIR_H

#include <wayland-server-core.h>

struct path {
	char *string;
	struct wl_list link;
};

struct wl_list *paths_get_prev(struct wl_list *elm);
struct wl_list *paths_get_next(struct wl_list *elm);

void paths_config_create(struct wl_list *paths, const char *filename);
void paths_theme_create(struct wl_list *paths, const char *theme_name,
	const char *filename);
void paths_destroy(struct wl_list *paths);

#endif /* NECO_DIR_H */
