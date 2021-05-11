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

#ifndef	_UL_DCCH_Message_H_
#define	_UL_DCCH_Message_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UL-DCCH-MessageType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UL-DCCH-Message */
typedef struct UL_DCCH_Message {
	UL_DCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DCCH_Message_H_ */
#include "asn_internal.h"
