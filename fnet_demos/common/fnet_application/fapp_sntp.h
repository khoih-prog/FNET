/**************************************************************************
*
* Copyright 2017 by Andrey Butok. FNET Community.
*
***************************************************************************
*
*  Licensed under the Apache License, Version 2.0 (the "License"); you may
*  not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*  http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
*  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
**********************************************************************/
/*!
* @brief FNET Shell Demo (SNTP Client).
*
***************************************************************************/

#ifndef _FAPP_SNTP_H_

#define _FAPP_SNTP_H_

#include "fapp_config.h"

#if FAPP_CFG_SNTP_CMD && FNET_CFG_SNTP

#if defined(__cplusplus)
extern "C" {
#endif

void fapp_sntp_cmd( fnet_shell_desc_t desc, fnet_index_t argc, fnet_char_t **argv );

#if defined(__cplusplus)
}
#endif

#endif

#endif