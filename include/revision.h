/* Copyright (c) Citrix Systems Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms,
 * with or without modification, are permitted provided
 * that the following conditions are met:
 *
 * *   Redistributions of source code must retain the above
 *     copyright notice, this list of conditions and the
 *     following disclaimer.
 * *   Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the
 *     following disclaimer in the documentation and/or other
 *     materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 * CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _REVISION_H
#define _REVISION_H

// Key:
// C  - XENBUS_CACHE_INTERFACE
// V  - XENVIF_VIF_INTERFACE
// ST - XENBUS_STORE_INTERFACE
// SU - XENBUS_SUSPEND_INTERFACE

//                    REVISION   C   V   ST  SU
#define DEFINE_REVISION_TABLE                       \
    DEFINE_REVISION(0x08000002,  1,  2,  0,  0),    \
    DEFINE_REVISION(0x08000003,  1,  3,  0,  0),    \
    DEFINE_REVISION(0x08000004,  1,  3,  2,  1),    \
    DEFINE_REVISION(0x08000006,  1,  4,  2,  1),    \
    DEFINE_REVISION(0x08000009,  1,  5,  2,  1),    \
    DEFINE_REVISION(0x0800000B,  1,  6,  2,  1),    \
    DEFINE_REVISION(0x0800000C,  1,  7,  2,  1),    \
    DEFINE_REVISION(0x0800000D,  1,  8,  2,  1)

// Revision 0x08000005, 0x08000007, 0x08000008 and 0x0800000A are already
// in use in the staging-8.1 branch.

#endif  // _REVISION_H
