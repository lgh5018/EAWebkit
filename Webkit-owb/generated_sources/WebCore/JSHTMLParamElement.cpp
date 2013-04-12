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

#include "JSHTMLParamElement.h"

#include <wtf/GetPtr.h>

#include "HTMLParamElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLParamElementTableValues[6] =
{
    { "name", (intptr_t)JSHTMLParamElement::NameAttrNum, DontDelete, 0 },
    { "type", (intptr_t)JSHTMLParamElement::TypeAttrNum, DontDelete, 0 },
    { "value", (intptr_t)JSHTMLParamElement::ValueAttrNum, DontDelete, 0 },
    { "valueType", (intptr_t)JSHTMLParamElement::ValueTypeAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLParamElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLParamElementTable = { 127, JSHTMLParamElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLParamElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLParamElementConstructorTable = { 0, JSHTMLParamElementConstructorTableValues, 0 };

class JSHTMLParamElementConstructor : public DOMObject {
public:
    JSHTMLParamElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLParamElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLParamElementConstructor::s_info = { "HTMLParamElementConstructor", 0, &JSHTMLParamElementConstructorTable, 0 };

bool JSHTMLParamElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLParamElementConstructor, DOMObject>(exec, &JSHTMLParamElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLParamElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLParamElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLParamElementPrototypeTable = { 0, JSHTMLParamElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLParamElementPrototype::s_info = { "HTMLParamElementPrototype", 0, &JSHTMLParamElementPrototypeTable, 0 };

JSObject* JSHTMLParamElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLParamElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLParamElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLParamElement::s_info = { "HTMLParamElement", &JSHTMLElement::s_info, &JSHTMLParamElementTable , 0 };

JSHTMLParamElement::JSHTMLParamElement(JSObject* prototype, HTMLParamElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLParamElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLParamElement, Base>(exec, &JSHTMLParamElementTable, this, propertyName, slot);
}

JSValue* JSHTMLParamElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NameAttrNum: {
        HTMLParamElement* imp = static_cast<HTMLParamElement*>(impl());
        return jsString(exec, imp->name());
    }
    case TypeAttrNum: {
        HTMLParamElement* imp = static_cast<HTMLParamElement*>(impl());
        return jsString(exec, imp->type());
    }
    case ValueAttrNum: {
        HTMLParamElement* imp = static_cast<HTMLParamElement*>(impl());
        return jsString(exec, imp->value());
    }
    case ValueTypeAttrNum: {
        HTMLParamElement* imp = static_cast<HTMLParamElement*>(impl());
        return jsString(exec, imp->valueType());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLParamElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLParamElement, Base>(exec, propertyName, value, &JSHTMLParamElementTable, this);
}

void JSHTMLParamElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case NameAttrNum: {
        HTMLParamElement* imp = static_cast<HTMLParamElement*>(impl());
        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case TypeAttrNum: {
        HTMLParamElement* imp = static_cast<HTMLParamElement*>(impl());
        imp->setType(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ValueAttrNum: {
        HTMLParamElement* imp = static_cast<HTMLParamElement*>(impl());
        imp->setValue(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ValueTypeAttrNum: {
        HTMLParamElement* imp = static_cast<HTMLParamElement*>(impl());
        imp->setValueType(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLParamElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLParamElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLParamElementConstructor>(exec, constructorIdentifier);
}


}