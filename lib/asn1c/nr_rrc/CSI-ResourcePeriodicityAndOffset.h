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

#ifndef	_CSI_ResourcePeriodicityAndOffset_H_
#define	_CSI_ResourcePeriodicityAndOffset_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_ResourcePeriodicityAndOffset_PR {
	CSI_ResourcePeriodicityAndOffset_PR_NOTHING,	/* No components present */
	CSI_ResourcePeriodicityAndOffset_PR_slots4,
	CSI_ResourcePeriodicityAndOffset_PR_slots5,
	CSI_ResourcePeriodicityAndOffset_PR_slots8,
	CSI_ResourcePeriodicityAndOffset_PR_slots10,
	CSI_ResourcePeriodicityAndOffset_PR_slots16,
	CSI_ResourcePeriodicityAndOffset_PR_slots20,
	CSI_ResourcePeriodicityAndOffset_PR_slots32,
	CSI_ResourcePeriodicityAndOffset_PR_slots40,
	CSI_ResourcePeriodicityAndOffset_PR_slots64,
	CSI_ResourcePeriodicityAndOffset_PR_slots80,
	CSI_ResourcePeriodicityAndOffset_PR_slots160,
	CSI_ResourcePeriodicityAndOffset_PR_slots320,
	CSI_ResourcePeriodicityAndOffset_PR_slots640
} CSI_ResourcePeriodicityAndOffset_PR;

/* CSI-ResourcePeriodicityAndOffset */
typedef struct CSI_ResourcePeriodicityAndOffset {
	CSI_ResourcePeriodicityAndOffset_PR present;
	union CSI_ResourcePeriodicityAndOffset_u {
		long	 slots4;
		long	 slots5;
		long	 slots8;
		long	 slots10;
		long	 slots16;
		long	 slots20;
		long	 slots32;
		long	 slots40;
		long	 slots64;
		long	 slots80;
		long	 slots160;
		long	 slots320;
		long	 slots640;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_ResourcePeriodicityAndOffset_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_ResourcePeriodicityAndOffset;
extern asn_CHOICE_specifics_t asn_SPC_CSI_ResourcePeriodicityAndOffset_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_ResourcePeriodicityAndOffset_1[13];
extern asn_per_constraints_t asn_PER_type_CSI_ResourcePeriodicityAndOffset_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_ResourcePeriodicityAndOffset_H_ */
#include "asn_internal.h"
