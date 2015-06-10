/**
 * @file tls_cache.h
 * @brief Session cache management
 *
 * @section License
 *
 * Copyright (C) 2010-2015 Oryx Embedded SARL. All rights reserved.
 *
 * This file is part of CycloneSSL Open.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @author Oryx Embedded SARL (www.oryx-embedded.com)
 * @version 1.6.0
 **/

#ifndef _TLS_CACHE_H
#define _TLS_CACHE_H

//Dependencies
#include "tls.h"

//Session cache management
TlsCache *tlsInitCache(uint_t size);
TlsSession *tlsFindCache(TlsCache *cache, const uint8_t *id, size_t length);
error_t tlsSaveToCache(TlsContext *context);
error_t tlsRemoveFromCache(TlsContext *context);
void tlsFreeCache(TlsCache *cache);

#endif
