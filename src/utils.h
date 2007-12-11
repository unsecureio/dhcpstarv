/*
 * utils.h: utility functions.
 *
 * Copyright (C) 2007 Dmitry Davletbaev <ddo@mgn.ru>
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef UTILS_FUNCTIONS
#define UTILS_FUNCTIONS

void init_addr(struct sockaddr_in* addr, const char* ip, unsigned short port);
unsigned int strip_to_int(const char* ip);
const char* mac_to_str(const unsigned char* mac);
const char* get_ip_str(unsigned int ip);

#endif /* UTILS_FUNCTIONS */

