/* ttyio.h
 * Copyright (C) 1998, 1999, 2000, 2001, 2003 Free Software Foundation, Inc.
 *
 * This file is part of GNUPG.
 *
 * GNUPG is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * GNUPG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
#ifndef GNUPG_COMMON_TTYIO_H
#define GNUPG_COMMON_TTYIO_H

const char *tty_get_ttyname (void);
int tty_batchmode (int onoff);
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 5 )
void tty_printf (const char *fmt, ... )
                 __attribute__ ((format (printf,1,2)));
void tty_fprintf (FILE *fp, const char *fmt, ... )
                 __attribute__ ((format (printf,2,3)));
#else
void tty_printf (const char *fmt, ... );
void tty_fprintf (FILE *fp, const char *fmt, ... );
#endif
void tty_print_string (const unsigned char *p, size_t n);
void tty_print_utf8_string (const unsigned char *p, size_t n);
void tty_print_utf8_string2 (const unsigned char *p, size_t n, size_t max_n);
char *tty_get (const char *prompt);
char *tty_get_hidden (const char *prompt);
void tty_kill_prompt (void);
int tty_get_answer_is_yes (const char *prompt);
int tty_no_terminal (int onoff);


#endif /*GNUPG_COMMON_TTYIO_H*/
