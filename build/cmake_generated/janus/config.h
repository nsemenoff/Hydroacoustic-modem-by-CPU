//*************************************************************************
// JANUS is a simple, robust, open standard signalling method for         *
// underwater communications. See <http://www.januswiki.org> for details. *
//*************************************************************************
// Example software implementations provided by STO CMRE are subject to   *
// Copyright (C) 2008-2018 STO Centre for Maritime Research and           *
// Experimentation (CMRE)                                                 *
//                                                                        *
// This is free software: you can redistribute it and/or modify it        *
// under the terms of the GNU General Public License version 3 as         *
// published by the Free Software Foundation.                             *
//                                                                        *
// This program is distributed in the hope that it will be useful, but    *
// WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     *
// FOR A PARTICULAR PURPOSE. See the GNU General Public License for       *
// more details.                                                          *
//                                                                        *
// You should have received a copy of the GNU General Public License      *
// along with this program. If not, see <http://www.gnu.org/licenses/>.   *
//*************************************************************************
// Author: Ricardo Martins                                                *
//*************************************************************************
// Automatically generated                                                *
//*************************************************************************

#ifndef JANUS_CONFIG_H_INCLUDED_
#define JANUS_CONFIG_H_INCLUDED_

//! Major version of the reference implementation.
#define JANUS_RI_MAJ_VERSION 3
//! Minor version of the reference implementation.
#define JANUS_RI_MIN_VERSION 0
//! Revision/patch level of the reference implementation.
#define JANUS_RI_REV_VERSION 5
//! Revision/patch level of the reference implementation.
#define JANUS_SVN_REV_STR    "Unversioned directory"

//! Enabled if libao is present.
/* #undef JANUS_WITH_LIBAO */

//! Enabled if ALSA is present.
#define JANUS_WITH_ALSA

//! Enabled if WMM is present.
/* #undef JANUS_WITH_WMM */

//! Enabled if SNDFILE is present.
/* #undef JANUS_WITH_SNDFILE */

//! Enabled if PULSE is present.
#define JANUS_WITH_PULSE

//! Enabled if FLAC is present.
#define JANUS_WITH_FLAC

//! Enabled if JANUS_REAL_SINGLE is defined.
/* #undef JANUS_REAL_SINGLE */

//! Enabled if JANUS_FFTW_SINGLE is defined.
/* #undef JANUS_FFTW_SINGLE */

#endif
