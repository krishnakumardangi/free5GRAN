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

#ifndef	_RRCSystemInfoRequest_H_
#define	_RRCSystemInfoRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCSystemInfoRequest__criticalExtensions_PR {
	RRCSystemInfoRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCSystemInfoRequest__criticalExtensions_PR_rrcSystemInfoRequest_r15,
	RRCSystemInfoRequest__criticalExtensions_PR_criticalExtensionsFuture
} RRCSystemInfoRequest__criticalExtensions_PR;

/* Forward declarations */
struct RRCSystemInfoRequest_r15_IEs;

/* RRCSystemInfoRequest */
typedef struct RRCSystemInfoRequest {
	struct RRCSystemInfoRequest__criticalExtensions {
		RRCSystemInfoRequest__criticalExtensions_PR present;
		union RRCSystemInfoRequest__criticalExtensions_u {
			struct RRCSystemInfoRequest_r15_IEs	*rrcSystemInfoRequest_r15;
			struct RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSystemInfoRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCSystemInfoRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCSystemInfoRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCSystemInfoRequest_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCSystemInfoRequest-r15-IEs.h"

#endif	/* _RRCSystemInfoRequest_H_ */
#include "asn_internal.h"
