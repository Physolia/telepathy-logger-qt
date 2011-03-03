#ifndef __ENTRY_TEXT___
#define __ENTRY_TEXT___

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

#include <tpl-entry-private.h>

// TODO port to tp-logger 0.2
//#include <telepathy-logger/entry-text.h>

#include <QtCore/QString>

namespace QTpLogger
{

// TODO port to tp-logger 0.2
class TplEntryText;

class EntryTextPrivate : public EntryPrivate
{
public:
    EntryTextPrivate(TplEntryText *tpmessage);

    QString message() const;
    uint type() const;
    int pendingID() const;

    enum PendingStatus { notpending = -1 };

private:
    QString _message;
    uint _type;
    int _pendingID;
};

} //namespace

#endif // __ENTRY_TEXT___
