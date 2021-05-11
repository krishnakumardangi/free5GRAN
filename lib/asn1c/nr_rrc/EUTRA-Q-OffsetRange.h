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

#ifndef	_EUTRA_Q_OffsetRange_H_
#define	_EUTRA_Q_OffsetRange_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_Q_OffsetRange {
	EUTRA_Q_OffsetRange_dB_24	= 0,
	EUTRA_Q_OffsetRange_dB_22	= 1,
	EUTRA_Q_OffsetRange_dB_20	= 2,
	EUTRA_Q_OffsetRange_dB_18	= 3,
	EUTRA_Q_OffsetRange_dB_16	= 4,
	EUTRA_Q_OffsetRange_dB_14	= 5,
	EUTRA_Q_OffsetRange_dB_12	= 6,
	EUTRA_Q_OffsetRange_dB_10	= 7,
	EUTRA_Q_OffsetRange_dB_8	= 8,
	EUTRA_Q_OffsetRange_dB_6	= 9,
	EUTRA_Q_OffsetRange_dB_5	= 10,
	EUTRA_Q_OffsetRange_dB_4	= 11,
	EUTRA_Q_OffsetRange_dB_3	= 12,
	EUTRA_Q_OffsetRange_dB_2	= 13,
	EUTRA_Q_OffsetRange_dB_1	= 14,
	EUTRA_Q_OffsetRange_dB0	= 15,
	EUTRA_Q_OffsetRange_dB1	= 16,
	EUTRA_Q_OffsetRange_dB2	= 17,
	EUTRA_Q_OffsetRange_dB3	= 18,
	EUTRA_Q_OffsetRange_dB4	= 19,
	EUTRA_Q_OffsetRange_dB5	= 20,
	EUTRA_Q_OffsetRange_dB6	= 21,
	EUTRA_Q_OffsetRange_dB8	= 22,
	EUTRA_Q_OffsetRange_dB10	= 23,
	EUTRA_Q_OffsetRange_dB12	= 24,
	EUTRA_Q_OffsetRange_dB14	= 25,
	EUTRA_Q_OffsetRange_dB16	= 26,
	EUTRA_Q_OffsetRange_dB18	= 27,
	EUTRA_Q_OffsetRange_dB20	= 28,
	EUTRA_Q_OffsetRange_dB22	= 29,
	EUTRA_Q_OffsetRange_dB24	= 30
} e_EUTRA_Q_OffsetRange;

/* EUTRA-Q-OffsetRange */
typedef long	 EUTRA_Q_OffsetRange_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EUTRA_Q_OffsetRange_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_Q_OffsetRange;
extern const asn_INTEGER_specifics_t asn_SPC_EUTRA_Q_OffsetRange_specs_1;
asn_struct_free_f EUTRA_Q_OffsetRange_free;
asn_struct_print_f EUTRA_Q_OffsetRange_print;
asn_constr_check_f EUTRA_Q_OffsetRange_constraint;
ber_type_decoder_f EUTRA_Q_OffsetRange_decode_ber;
der_type_encoder_f EUTRA_Q_OffsetRange_encode_der;
xer_type_decoder_f EUTRA_Q_OffsetRange_decode_xer;
xer_type_encoder_f EUTRA_Q_OffsetRange_encode_xer;
oer_type_decoder_f EUTRA_Q_OffsetRange_decode_oer;
oer_type_encoder_f EUTRA_Q_OffsetRange_encode_oer;
per_type_decoder_f EUTRA_Q_OffsetRange_decode_uper;
per_type_encoder_f EUTRA_Q_OffsetRange_encode_uper;
per_type_decoder_f EUTRA_Q_OffsetRange_decode_aper;
per_type_encoder_f EUTRA_Q_OffsetRange_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_Q_OffsetRange_H_ */
#include "asn_internal.h"
