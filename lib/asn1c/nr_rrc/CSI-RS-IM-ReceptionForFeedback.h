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

#ifndef	_CSI_RS_IM_ReceptionForFeedback_H_
#define	_CSI_RS_IM_ReceptionForFeedback_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC {
	CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n1	= 0,
	CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n2	= 1,
	CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n4	= 2,
	CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n8	= 3,
	CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n16	= 4,
	CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n32	= 5
} e_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC;

/* CSI-RS-IM-ReceptionForFeedback */
typedef struct CSI_RS_IM_ReceptionForFeedback {
	long	 maxConfigNumberNZP_CSI_RS_PerCC;
	long	 maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC;
	long	 maxConfigNumberCSI_IM_PerCC;
	long	 maxNumberSimultaneousNZP_CSI_RS_PerCC;
	long	 totalNumberPortsSimultaneousNZP_CSI_RS_PerCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_IM_ReceptionForFeedback_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxConfigNumberCSI_IM_PerCC_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_IM_ReceptionForFeedback;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_IM_ReceptionForFeedback_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_IM_ReceptionForFeedback_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_IM_ReceptionForFeedback_H_ */
#include "asn_internal.h"
