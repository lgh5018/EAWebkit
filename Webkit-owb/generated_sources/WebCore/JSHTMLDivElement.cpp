/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSHTMLDivElement.h"

#include <wtf/GetPtr.h>

#include "HTMLDivElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLDivElementTableValues[3] =
{
    { "align", (intptr_t)JSHTMLDivElement::AlignAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLDivElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLDivElementTable = { 7, JSHTMLDivElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLDivElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLDivElementConstructorTable = { 0, JSHTMLDivElementConstructorTableValues, 0 };

class JSHTMLDivElementConstructor : public DOMObject {
public:
    JSHTMLDivElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLDivElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLDivElementConstructor::s_info = { "HTMLDivElementConstructor", 0, &JSHTMLDivElementConstructorTable, 0 };

bool JSHTMLDivElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDivElementConstructor, DOMObject>(exec, &JSHTMLDivElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLDivElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLDivElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLDivElementPrototypeTable = { 0, JSHTMLDivElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLDivElementPrototype::s_info = { "HTMLDivElementPrototype", 0, &JSHTMLDivElementPrototypeTable, 0 };

JSObject* JSHTMLDivElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLDivElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLDivElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLDivElement::s_info = { "HTMLDivElement", &JSHTMLElement::s_info, &JSHTMLDivElementTable , 0 };

JSHTMLDivElement::JSHTMLDivElement(JSObject* prototype, HTMLDivElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLDivElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDivElement, Base>(exec, &JSHTMLDivElementTable, this, propertyName, slot);
}

JSValue* JSHTMLDivElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        HTMLDivElement* imp = static_cast<HTMLDivElement*>(impl());
        return jsString(exec, imp->align());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLDivElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLDivElement, Base>(exec, propertyName, value, &JSHTMLDivElementTable, this);
}

void JSHTMLDivElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case AlignAttrNum: {
        HTMLDivElement* imp = static_cast<HTMLDivElement*>(impl());
        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLDivElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLDivElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLDivElementConstructor>(exec, constructorIdentifier);
}


}
