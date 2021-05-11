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

#ifndef	_SCGFailureInformationEUTRA_H_
#define	_SCGFailureInformationEUTRA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCGFailureInformationEUTRA__criticalExtensions_PR {
	SCGFailureInformationEUTRA__criticalExtensions_PR_NOTHING,	/* No components present */
	SCGFailureInformationEUTRA__criticalExtensions_PR_scgFailureInformationEUTRA,
	SCGFailureInformationEUTRA__criticalExtensions_PR_criticalExtensionsFuture
} SCGFailureInformationEUTRA__criticalExtensions_PR;

/* Forward declarations */
struct SCGFailureInformationEUTRA_IEs;

/* SCGFailureInformationEUTRA */
typedef struct SCGFailureInformationEUTRA {
	struct SCGFailureInformationEUTRA__criticalExtensions {
		SCGFailureInformationEUTRA__criticalExtensions_PR present;
		union SCGFailureInformationEUTRA__criticalExtensions_u {
			struct SCGFailureInformationEUTRA_IEs	*scgFailureInformationEUTRA;
			struct SCGFailureInformationEUTRA__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCGFailureInformationEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCGFailureInformationEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_SCGFailureInformationEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_SCGFailureInformationEUTRA_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCGFailureInformationEUTRA-IEs.h"

#endif	/* _SCGFailureInformationEUTRA_H_ */
#include "asn_internal.h"
