/**
 * @file
 * @brief Functions defined in the Lua bindings but used elsewhere.
**/
// TODO: Move these where they belong.

#ifndef L_DEFS_H
#define L_DEFS_H

string dgn_set_default_depth(const string &s);
void dgn_reset_default_depth();
bool in_show_bounds(const coord_def &c);

#endif
