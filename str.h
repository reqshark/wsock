/*
    Copyright (c) 2015 Martin Sustrik  All rights reserved.

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom
    the Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#ifndef WSOCK_STR_INCLUDED
#define WSOCK_STR_INCLUDED

#include <stddef.h>
#include <stdint.h>

struct wsock_str {
    union {
       char s[32];
       struct {
           uint8_t dummy;
           char *ptr;
       } p;
    };
};

void wsock_str_init(struct wsock_str *self, const char *s, size_t len);
void wsock_str_term(struct wsock_str *self);
const char *wsock_str_get(struct wsock_str *self);

size_t wsock_str_len(const char *s);
int wsock_str_eq(const char *s1, const char *s2);

#endif
