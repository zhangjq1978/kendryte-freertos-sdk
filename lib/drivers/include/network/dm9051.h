/* Copyright 2018 Canaan Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _DRIVERS_DM9051_H
#define _DRIVERS_DM9051_H

#include <osdefs.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

handle_t dm9051_driver_install(handle_t spi_handle, uint32_t spi_cs_mask, const mac_address_t *mac_address);

#ifdef __cplusplus
}
#endif

#endif /* _DRIVERS_DM9051_H */