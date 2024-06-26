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

#ifndef	_PUSCH_PathlossReferenceRS_H_
#define	_PUSCH_PathlossReferenceRS_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PUSCH-PathlossReferenceRS-Id.h"
#include "SSB-Index.h"
#include "NZP-CSI-RS-ResourceId.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_PathlossReferenceRS__referenceSignal_PR {
	PUSCH_PathlossReferenceRS__referenceSignal_PR_NOTHING,	/* No components present */
	PUSCH_PathlossReferenceRS__referenceSignal_PR_ssb_Index,
	PUSCH_PathlossReferenceRS__referenceSignal_PR_csi_RS_Index
} PUSCH_PathlossReferenceRS__referenceSignal_PR;

/* PUSCH-PathlossReferenceRS */
typedef struct PUSCH_PathlossReferenceRS {
	PUSCH_PathlossReferenceRS_Id_t	 pusch_PathlossReferenceRS_Id;
	struct PUSCH_PathlossReferenceRS__referenceSignal {
		PUSCH_PathlossReferenceRS__referenceSignal_PR present;
		union PUSCH_PathlossReferenceRS__referenceSignal_u {
			SSB_Index_t	 ssb_Index;
			NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} referenceSignal;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_PathlossReferenceRS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_PathlossReferenceRS;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_PathlossReferenceRS_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_PathlossReferenceRS_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_PathlossReferenceRS_H_ */
#include "asn_internal.h"
