/****************************************************************************
**
** Copyright (C) 2017 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com, author Marc Mutz <marc.mutz@kdab.com>
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QSTRINGALGORITHMS_H
#define QSTRINGALGORITHMS_H

#include <QtCore/qnamespace.h>

#if 0
#pragma qt_class(QStringAlgorithms)
#endif

QT_BEGIN_NAMESPACE

class QByteArray;
class QLatin1String;
class QStringView;
template <typename T> class QVector;

Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION qssize_t qustrlen(const ushort *str) Q_DECL_NOTHROW;

Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION int qCompareStrings(QStringView   lhs, QStringView   rhs, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION int qCompareStrings(QStringView   lhs, QLatin1String rhs, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION int qCompareStrings(QLatin1String lhs, QStringView   rhs, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION int qCompareStrings(QLatin1String lhs, QLatin1String rhs, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;


Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION bool qStartsWith(QStringView   haystack, QStringView   needle, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION bool qStartsWith(QStringView   haystack, QLatin1String needle, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION bool qStartsWith(QLatin1String haystack, QStringView   needle, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION bool qStartsWith(QLatin1String haystack, QLatin1String needle, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;

Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION bool qEndsWith(QStringView   haystack, QStringView   needle, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION bool qEndsWith(QStringView   haystack, QLatin1String needle, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION bool qEndsWith(QLatin1String haystack, QStringView   needle, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION bool qEndsWith(QLatin1String haystack, QLatin1String needle, Qt::CaseSensitivity cs = Qt::CaseSensitive) Q_DECL_NOTHROW;

Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION QStringView   qTrimmed(QStringView   s) Q_DECL_NOTHROW;
Q_REQUIRED_RESULT Q_CORE_EXPORT Q_DECL_PURE_FUNCTION QLatin1String qTrimmed(QLatin1String s) Q_DECL_NOTHROW;

Q_REQUIRED_RESULT Q_CORE_EXPORT QByteArray qConvertToLatin1(QStringView str);
Q_REQUIRED_RESULT Q_CORE_EXPORT QByteArray qConvertToUtf8(QStringView str);
Q_REQUIRED_RESULT Q_CORE_EXPORT QByteArray qConvertToLocal8Bit(QStringView str);
Q_REQUIRED_RESULT Q_CORE_EXPORT QVector<uint> qConvertToUcs4(QStringView str);

QT_END_NAMESPACE

#endif // QSTRINGALGORTIHMS_H
