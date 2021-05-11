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

#ifndef	_UEAssistanceInformation_IEs_H_
#define	_UEAssistanceInformation_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DelayBudgetReport;
struct UEAssistanceInformation_v1540_IEs;

/* UEAssistanceInformation-IEs */
typedef struct UEAssistanceInformation_IEs {
	struct DelayBudgetReport	*delayBudgetReport;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct UEAssistanceInformation_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAssistanceInformation_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DelayBudgetReport.h"
#include "UEAssistanceInformation-v1540-IEs.h"

#endif	/* _UEAssistanceInformation_IEs_H_ */
#include "asn_internal.h"
