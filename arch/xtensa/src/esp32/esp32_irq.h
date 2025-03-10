/****************************************************************************
 * arch/xtensa/src/esp32/esp32_irq.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_XTENSA_SRC_ESP32_ESP32_IRQ_H
#define __ARCH_XTENSA_SRC_ESP32_ESP32_IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#ifndef __ASSEMBLY__

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Functions Prototypes
 ****************************************************************************/

/****************************************************************************
 * Name:  esp32_mapirq
 *
 * Description:
 *   Map the given IRQ to the CPU and allocated CPU interrupt.
 *
 * Input Parameters:
 *   irq      - IRQ number (see esp32/include/irq.h)
 *   cpu      - The CPU receiving the interrupt 0=PRO CPU 1=APP CPU
 *   cpuint   - The allocated CPU interrupt.
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void esp32_mapirq(int irq, int cpu, int cpuint);

/****************************************************************************
 * Name:  esp32_unmapirq
 *
 * Description:
 *   Unmap the given IRQ.
 *
 * Input Parameters:
 *   irq      - IRQ number (see esp32/include/irq.h)
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void esp32_unmapirq(int irq);

#undef EXTERN
#if defined(__cplusplus)
}
#endif

#endif /* __ASSEMBLY__ */
#endif /* __ARCH_XTENSA_SRC_ESP32_ESP32_IRQ_H */
