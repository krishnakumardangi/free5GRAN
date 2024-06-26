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

#ifndef	_SRS_Config_H_
#define	_SRS_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "SRS-ResourceSetId.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "SRS-ResourceId.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_Config__tpc_Accumulation {
	SRS_Config__tpc_Accumulation_disabled	= 0
} e_SRS_Config__tpc_Accumulation;

/* Forward declarations */
struct SRS_ResourceSet;
struct SRS_Resource;

/* SRS-Config */
typedef struct SRS_Config {
	struct SRS_Config__srs_ResourceSetToReleaseList {
		A_SEQUENCE_OF(SRS_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceSetToReleaseList;
	struct SRS_Config__srs_ResourceSetToAddModList {
		A_SEQUENCE_OF(struct SRS_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceSetToAddModList;
	struct SRS_Config__srs_ResourceToReleaseList {
		A_SEQUENCE_OF(SRS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceToReleaseList;
	struct SRS_Config__srs_ResourceToAddModList {
		A_SEQUENCE_OF(struct SRS_Resource) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceToAddModList;
	long	*tpc_Accumulation;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tpc_Accumulation_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_Config_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRS-ResourceSet.h"
#include "SRS-Resource.h"

#endif	/* _SRS_Config_H_ */
#include "asn_internal.h"
