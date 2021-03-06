#pragma once
/*-------------------------------------------------------------------------------------------
 * qblocks - fast, easily-accessible, fully-decentralized data from blockchains
 * copyright (c) 2018 Great Hill Corporation (http://greathill.com)
 *
 * This program is free software: you may redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version. This program is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details. You should have received a copy of the GNU General
 * Public License along with this program. If not, see http://www.gnu.org/licenses/.
 *-------------------------------------------------------------------------------------------*/
/*
 * This file was generated with makeClass. Edit only those parts of the code inside
 * of 'EXISTING_CODE' tags.
 */
#include <vector>
#include <map>
#include "logentry.h"

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
class QSingleTransactEvent : public CLogEntry {
public:
    address_t owner;
    biguint_t value;
    address_t to;
    string_q data;

public:
    QSingleTransactEvent(void);
    QSingleTransactEvent(const QSingleTransactEvent& si);
    virtual ~QSingleTransactEvent(void);
    QSingleTransactEvent& operator=(const QSingleTransactEvent& si);

    DECLARE_NODE(QSingleTransactEvent);

    // EXISTING_CODE
    // EXISTING_CODE
    bool operator==(const QSingleTransactEvent& item) const;
    bool operator!=(const QSingleTransactEvent& item) const { return !operator==(item); }
    friend bool operator<(const QSingleTransactEvent& v1, const QSingleTransactEvent& v2);
    friend ostream& operator<<(ostream& os, const QSingleTransactEvent& item);

protected:
    void clear(void);
    void initialize(void);
    void duplicate(const QSingleTransactEvent& si);
    bool readBackLevel(CArchive& archive) override;

    // EXISTING_CODE
    // EXISTING_CODE
};

//--------------------------------------------------------------------------
inline QSingleTransactEvent::QSingleTransactEvent(void) {
    initialize();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline QSingleTransactEvent::QSingleTransactEvent(const QSingleTransactEvent& si) {
    // EXISTING_CODE
    // EXISTING_CODE
    duplicate(si);
}

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
inline QSingleTransactEvent::~QSingleTransactEvent(void) {
    clear();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QSingleTransactEvent::clear(void) {
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QSingleTransactEvent::initialize(void) {
    CLogEntry::initialize();

    owner = "";
    value = 0;
    to = "";
    data = "";

    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QSingleTransactEvent::duplicate(const QSingleTransactEvent& si) {
    clear();
    CLogEntry::duplicate(si);

    owner = si.owner;
    value = si.value;
    to = si.to;
    data = si.data;

    // EXISTING_CODE
    // EXISTING_CODE
    finishParse();
}

//--------------------------------------------------------------------------
inline QSingleTransactEvent& QSingleTransactEvent::operator=(const QSingleTransactEvent& si) {
    duplicate(si);
    // EXISTING_CODE
    // EXISTING_CODE
    return *this;
}

//-------------------------------------------------------------------------
inline bool QSingleTransactEvent::operator==(const QSingleTransactEvent& item) const {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default equal operator in class definition, assume none are equal (so find fails)
    return false;
}

//-------------------------------------------------------------------------
inline bool operator<(const QSingleTransactEvent& v1, const QSingleTransactEvent& v2) {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default sort defined in class definition, assume already sorted, preserve ordering
    return true;
}

//---------------------------------------------------------------------------
typedef vector<QSingleTransactEvent> QSingleTransactEventArray;
extern CArchive& operator>>(CArchive& archive, QSingleTransactEventArray& array);
extern CArchive& operator<<(CArchive& archive, const QSingleTransactEventArray& array);

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

