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

#ifndef	_SIB7_H_
#define	_SIB7_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB7__warningMessageSegmentType {
	SIB7__warningMessageSegmentType_notLastSegment	= 0,
	SIB7__warningMessageSegmentType_lastSegment	= 1
} e_SIB7__warningMessageSegmentType;

/* SIB7 */
typedef struct SIB7 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	long	 warningMessageSegmentType;
	long	 warningMessageSegmentNumber;
	OCTET_STRING_t	 warningMessageSegment;
	OCTET_STRING_t	*dataCodingScheme;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB7_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_warningMessageSegmentType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SIB7;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB7_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB7_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _SIB7_H_ */
#include "asn_internal.h"
