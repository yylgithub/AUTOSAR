/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 *
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with
 * the terms contained in the written license agreement between you and ArcCore,
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as
 * published by the Free Software Foundation and appearing in the file
 * LICENSE.GPL included in the packaging of this file or here
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

#ifndef DLTCOM_UART_H_
#define DLTCOM_UART_H_

#include "ComStack_Types.h"
#include "DltUartCom_Cfg.h"

/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* function declarations */

void DltUartCom_Init(void);
Std_ReturnType DltUartCom_Transmit(PduIdType DltTxPduId, const PduInfoType* PduInfoPtr);

#endif
