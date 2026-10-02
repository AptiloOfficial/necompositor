/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Read file into memory
 *
 * Copyright Johan Malm 2020
 */

#ifndef NECO_GRAB_FILE_H
#define NECO_GRAB_FILE_H

#include "common/buf.h"

/**
 * grab_file - read file into memory buffer
 * @filename: file to read
 * Free returned buffer with buf_reset().
 */
struct buf grab_file(const char *filename);

#endif /* NECO_GRAB_FILE_H */
