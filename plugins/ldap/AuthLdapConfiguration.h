/*
 * LdapConfiguration.h - LDAP-auth-specific configuration values
 *
 * Copyright (c) 2020-2022 Tobias Junghans <tobydox@veyon.io>
 *
 * This file is part of Veyon - https://veyon.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#pragma once

#include "Configuration/Proxy.h"

#define FOREACH_AUTH_LDAP_CONFIG_PROPERTY(OP) \
    OP( AuthLdapConfiguration, m_configuration, QString, usernameBindDnMapping, setUsernameBindMapping, "UsernameBindDnMapping", "LDAP", QString(), Configuration::Property::Flag::Standard )	\

// clazy:excludeall=missing-qobject-macro

DECLARE_CONFIG_PROXY(AuthLdapConfiguration, FOREACH_AUTH_LDAP_CONFIG_PROPERTY)
