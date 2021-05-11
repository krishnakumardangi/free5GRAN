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

#ifndef	_UE_MRDC_CapabilityAddXDD_Mode_v1560_H_
#define	_UE_MRDC_CapabilityAddXDD_Mode_v1560_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasAndMobParametersMRDC_XDD_Diff_v1560;

/* UE-MRDC-CapabilityAddXDD-Mode-v1560 */
typedef struct UE_MRDC_CapabilityAddXDD_Mode_v1560 {
	struct MeasAndMobParametersMRDC_XDD_Diff_v1560	*measAndMobParametersMRDC_XDD_Diff_v1560;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_MRDC_CapabilityAddXDD_Mode_v1560_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_MRDC_CapabilityAddXDD_Mode_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_MRDC_CapabilityAddXDD_Mode_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_MRDC_CapabilityAddXDD_Mode_v1560_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasAndMobParametersMRDC-XDD-Diff-v1560.h"

#endif	/* _UE_MRDC_CapabilityAddXDD_Mode_v1560_H_ */
#include "asn_internal.h"
