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

#ifndef	_AccessStratumRelease_H_
#define	_AccessStratumRelease_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessStratumRelease {
	AccessStratumRelease_rel15	= 0,
	AccessStratumRelease_spare7	= 1,
	AccessStratumRelease_spare6	= 2,
	AccessStratumRelease_spare5	= 3,
	AccessStratumRelease_spare4	= 4,
	AccessStratumRelease_spare3	= 5,
	AccessStratumRelease_spare2	= 6,
	AccessStratumRelease_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_AccessStratumRelease;

/* AccessStratumRelease */
typedef long	 AccessStratumRelease_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AccessStratumRelease_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AccessStratumRelease;
extern const asn_INTEGER_specifics_t asn_SPC_AccessStratumRelease_specs_1;
asn_struct_free_f AccessStratumRelease_free;
asn_struct_print_f AccessStratumRelease_print;
asn_constr_check_f AccessStratumRelease_constraint;
ber_type_decoder_f AccessStratumRelease_decode_ber;
der_type_encoder_f AccessStratumRelease_encode_der;
xer_type_decoder_f AccessStratumRelease_decode_xer;
xer_type_encoder_f AccessStratumRelease_encode_xer;
oer_type_decoder_f AccessStratumRelease_decode_oer;
oer_type_encoder_f AccessStratumRelease_encode_oer;
per_type_decoder_f AccessStratumRelease_decode_uper;
per_type_encoder_f AccessStratumRelease_encode_uper;
per_type_decoder_f AccessStratumRelease_decode_aper;
per_type_encoder_f AccessStratumRelease_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessStratumRelease_H_ */
#include "asn_internal.h"
