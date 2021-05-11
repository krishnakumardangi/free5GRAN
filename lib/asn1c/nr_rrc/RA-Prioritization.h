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

#ifndef	_RA_Prioritization_H_
#define	_RA_Prioritization_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RA_Prioritization__powerRampingStepHighPriority {
	RA_Prioritization__powerRampingStepHighPriority_dB0	= 0,
	RA_Prioritization__powerRampingStepHighPriority_dB2	= 1,
	RA_Prioritization__powerRampingStepHighPriority_dB4	= 2,
	RA_Prioritization__powerRampingStepHighPriority_dB6	= 3
} e_RA_Prioritization__powerRampingStepHighPriority;
typedef enum RA_Prioritization__scalingFactorBI {
	RA_Prioritization__scalingFactorBI_zero	= 0,
	RA_Prioritization__scalingFactorBI_dot25	= 1,
	RA_Prioritization__scalingFactorBI_dot5	= 2,
	RA_Prioritization__scalingFactorBI_dot75	= 3
} e_RA_Prioritization__scalingFactorBI;

/* RA-Prioritization */
typedef struct RA_Prioritization {
	long	 powerRampingStepHighPriority;
	long	*scalingFactorBI;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RA_Prioritization_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerRampingStepHighPriority_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scalingFactorBI_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RA_Prioritization;
extern asn_SEQUENCE_specifics_t asn_SPC_RA_Prioritization_specs_1;
extern asn_TYPE_member_t asn_MBR_RA_Prioritization_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RA_Prioritization_H_ */
#include "asn_internal.h"
