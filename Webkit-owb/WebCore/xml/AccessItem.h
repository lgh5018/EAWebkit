/*
 * Copyright (C) 2008 Apple Inc. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#ifndef AccessItem_h
#define AccessItem_h

#include <wtf/FastAllocBase.h>
#include "PlatformString.h"
#include "SecurityOrigin.h"
#include <wtf/RefPtr.h>
#include <wtf/Vector.h>

namespace WebCore {

    class AccessItem/*: public WTF::FastAllocBase*/ {
    public:
        AccessItem(const String&);

        bool matches(const SecurityOrigin*) const;

        bool isValid() const { return m_valid; }

#ifndef NDEBUG
        void show();
#endif

    private:
        void parseAccessItem(const String&);

        // FIXME: Remove this when parseAccessItem is implemented.
        RefPtr<SecurityOrigin> m_origin;

        bool m_valid;
        bool m_wildcard;
        String m_scheme;
        bool m_domainWildcard;
        Vector<String, 4> m_subdomains;
        bool m_portWildcard;
        unsigned short m_port;

#ifndef NDEBUG
        String m_string;
#endif
    };

} // namespace WebCore

#endif // AccessItem_h
