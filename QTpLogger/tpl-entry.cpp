/*
 * Copyright (C) 2011 Stefano Sanfilippo <stefano.k.sanfilippo@gmail.com>
 *
 * @author Stefano Sanfilippo <stefano.k.sanfilippo@gmail.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "tpl-entry.h"
#include "tpl-entry-private.h"

using namespace QTpLogger;

Entry::Entry() : d(0)
{
}

Entry::~Entry()
{
    // Delete data, if valid...
    if (this->d) {
        delete this->d;
    }
}

QString Entry::accountpath() const
{
    return this->d->accountpath();
}

QString Entry::channel() const
{
    return this->d->channel();
}

QString Entry::chatid() const
{
    return this->d->chatid();
}

QString Entry::logid() const
{
    return this->d->logid();
}

Entry::Direction Entry::direction() const
{
    return this->d->direction();
}

Entity *Entry::sender() const
{
    // TODO update to tp-logger 0.2
    //return this->d->sender();
    return 0;
}

Entity *Entry::receiver() const
{
    // TODO update to tp-logger 0.2
    //return this->d->receiver();
    return 0;
}

long Entry::timestamp() const
{
    return this->d->timestamp();
}
