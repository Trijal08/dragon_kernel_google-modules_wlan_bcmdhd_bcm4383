/*
 * PMU core access APIs for DHD.
 *
 * Copyright (C) 2024, Broadcom.
 *
 *      Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2 (the "GPL"),
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the
 * following added to such license:
 *
 *      As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy and
 * distribute the resulting executable under terms of your choice, provided that
 * you also meet, for each linked independent module, the terms and conditions of
 * the license of that module.  An independent module is a module which is not
 * derived from this software.  The special exception does not apply to any
 * modifications of the software.
 *
 *
 * <<Broadcom-WL-IPTag/Dual:>>
 */

#ifndef _hndpmu_dhd_h_
#define _hndpmu_dhd_h_

#include <typedefs.h>
#include <osl_decl.h>
#include <siutils.h>

extern void si_sdiod_drive_strength_init(si_t *sih, osl_t *osh, uint32 drivestrength);
extern void si_pmu_set_min_res_mask(si_t *sih, osl_t *osh, uint min_res_mask);
extern int si_pmu_fast_lpo_disable(si_t *sih);

#endif /* _hndpmu_dhd_h_ */
