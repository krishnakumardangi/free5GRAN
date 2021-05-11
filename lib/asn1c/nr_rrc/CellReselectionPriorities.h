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

#ifndef	_CellReselectionPriorities_H_
#define	_CellReselectionPriorities_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellReselectionPriorities__t320 {
	CellReselectionPriorities__t320_min5	= 0,
	CellReselectionPriorities__t320_min10	= 1,
	CellReselectionPriorities__t320_min20	= 2,
	CellReselectionPriorities__t320_min30	= 3,
	CellReselectionPriorities__t320_min60	= 4,
	CellReselectionPriorities__t320_min120	= 5,
	CellReselectionPriorities__t320_min180	= 6,
	CellReselectionPriorities__t320_spare1	= 7
} e_CellReselectionPriorities__t320;

/* Forward declarations */
struct FreqPriorityListEUTRA;
struct FreqPriorityListNR;

/* CellReselectionPriorities */
typedef struct CellReselectionPriorities {
	struct FreqPriorityListEUTRA	*freqPriorityListEUTRA;	/* OPTIONAL */
	struct FreqPriorityListNR	*freqPriorityListNR;	/* OPTIONAL */
	long	*t320;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionPriorities_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t320_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionPriorities;
extern asn_SEQUENCE_specifics_t asn_SPC_CellReselectionPriorities_specs_1;
extern asn_TYPE_member_t asn_MBR_CellReselectionPriorities_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FreqPriorityListEUTRA.h"
#include "FreqPriorityListNR.h"

#endif	/* _CellReselectionPriorities_H_ */
#include "asn_internal.h"
