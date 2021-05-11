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

#ifndef	_SRB_ToAddModList_H_
#define	_SRB_ToAddModList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SRB_ToAddMod;

/* SRB-ToAddModList */
typedef struct SRB_ToAddModList {
	A_SEQUENCE_OF(struct SRB_ToAddMod) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRB_ToAddModList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRB_ToAddModList;
extern asn_SET_OF_specifics_t asn_SPC_SRB_ToAddModList_specs_1;
extern asn_TYPE_member_t asn_MBR_SRB_ToAddModList_1[1];
extern asn_per_constraints_t asn_PER_type_SRB_ToAddModList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRB-ToAddMod.h"

#endif	/* _SRB_ToAddModList_H_ */
#include "asn_internal.h"
