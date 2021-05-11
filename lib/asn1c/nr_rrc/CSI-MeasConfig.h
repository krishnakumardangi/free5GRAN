/*
 * Copyright 2020-2021 Telecom Paris
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_CSI_MeasConfig_H_
#define	_CSI_MeasConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "NZP-CSI-RS-ResourceId.h"
#include "NZP-CSI-RS-ResourceSetId.h"
#include "CSI-IM-ResourceId.h"
#include "CSI-IM-ResourceSetId.h"
#include "CSI-SSB-ResourceSetId.h"
#include "CSI-ResourceConfigId.h"
#include "CSI-ReportConfigId.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetupRelease_CSI_AperiodicTriggerStateList;
struct SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList;
struct NZP_CSI_RS_Resource;
struct NZP_CSI_RS_ResourceSet;
struct CSI_IM_Resource;
struct CSI_IM_ResourceSet;
struct CSI_SSB_ResourceSet;
struct CSI_ResourceConfig;
struct CSI_ReportConfig;

/* CSI-MeasConfig */
typedef struct CSI_MeasConfig {
	struct CSI_MeasConfig__nzp_CSI_RS_ResourceToAddModList {
		A_SEQUENCE_OF(struct NZP_CSI_RS_Resource) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nzp_CSI_RS_ResourceToAddModList;
	struct CSI_MeasConfig__nzp_CSI_RS_ResourceToReleaseList {
		A_SEQUENCE_OF(NZP_CSI_RS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nzp_CSI_RS_ResourceToReleaseList;
	struct CSI_MeasConfig__nzp_CSI_RS_ResourceSetToAddModList {
		A_SEQUENCE_OF(struct NZP_CSI_RS_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nzp_CSI_RS_ResourceSetToAddModList;
	struct CSI_MeasConfig__nzp_CSI_RS_ResourceSetToReleaseList {
		A_SEQUENCE_OF(NZP_CSI_RS_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nzp_CSI_RS_ResourceSetToReleaseList;
	struct CSI_MeasConfig__csi_IM_ResourceToAddModList {
		A_SEQUENCE_OF(struct CSI_IM_Resource) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ResourceToAddModList;
	struct CSI_MeasConfig__csi_IM_ResourceToReleaseList {
		A_SEQUENCE_OF(CSI_IM_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ResourceToReleaseList;
	struct CSI_MeasConfig__csi_IM_ResourceSetToAddModList {
		A_SEQUENCE_OF(struct CSI_IM_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ResourceSetToAddModList;
	struct CSI_MeasConfig__csi_IM_ResourceSetToReleaseList {
		A_SEQUENCE_OF(CSI_IM_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ResourceSetToReleaseList;
	struct CSI_MeasConfig__csi_SSB_ResourceSetToAddModList {
		A_SEQUENCE_OF(struct CSI_SSB_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_SSB_ResourceSetToAddModList;
	struct CSI_MeasConfig__csi_SSB_ResourceSetToReleaseList {
		A_SEQUENCE_OF(CSI_SSB_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_SSB_ResourceSetToReleaseList;
	struct CSI_MeasConfig__csi_ResourceConfigToAddModList {
		A_SEQUENCE_OF(struct CSI_ResourceConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_ResourceConfigToAddModList;
	struct CSI_MeasConfig__csi_ResourceConfigToReleaseList {
		A_SEQUENCE_OF(CSI_ResourceConfigId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_ResourceConfigToReleaseList;
	struct CSI_MeasConfig__csi_ReportConfigToAddModList {
		A_SEQUENCE_OF(struct CSI_ReportConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_ReportConfigToAddModList;
	struct CSI_MeasConfig__csi_ReportConfigToReleaseList {
		A_SEQUENCE_OF(CSI_ReportConfigId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_ReportConfigToReleaseList;
	long	*reportTriggerSize;	/* OPTIONAL */
	struct SetupRelease_CSI_AperiodicTriggerStateList	*aperiodicTriggerStateList;	/* OPTIONAL */
	struct SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList	*semiPersistentOnPUSCH_TriggerStateList;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_MeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_MeasConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_MeasConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_MeasConfig_1[17];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"
#include "NZP-CSI-RS-Resource.h"
#include "NZP-CSI-RS-ResourceSet.h"
#include "CSI-IM-Resource.h"
#include "CSI-IM-ResourceSet.h"
#include "CSI-SSB-ResourceSet.h"
#include "CSI-ResourceConfig.h"
#include "CSI-ReportConfig.h"

#endif	/* _CSI_MeasConfig_H_ */
#include "asn_internal.h"
