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

#ifndef	_UAC_AccessCategory1_SelectionAssistanceInfo_H_
#define	_UAC_AccessCategory1_SelectionAssistanceInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UAC_AccessCategory1_SelectionAssistanceInfo {
	UAC_AccessCategory1_SelectionAssistanceInfo_a	= 0,
	UAC_AccessCategory1_SelectionAssistanceInfo_b	= 1,
	UAC_AccessCategory1_SelectionAssistanceInfo_c	= 2
} e_UAC_AccessCategory1_SelectionAssistanceInfo;

/* UAC-AccessCategory1-SelectionAssistanceInfo */
typedef long	 UAC_AccessCategory1_SelectionAssistanceInfo_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UAC_AccessCategory1_SelectionAssistanceInfo_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo;
extern const asn_INTEGER_specifics_t asn_SPC_UAC_AccessCategory1_SelectionAssistanceInfo_specs_1;
asn_struct_free_f UAC_AccessCategory1_SelectionAssistanceInfo_free;
asn_struct_print_f UAC_AccessCategory1_SelectionAssistanceInfo_print;
asn_constr_check_f UAC_AccessCategory1_SelectionAssistanceInfo_constraint;
ber_type_decoder_f UAC_AccessCategory1_SelectionAssistanceInfo_decode_ber;
der_type_encoder_f UAC_AccessCategory1_SelectionAssistanceInfo_encode_der;
xer_type_decoder_f UAC_AccessCategory1_SelectionAssistanceInfo_decode_xer;
xer_type_encoder_f UAC_AccessCategory1_SelectionAssistanceInfo_encode_xer;
oer_type_decoder_f UAC_AccessCategory1_SelectionAssistanceInfo_decode_oer;
oer_type_encoder_f UAC_AccessCategory1_SelectionAssistanceInfo_encode_oer;
per_type_decoder_f UAC_AccessCategory1_SelectionAssistanceInfo_decode_uper;
per_type_encoder_f UAC_AccessCategory1_SelectionAssistanceInfo_encode_uper;
per_type_decoder_f UAC_AccessCategory1_SelectionAssistanceInfo_decode_aper;
per_type_encoder_f UAC_AccessCategory1_SelectionAssistanceInfo_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UAC_AccessCategory1_SelectionAssistanceInfo_H_ */
#include "asn_internal.h"
