/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2014, ArcCore AB, Sweden, www.arccore.com.
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

#include "Rte_LightActuator.h"


void lightActuatorMain(Rte_Instance self) {
	LightStatusImpl status = Rte_IRead_LightActuatorMain_InteriorLightStatus_status(self);

	switch (status) {
		case OFF:
			(void)Rte_Call_DigitalLight_Write(self, IOHWAB_LOW);
			break;
		case ON:
			Rte_Call_DigitalLight_Write(self, IOHWAB_HIGH);
			break;
		default:
			break;
	}
}