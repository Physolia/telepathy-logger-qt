/*
 * This file is part of TelepathyQt4Logger
 *
 * Copyright (C) 2011 Collabora Ltd. <http://www.collabora.co.uk/>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef _TelepathyQt4Logger_pending_entities_h_HEADER_GUARD_
#define _TelepathyQt4Logger_pending_entities_h_HEADER_GUARD_

#include <TelepathyQt4Logger/LogManager>
#include <TelepathyQt4Logger/PendingOperation>
#include <TelepathyQt4Logger/Types>

namespace Tpl
{

class PendingEntities: public Tpl::PendingOperation
{
    Q_OBJECT
    Q_DISABLE_COPY(PendingEntities);

public:
    ~PendingEntities();

    virtual void start();
    EntityPtrList entities() const;

private:
    friend class LogManager;

    PendingEntities(const LogManagerPtr & manager, const Tp::AccountPtr & account);

    struct Private;
    friend struct Private;
    Private *mPriv;
};

} // Tpl

#endif
