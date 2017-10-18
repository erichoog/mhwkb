/*
 * template_functions.h
 * https://github.com/dafky2000/simplectemplate
 *
 * Provides HTML template functionality for https://github.com/andy5995/mhwkb
 *
 * Copyright 2017 Andy Alt <andy400-dev@yahoo.com>
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
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#ifndef TEMPLATE_FUNCTIONS_H
#define TEMPLATE_FUNCTIONS_H

#include "mhwkb.h"
#include "gen_functions.h"

/**
 * Read the contents of a file
 * filename: Relative path of the file to read
 * returns: null-terminated string of the file contents
 */
char* read_file_contents (const char *filename);

/**
 * Performs a str_replace using the correct formatting with just key/value pair
 * template: the template contents with placeholders to be replaced
 * key: the placeholder identifier
 * value: value to replace with
 * returns: Replaced template
 */
char *set_template_var (char* template, const char* key, const char* value);

/**
 * Render a template with arrays of key/value pairs
 * filename: name of file to open as the template
 * len: number of key/value pairs
 * keys: array of const char* keys to replace
 * values: array of const char* values to replace into template
 * returns: rendered template
 */
char *render_template (const char* filename, int len, const char *keys[], const char *values[]);

/**
 * Replace all occurances of rep
 * orig: text to perfom search and replace on
 * rep: text to search for
 * with: text to replace with
 * returns: replaced text
 */
char *str_replace (char *orig, char *rep, const char *with);

#endif
