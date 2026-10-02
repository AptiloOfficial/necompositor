/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef NECO_FILE_HELPERS_H
#define NECO_FILE_HELPERS_H
#include <stdbool.h>

/**
 * file_exists() - Test if file exists.
 * @filename: Name of file to test.
 */
bool file_exists(const char *filename);

#endif /* NECO_FILE_HELPERS_H */
