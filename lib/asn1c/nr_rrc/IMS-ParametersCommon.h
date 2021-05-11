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

#ifndef	_IMS_ParametersCommon_H_
#define	_IMS_ParametersCommon_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IMS_ParametersCommon__voiceOverEUTRA_5GC {
	IMS_ParametersCommon__voiceOverEUTRA_5GC_supported	= 0
} e_IMS_ParametersCommon__voiceOverEUTRA_5GC;
typedef enum IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC {
	IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC_supported	= 0
} e_IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC;

/* IMS-ParametersCommon */
typedef struct IMS_ParametersCommon {
	long	*voiceOverEUTRA_5GC;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct IMS_ParametersCommon__ext1 {
		long	*voiceOverSCG_BearerEUTRA_5GC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IMS_ParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_voiceOverEUTRA_5GC_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_voiceOverSCG_BearerEUTRA_5GC_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IMS_ParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_IMS_ParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_IMS_ParametersCommon_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IMS_ParametersCommon_H_ */
#include "asn_internal.h"
